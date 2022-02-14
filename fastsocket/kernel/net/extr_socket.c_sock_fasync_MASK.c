
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; struct fasync_struct* fasync_list; } ;
struct sock {int sk_callback_lock; } ;
struct file {int f_lock; int f_flags; struct socket* private_data; } ;
struct fasync_struct {int fa_fd; struct fasync_struct* fa_next; int magic; struct file* fa_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fasync_struct*) ;
 struct fasync_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(int VAR_5, struct file *VAR_6, int VAR_7)
{
 struct fasync_struct *VAR_8, *VAR_9 = ((void*)0), **VAR_10;
 struct socket *VAR_11;
 struct sock *VAR_12;

 if (VAR_7) {
  VAR_9 = FUNC_1(sizeof(struct fasync_struct), VAR_4);
  if (VAR_9 == ((void*)0))
   return -VAR_1;
 }

 VAR_11 = VAR_6->private_data;

 VAR_12 = VAR_11->sk;
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_9);
  return -VAR_0;
 }

 FUNC_2(VAR_12);

 FUNC_4(&VAR_6->f_lock);
 if (VAR_7)
  VAR_6->f_flags |= VAR_2;
 else
  VAR_6->f_flags &= ~VAR_2;
 FUNC_5(&VAR_6->f_lock);

 VAR_10 = &(VAR_11->fasync_list);

 for (VAR_8 = *VAR_10; VAR_8 != ((void*)0); VAR_10 = &VAR_8->fa_next, VAR_8 = *VAR_10)
  if (VAR_8->fa_file == VAR_6)
   break;

 if (VAR_7) {
  if (VAR_8 != ((void*)0)) {
   FUNC_6(&VAR_12->sk_callback_lock);
   VAR_8->fa_fd = VAR_5;
   FUNC_7(&VAR_12->sk_callback_lock);

   FUNC_0(VAR_9);
   goto out;
  }
  VAR_9->fa_file = VAR_6;
  VAR_9->fa_fd = VAR_5;
  VAR_9->magic = VAR_3;
  VAR_9->fa_next = VAR_11->fasync_list;
  FUNC_6(&VAR_12->sk_callback_lock);
  VAR_11->fasync_list = VAR_9;
  FUNC_7(&VAR_12->sk_callback_lock);
 } else {
  if (VAR_8 != ((void*)0)) {
   FUNC_6(&VAR_12->sk_callback_lock);
   *VAR_10 = VAR_8->fa_next;
   FUNC_7(&VAR_12->sk_callback_lock);
   FUNC_0(VAR_8);
  }
 }

out:
 FUNC_3(VAR_11->sk);
 return 0;
}
