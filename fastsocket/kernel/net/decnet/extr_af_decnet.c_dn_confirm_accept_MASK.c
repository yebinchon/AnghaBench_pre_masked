
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_socket; int sk_sleep; } ;
struct dn_scp {scalar_t__ state; int segsize_loc; } ;
typedef int gfp_t ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dn_scp* FUNC_1 (struct sock*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sock*) ;
 int VAR_9 ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct sock*) ;
 long FUNC_9 (long) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (long) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_11, long *VAR_12, gfp_t VAR_13)
{
 struct dn_scp *VAR_14 = FUNC_1(VAR_11);
 FUNC_0(VAR_10);
 int VAR_15;

 if (VAR_14->state != VAR_1)
  return -VAR_4;

 VAR_14->state = VAR_0;
 VAR_14->segsize_loc = FUNC_4(FUNC_2(VAR_11), VAR_5);
 FUNC_3(VAR_11, VAR_13);

 FUNC_7(VAR_11->sk_sleep, &VAR_10, VAR_8);
 for(;;) {
  FUNC_8(VAR_11);
  if (VAR_14->state == VAR_0)
   *VAR_12 = FUNC_9(*VAR_12);
  FUNC_6(VAR_11);
  VAR_15 = 0;
  if (VAR_14->state == VAR_2)
   break;
  VAR_15 = FUNC_11(VAR_11);
  if (VAR_15)
   break;
  VAR_15 = FUNC_12(*VAR_12);
  if (FUNC_10(VAR_9))
   break;
  VAR_15 = -VAR_3;
  if (!*VAR_12)
   break;
  FUNC_7(VAR_11->sk_sleep, &VAR_10, VAR_8);
 }
 FUNC_5(VAR_11->sk_sleep, &VAR_10);
 if (VAR_15 == 0) {
  VAR_11->sk_socket->state = VAR_6;
 } else if (VAR_14->state != VAR_0) {
  VAR_11->sk_socket->state = VAR_7;
 }
 return VAR_15;
}
