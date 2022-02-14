
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int io_flags; int io_error; scalar_t__ io_type; scalar_t__ io_priority; int io_stage; scalar_t__ io_cmd; scalar_t__ io_child_type; int io_logical; int (* io_physdone ) (int ) ;int io_pipeline; int io_size; int * io_vsd; TYPE_1__* io_vsd_ops; int io_spa; TYPE_4__* io_vd; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_17__ {TYPE_2__* vdev_ops; void* vdev_nowritecache; void* vdev_cant_write; } ;
typedef TYPE_4__ vdev_t ;
struct TYPE_15__ {scalar_t__ vdev_op_leaf; } ;
struct TYPE_14__ {int (* vsd_free ) (TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_11(zio_t *VAR_31)
{
 vdev_t *VAR_32 = VAR_31->io_vd;

 if (FUNC_10(VAR_31, VAR_8, VAR_24)) {
  return (((void*)0));
 }

 if (VAR_32 == ((void*)0) && !(VAR_31->io_flags & VAR_9))
  FUNC_4(VAR_31->io_spa, VAR_6, VAR_31);

 if (VAR_31->io_vsd != ((void*)0)) {
  VAR_31->io_vsd_ops->vsd_free(VAR_31);
  VAR_31->io_vsd = ((void*)0);
 }

 if (VAR_29 && VAR_31->io_error == 0)
  VAR_31->io_error = FUNC_8(VAR_31, VAR_2);

 if (VAR_31->io_type == VAR_21 &&
     VAR_31->io_priority != VAR_18) {
  switch (VAR_31->io_error) {
  case 0:
   FUNC_3(VAR_25, VAR_31->io_size);
   FUNC_2(VAR_27);
   break;
  case 128:
   FUNC_2(VAR_28);
   break;
  default:
   FUNC_2(VAR_26);
   break;
  }
 }







 if (VAR_31->io_error && VAR_32 == ((void*)0) &&
     !(VAR_31->io_flags & (VAR_14 | VAR_16))) {
  FUNC_0(!(VAR_31->io_flags & VAR_13));
  FUNC_0(!(VAR_31->io_flags & VAR_15));
  VAR_31->io_error = 0;
  VAR_31->io_flags |= VAR_16 |
      VAR_12 | VAR_11;
  VAR_31->io_stage = VAR_19 >> 1;
  FUNC_9(VAR_31, VAR_20,
      VAR_30);
  return (((void*)0));
 }





 if (VAR_31->io_error && VAR_32 != ((void*)0) && VAR_32->vdev_ops->vdev_op_leaf &&
     !FUNC_7(VAR_32, VAR_31))
  VAR_31->io_error = FUNC_1(VAR_5);





 if (VAR_31->io_error == VAR_5 && VAR_31->io_type == VAR_23 &&
     VAR_32 != ((void*)0) && !VAR_32->vdev_ops->vdev_op_leaf) {
  VAR_32->vdev_cant_write = VAR_0;
 }






 if ((VAR_31->io_error == VAR_3 || VAR_31->io_error == VAR_4) &&
     VAR_31->io_type == VAR_22 &&
     VAR_31->io_cmd == VAR_1 && VAR_32 != ((void*)0))
  VAR_32->vdev_nowritecache = VAR_0;

 if (VAR_31->io_error)
  VAR_31->io_pipeline = VAR_17;

 if (VAR_32 != ((void*)0) && VAR_32->vdev_ops->vdev_op_leaf &&
     VAR_31->io_physdone != ((void*)0)) {
  FUNC_0(!(VAR_31->io_flags & VAR_10));
  FUNC_0(VAR_31->io_child_type == VAR_7);
  VAR_31->io_physdone(VAR_31->io_logical);
 }

 return (VAR_31);
}
