
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ io_type; int io_flags; scalar_t__ io_error; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_20__ {TYPE_3__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_21__ {int (* vdev_op_io_done ) (TYPE_1__*) ;scalar_t__ vdev_op_leaf; } ;
typedef TYPE_3__ vdev_ops_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__ VAR_11 ;
 int * FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_12(zio_t *VAR_13)
{
 vdev_t *VAR_14 = VAR_13->io_vd;
 vdev_ops_t *VAR_15 = VAR_14 ? VAR_14->vdev_ops : &VAR_11;
 boolean_t VAR_16 = VAR_0;

 if (FUNC_11(VAR_13, VAR_5, VAR_10)) {
  return (((void*)0));
 }

 FUNC_0(VAR_13->io_type == VAR_8 ||
     VAR_13->io_type == VAR_9 || VAR_13->io_type == VAR_7);

 if (VAR_14 != ((void*)0) && VAR_14->vdev_ops->vdev_op_leaf &&
     (VAR_13->io_type == VAR_8 || VAR_13->io_type == VAR_9 ||
     VAR_13->io_type == VAR_7)) {

  if (VAR_13->io_type == VAR_9 &&
      !(VAR_13->io_flags & VAR_6))
   FUNC_4(VAR_13);

  FUNC_8(VAR_13);

  if (VAR_13->io_type == VAR_9)
   FUNC_6(VAR_13);

  if (VAR_12 && VAR_13->io_error == 0)
   VAR_13->io_error = FUNC_9(VAR_14,
       VAR_13, VAR_2);

  if (VAR_12 && VAR_13->io_error == 0)
   VAR_13->io_error = FUNC_10(VAR_13, VAR_2);

  if (VAR_13->io_error) {
   if (VAR_13->io_error == VAR_3 &&
       VAR_13->io_type == VAR_7) {

   } else if (!FUNC_5(VAR_14, VAR_13)) {
    VAR_13->io_error = FUNC_1(VAR_4);
   } else {
    VAR_16 = VAR_1;
   }
  }
 }

 VAR_15->vdev_op_io_done(VAR_13);

 if (VAR_16)
  FUNC_2(FUNC_7(VAR_14, VAR_13) == ((void*)0));

 return (VAR_13);
}
