
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int io_error; scalar_t__ io_type; int io_cmd; int io_flags; int io_size; int io_offset; int io_abd; int io_target_timestamp; int * io_vsd_ops; struct dk_callback* io_vsd; TYPE_3__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_16__ {int vdev_nowritecache; TYPE_4__* vdev_tsd; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_17__ {int * vd_lh; scalar_t__ vd_ldi_offline; } ;
typedef TYPE_4__ vdev_disk_t ;
struct TYPE_14__ {int b_addr; } ;
struct TYPE_19__ {int b_flags; int (* b_iodone ) () ;int b_bufsize; int b_lblkno; TYPE_1__ b_un; int b_bcount; } ;
struct TYPE_18__ {TYPE_6__ vb_buf; TYPE_2__* vb_io; } ;
typedef TYPE_5__ vdev_buf_t ;
struct dk_callback {TYPE_2__* dkc_cookie; int dkc_flag; int dkc_callback; } ;
typedef TYPE_6__ buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_15 ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,uintptr_t,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_6__*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_19 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14(zio_t *VAR_20)
{
 vdev_t *VAR_21 = VAR_20->io_vd;
 vdev_disk_t *VAR_22 = VAR_21->vdev_tsd;
 vdev_buf_t *VAR_23;
 struct dk_callback *VAR_24;
 buf_t *VAR_25;
 int VAR_26;





 if (VAR_22 == ((void*)0) || (VAR_22->vd_ldi_offline && VAR_22->vd_lh == ((void*)0))) {
  VAR_20->io_error = FUNC_1(VAR_6);
  FUNC_13(VAR_20);
  return;
 }

 if (VAR_20->io_type == VAR_12) {

  if (!FUNC_10(VAR_21)) {
   VAR_20->io_error = FUNC_1(VAR_6);
   FUNC_13(VAR_20);
   return;
  }

  switch (VAR_20->io_cmd) {

  case 128:

   if (VAR_19)
    break;

   if (VAR_21->vdev_nowritecache) {
    VAR_20->io_error = FUNC_1(VAR_5);
    break;
   }

   VAR_20->io_vsd = VAR_24 = FUNC_6(sizeof (*VAR_24), VAR_9);
   VAR_20->io_vsd_ops = &VAR_18;

   VAR_24->dkc_callback = VAR_17;
   VAR_24->dkc_flag = VAR_8;
   VAR_24->dkc_cookie = VAR_20;

   VAR_26 = FUNC_8(VAR_22->vd_lh, VAR_20->io_cmd,
       (uintptr_t)VAR_24, VAR_7, VAR_15, ((void*)0));

   if (VAR_26 == 0) {





    return;
   }

   VAR_20->io_error = VAR_26;

   break;

  default:
   VAR_20->io_error = FUNC_1(VAR_5);
  }

  FUNC_11(VAR_20);
  return;
 }

 FUNC_0(VAR_20->io_type == VAR_13 || VAR_20->io_type == VAR_14);
 VAR_20->io_target_timestamp = FUNC_12(VAR_20);

 VAR_23 = FUNC_6(sizeof (vdev_buf_t), VAR_9);

 VAR_23->vb_io = VAR_20;
 VAR_25 = &VAR_23->vb_buf;

 FUNC_5(VAR_25);
 VAR_25->b_flags = VAR_0 | VAR_2 |
     (VAR_20->io_type == VAR_13 ? VAR_3 : VAR_4);
 if (!(VAR_20->io_flags & (VAR_10 | VAR_11)))
  VAR_25->b_flags |= VAR_1;
 VAR_25->b_bcount = VAR_20->io_size;

 if (VAR_20->io_type == VAR_13) {
  VAR_25->b_un.b_addr =
      FUNC_3(VAR_20->io_abd, VAR_20->io_size);
 } else {
  VAR_25->b_un.b_addr =
      FUNC_4(VAR_20->io_abd, VAR_20->io_size);
 }

 VAR_25->b_lblkno = FUNC_7(VAR_20->io_offset);
 VAR_25->b_bufsize = VAR_20->io_size;
 VAR_25->b_iodone = (int (*)())VAR_16;


 FUNC_2(FUNC_9(VAR_22->vd_lh, VAR_25) == 0);
}
