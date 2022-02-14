
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {int r_type; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_9__ {TYPE_2__ rmp; TYPE_1__ tstamp; struct TYPE_9__* next; } ;
typedef TYPE_3__ RMPCONN ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(void)
{
 RMPCONN *VAR_3;
 time_t VAR_4;





 VAR_4 = FUNC_3(((void*)0));
 for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if ((VAR_3->tstamp.tv_sec + VAR_1) < VAR_4) {
   FUNC_2(VAR_0, "%s: connection timed out (%u)",
          FUNC_0(VAR_3), VAR_3->rmp.r_type);
   FUNC_1(VAR_3);
  }
}
