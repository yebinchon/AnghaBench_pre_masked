
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockbuf {int sb_flags; int sb_aiojobq; } ;
struct socket {struct sockbuf so_snd; struct sockbuf so_rcv; } ;
struct TYPE_4__ {int aio_lio_opcode; } ;
struct kaiocb {long aio_done; TYPE_2__ uaiocb; TYPE_1__* fd_file; } ;
struct TYPE_3__ {struct socket* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct kaiocb*,int ) ;
 int FUNC_5 (struct kaiocb*) ;
 int FUNC_6 (struct kaiocb*) ;
 int FUNC_7 (struct kaiocb*,long,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct kaiocb *VAR_4)
{
 struct socket *VAR_5;
 struct sockbuf *VAR_6;
 long VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->fd_file->f_data;
 VAR_8 = VAR_4->uaiocb.aio_lio_opcode;
 if (VAR_8 == VAR_0)
  VAR_6 = &VAR_5->so_rcv;
 else {
  FUNC_0(VAR_8 == VAR_1);
  VAR_6 = &VAR_5->so_snd;
 }

 FUNC_1(VAR_6);
 if (!FUNC_6(VAR_4))
  FUNC_4(&VAR_6->sb_aiojobq, VAR_4, VAR_3);
 if (FUNC_3(&VAR_6->sb_aiojobq))
  VAR_6->sb_flags &= ~VAR_2;
 FUNC_2(VAR_6);

 VAR_7 = VAR_4->aio_done;
 if (VAR_7 != 0)
  FUNC_7(VAR_4, VAR_7, 0);
 else
  FUNC_5(VAR_4);
}
