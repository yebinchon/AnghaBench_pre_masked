
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
struct TYPE_4__ {int bo_bsize; } ;
struct vnode {scalar_t__ v_type; TYPE_1__ v_bufobj; } ;
struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {scalar_t__ kaio_buffer_count; } ;
struct aiocb {scalar_t__ aio_lio_opcode; int aio_nbytes; int aio_offset; scalar_t__ aio_buf; } ;
struct kaiocb {struct bio* bp; struct buf* pbuf; int npages; int pages; struct file* fd_file; struct aiocb uaiocb; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;
struct cdevsw {int d_flags; int (* d_strategy ) (struct bio*) ;} ;
struct cdev {int si_iosize_max; int si_flags; } ;
struct buf {void* b_data; } ;
struct bio {int bio_length; int bio_bcount; int bio_ma_offset; int bio_flags; void* bio_data; int bio_ma_n; int bio_ma; void* bio_caller1; struct cdev* bio_dev; int bio_cmd; int bio_offset; int bio_done; } ;
struct TYPE_6__ {TYPE_2__* p_vmspace; } ;
struct TYPE_5__ {int vm_map; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buf*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,int) ;
 TYPE_3__* VAR_18 ;
 int FUNC_4 (struct cdev*,int) ;
 struct cdevsw* FUNC_5 (struct vnode*,struct cdev**,int*) ;
 struct bio* FUNC_6 () ;
 int FUNC_7 (struct bio*) ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (struct bio*) ;
 struct buf* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct buf*) ;
 void* VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_13 (int *,int,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_14(struct proc *VAR_25, struct kaiocb *VAR_26)
{
 struct aiocb *VAR_27;
 struct file *VAR_28;
 struct bio *VAR_29;
 struct buf *VAR_30;
 struct vnode *VAR_31;
 struct cdevsw *VAR_32;
 struct cdev *VAR_33;
 struct kaioinfo *VAR_34;
 int VAR_35, VAR_36, VAR_37;
 vm_prot_t VAR_38;

 VAR_27 = &VAR_26->uaiocb;
 VAR_28 = VAR_26->fd_file;

 if (!(VAR_27->aio_lio_opcode == VAR_9 ||
     VAR_27->aio_lio_opcode == VAR_8))
  return (-1);
 if (VAR_28 == ((void*)0) || VAR_28->f_type != VAR_3)
  return (-1);

 VAR_31 = VAR_28->f_vnode;
 if (VAR_31->v_type != VAR_14)
  return (-1);
 if (VAR_31->v_bufobj.bo_bsize == 0)
  return (-1);
 if (VAR_27->aio_nbytes % VAR_31->v_bufobj.bo_bsize)
  return (-1);

 VAR_36 = 0;
 VAR_32 = FUNC_5(VAR_31, &VAR_33, &VAR_36);
 if (VAR_32 == ((void*)0))
  return (VAR_7);

 if ((VAR_32->d_flags & VAR_4) == 0) {
  VAR_35 = -1;
  goto unref;
 }
 if (VAR_27->aio_nbytes > VAR_33->si_iosize_max) {
  VAR_35 = -1;
  goto unref;
 }

 VAR_34 = VAR_25->p_aioinfo;
 VAR_37 = (vm_offset_t)VAR_27->aio_buf & VAR_12;
 if ((VAR_33->si_flags & VAR_13) && VAR_24) {
  if (VAR_27->aio_nbytes > VAR_10) {
   VAR_35 = -1;
   goto unref;
  }

  VAR_30 = ((void*)0);
 } else {
  if (VAR_27->aio_nbytes > VAR_10 - VAR_37) {
   VAR_35 = -1;
   goto unref;
  }
  if (VAR_34->kaio_buffer_count >= VAR_19) {
   VAR_35 = VAR_5;
   goto unref;
  }

  VAR_26->pbuf = VAR_30 = FUNC_11(VAR_22, VAR_11);
  FUNC_2(VAR_30);
  FUNC_0(VAR_34);
  VAR_34->kaio_buffer_count++;
  FUNC_1(VAR_34);
 }
 VAR_26->bp = VAR_29 = FUNC_6();

 VAR_29->bio_length = VAR_27->aio_nbytes;
 VAR_29->bio_bcount = VAR_27->aio_nbytes;
 VAR_29->bio_done = VAR_17;
 VAR_29->bio_data = (void *)(uintptr_t)VAR_27->aio_buf;
 VAR_29->bio_offset = VAR_27->aio_offset;
 VAR_29->bio_cmd = VAR_27->aio_lio_opcode == VAR_9 ? VAR_2 : VAR_0;
 VAR_29->bio_dev = VAR_33;
 VAR_29->bio_caller1 = (void *)VAR_26;

 VAR_38 = VAR_15;
 if (VAR_27->aio_lio_opcode == VAR_8)
  VAR_38 |= VAR_16;
 VAR_26->npages = FUNC_13(&VAR_18->p_vmspace->vm_map,
     (vm_offset_t)VAR_29->bio_data, VAR_29->bio_length, VAR_38, VAR_26->pages,
     FUNC_8(VAR_26->pages));
 if (VAR_26->npages < 0) {
  VAR_35 = VAR_6;
  goto doerror;
 }
 if (VAR_30 != ((void*)0)) {
  FUNC_9((vm_offset_t)VAR_30->b_data,
      VAR_26->pages, VAR_26->npages);
  VAR_29->bio_data = VAR_30->b_data + VAR_37;
  FUNC_3(&VAR_20, 1);
 } else {
  VAR_29->bio_ma = VAR_26->pages;
  VAR_29->bio_ma_n = VAR_26->npages;
  VAR_29->bio_ma_offset = VAR_37;
  VAR_29->bio_data = VAR_23;
  VAR_29->bio_flags |= VAR_1;
  FUNC_3(&VAR_21, 1);
 }


 VAR_32->d_strategy(VAR_29);
 FUNC_4(VAR_33, VAR_36);
 return (0);

doerror:
 if (VAR_30 != ((void*)0)) {
  FUNC_0(VAR_34);
  VAR_34->kaio_buffer_count--;
  FUNC_1(VAR_34);
  FUNC_12(VAR_22, VAR_30);
  VAR_26->pbuf = ((void*)0);
 }
 FUNC_7(VAR_29);
 VAR_26->bp = ((void*)0);
unref:
 FUNC_4(VAR_33, VAR_36);
 return (VAR_35);
}
