
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_splice_state {size_t len; unsigned int flags; struct pipe_inode_info* pipe; } ;
struct socket {TYPE_1__* file; struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; scalar_t__ sk_err; } ;
struct pipe_inode_info {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sock*,struct tcp_splice_state*) ;
 int VAR_7 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,long*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (long) ;
 long FUNC_8 (struct sock*,int) ;
 scalar_t__ FUNC_9 (int ) ;

ssize_t FUNC_10(struct socket *VAR_8, loff_t *VAR_9,
   struct pipe_inode_info *VAR_10, size_t VAR_11,
   unsigned int VAR_12)
{
 struct sock *VAR_13 = VAR_8->sk;
 struct tcp_splice_state VAR_14 = {
  .pipe = VAR_10,
  .len = VAR_11,
  .flags = VAR_12,
 };
 long VAR_15;
 ssize_t VAR_16;
 int VAR_17;




 if (FUNC_9(*VAR_9))
  return -VAR_2;

 VAR_17 = VAR_16 = 0;

 FUNC_1(VAR_13);

 VAR_15 = FUNC_8(VAR_13, VAR_8->file->f_flags & VAR_3);
 while (VAR_14.len) {
  VAR_17 = FUNC_0(VAR_13, &VAR_14);
  if (VAR_17 < 0)
   break;
  else if (!VAR_17) {
   if (VAR_16)
    break;
   if (FUNC_6(VAR_13, VAR_5))
    break;
   if (VAR_13->sk_err) {
    VAR_17 = FUNC_5(VAR_13);
    break;
   }
   if (VAR_13->sk_shutdown & VAR_4)
    break;
   if (VAR_13->sk_state == VAR_6) {




    if (!FUNC_6(VAR_13, VAR_5))
     VAR_17 = -VAR_1;
    break;
   }
   if (!VAR_15) {
    VAR_17 = -VAR_0;
    break;
   }
   FUNC_4(VAR_13, &VAR_15);
   if (FUNC_3(VAR_7)) {
    VAR_17 = FUNC_7(VAR_15);
    break;
   }
   continue;
  }
  VAR_14.len -= VAR_17;
  VAR_16 += VAR_17;

  if (!VAR_15)
   break;
  FUNC_2(VAR_13);
  FUNC_1(VAR_13);

  if (VAR_13->sk_err || VAR_13->sk_state == VAR_6 ||
      (VAR_13->sk_shutdown & VAR_4) ||
      FUNC_3(VAR_7))
   break;
 }

 FUNC_2(VAR_13);

 if (VAR_16)
  return VAR_16;

 return VAR_17;
}
