
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockbuf {int sb_flags; int sb_aiojobq; } ;
struct socket {struct sockbuf so_snd; struct sockbuf so_rcv; TYPE_2__* so_proto; } ;
struct TYPE_6__ {int aio_lio_opcode; } ;
struct kaiocb {TYPE_3__ uaiocb; } ;
struct file {struct socket* f_data; } ;
struct TYPE_5__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_4__ {int (* pru_aio_queue ) (struct socket*,struct kaiocb*) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (int *,struct kaiocb*,int ) ;
 int FUNC_3 (struct kaiocb*,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct socket*,struct sockbuf*) ;
 int VAR_4 ;
 int FUNC_6 (struct socket*,struct sockbuf*) ;
 int FUNC_7 (struct socket*,struct kaiocb*) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_5, struct kaiocb *VAR_6)
{
 struct socket *VAR_7;
 struct sockbuf *VAR_8;
 int VAR_9;

 VAR_7 = VAR_5->f_data;
 VAR_9 = (*VAR_7->so_proto->pr_usrreqs->pru_aio_queue)(VAR_7, VAR_6);
 if (VAR_9 == 0)
  return (0);

 switch (VAR_6->uaiocb.aio_lio_opcode) {
 case 129:
  VAR_8 = &VAR_7->so_rcv;
  break;
 case 128:
  VAR_8 = &VAR_7->so_snd;
  break;
 default:
  return (VAR_0);
 }

 FUNC_0(VAR_8);
 if (!FUNC_3(VAR_6, VAR_4))
  FUNC_4("new job was cancelled");
 FUNC_2(&VAR_8->sb_aiojobq, VAR_6, VAR_3);
 if (!(VAR_8->sb_flags & VAR_2)) {
  if (FUNC_5(VAR_7, VAR_8))
   FUNC_6(VAR_7, VAR_8);
  else
   VAR_8->sb_flags |= VAR_1;
 }
 FUNC_1(VAR_8);
 return (0);
}
