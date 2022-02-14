
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ io_spa; scalar_t__ io_txg; int io_pipeline; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_8__ {scalar_t__ zi_cmd; scalar_t__ zi_timer; scalar_t__ zi_duration; } ;
struct TYPE_10__ {scalar_t__ zi_spa; TYPE_1__ zi_record; } ;
typedef TYPE_3__ inject_handler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

void
FUNC_6(zio_t *VAR_5)
{
 inject_handler_t *VAR_6;

 FUNC_3(&VAR_4, VAR_0);

 for (VAR_6 = FUNC_1(&VAR_3); VAR_6 != ((void*)0);
     VAR_6 = FUNC_2(&VAR_3, VAR_6)) {


  if (VAR_5->io_spa != VAR_6->zi_spa ||
      VAR_6->zi_record.zi_cmd != VAR_1)
   continue;





  if (VAR_6->zi_record.zi_timer == 0) {
   if (VAR_6->zi_record.zi_duration > 0)
    VAR_6->zi_record.zi_timer = FUNC_0();
   else
    VAR_6->zi_record.zi_timer = VAR_5->io_txg;
  }


  if (FUNC_5(100) < 60)
   VAR_5->io_pipeline &= ~VAR_2;
  break;
 }

 FUNC_4(&VAR_4);
}
