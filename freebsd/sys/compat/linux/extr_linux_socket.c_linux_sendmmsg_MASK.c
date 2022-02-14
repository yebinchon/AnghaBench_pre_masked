
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct linux_sendmmsg_args {int vlen; int flags; int s; int msg; } ;
struct l_mmsghdr {int msg_len; int msg_hdr; } ;
typedef int l_uint ;


 struct l_mmsghdr* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (struct thread*,int ,int *,int ) ;

int
FUNC_3(struct thread *VAR_1, struct linux_sendmmsg_args *VAR_2)
{
 struct l_mmsghdr *VAR_3;
 l_uint VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2->vlen > VAR_0)
  VAR_2->vlen = VAR_0;

 VAR_3 = FUNC_0(VAR_2->msg);
 VAR_6 = 0;
 while (VAR_6 < VAR_2->vlen) {
  VAR_5 = FUNC_2(VAR_1, VAR_2->s, &VAR_3->msg_hdr,
      VAR_2->flags);
  if (VAR_5 != 0)
   break;

  VAR_4 = VAR_1->td_retval[0];
  VAR_5 = FUNC_1(&VAR_4, &VAR_3->msg_len, sizeof(VAR_3->msg_len));
  if (VAR_5 != 0)
   break;
  ++VAR_3;
  ++VAR_6;
 }
 if (VAR_5 == 0)
  VAR_1->td_retval[0] = VAR_6;
 return (VAR_5);
}
