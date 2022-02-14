
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ io_offset; int io_flags; scalar_t__ io_type; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_11__ {int vs_aux; } ;
struct TYPE_14__ {scalar_t__ vdev_psize; scalar_t__ vdev_guid; TYPE_1__ vdev_stat; } ;
typedef TYPE_4__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {scalar_t__ zi_cmd; scalar_t__ zi_guid; scalar_t__ zi_iotype; int zi_error; scalar_t__ zi_failfast; } ;
struct TYPE_15__ {TYPE_2__ zi_record; } ;
typedef TYPE_5__ inject_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(vdev_t *VAR_12, zio_t *VAR_13, int VAR_14)
{
 inject_handler_t *VAR_15;
 int VAR_16 = 0;





 if (VAR_13 != ((void*)0)) {
  uint64_t VAR_17 = VAR_13->io_offset;

  if (VAR_17 < VAR_5 ||
      VAR_17 >= VAR_12->vdev_psize - VAR_4)
   return (0);
 }

 FUNC_3(&VAR_11, VAR_2);

 for (VAR_15 = FUNC_1(&VAR_10); VAR_15 != ((void*)0);
     VAR_15 = FUNC_2(&VAR_10, VAR_15)) {

  if (VAR_15->zi_record.zi_cmd != VAR_6)
   continue;

  if (VAR_12->vdev_guid == VAR_15->zi_record.zi_guid) {
   if (VAR_15->zi_record.zi_failfast &&
       (VAR_13 == ((void*)0) || (VAR_13->io_flags &
       (VAR_7 | VAR_8)))) {
    continue;
   }


   if (VAR_13 != ((void*)0) &&
       VAR_15->zi_record.zi_iotype != VAR_9 &&
       VAR_15->zi_record.zi_iotype != VAR_13->io_type)
    continue;

   if (VAR_15->zi_record.zi_error == VAR_14) {




    if (VAR_14 == VAR_1)
     VAR_12->vdev_stat.vs_aux =
         VAR_3;






    if (!VAR_15->zi_record.zi_failfast &&
        VAR_13 != ((void*)0))
     VAR_13->io_flags |= VAR_7;

    VAR_16 = VAR_14;
    break;
   }
   if (VAR_15->zi_record.zi_error == VAR_1) {
    VAR_16 = FUNC_0(VAR_0);
    break;
   }
  }
 }

 FUNC_4(&VAR_11);

 return (VAR_16);
}
