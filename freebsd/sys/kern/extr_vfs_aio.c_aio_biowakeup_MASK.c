
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {int kaio_buffer_count; } ;
struct TYPE_3__ {size_t aio_nbytes; scalar_t__ aio_lio_opcode; } ;
struct kaiocb {int outblock; int inblock; TYPE_1__ uaiocb; struct bio* bp; int npages; int pages; TYPE_2__* pbuf; struct proc* userproc; } ;
struct bio {size_t bio_resid; int bio_flags; int bio_error; scalar_t__ bio_caller1; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct kaiocb*,size_t,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct bio*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct bio *VAR_5)
{
 struct kaiocb *VAR_6 = (struct kaiocb *)VAR_5->bio_caller1;
 struct proc *VAR_7;
 struct kaioinfo *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;


 VAR_7 = VAR_6->userproc;
 VAR_8 = VAR_7->p_aioinfo;
 if (VAR_6->pbuf) {
  FUNC_6((vm_offset_t)VAR_6->pbuf->b_data, VAR_6->npages);
  FUNC_7(VAR_4, VAR_6->pbuf);
  VAR_6->pbuf = ((void*)0);
  FUNC_3(&VAR_2, 1);
  FUNC_0(VAR_8);
  VAR_8->kaio_buffer_count--;
  FUNC_1(VAR_8);
 } else
  FUNC_3(&VAR_3, 1);
 FUNC_8(VAR_6->pages, VAR_6->npages);

 VAR_5 = VAR_6->bp;
 VAR_6->bp = ((void*)0);
 VAR_9 = VAR_6->uaiocb.aio_nbytes - VAR_5->bio_resid;
 VAR_10 = 0;
 if (VAR_5->bio_flags & VAR_0)
  VAR_10 = VAR_5->bio_error;
 VAR_11 = FUNC_4(VAR_9);
 if (VAR_6->uaiocb.aio_lio_opcode == VAR_1)
  VAR_6->outblock += VAR_11;
 else
  VAR_6->inblock += VAR_11;

 if (VAR_10)
  FUNC_2(VAR_6, -1, VAR_10);
 else
  FUNC_2(VAR_6, VAR_9, 0);

 FUNC_5(VAR_5);
}
