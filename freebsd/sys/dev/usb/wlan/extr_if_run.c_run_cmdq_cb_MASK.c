
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct run_softc {size_t cmdq_exec; scalar_t__ cmdq_run; TYPE_1__* cmdq; } ;
struct TYPE_3__ {int (* func ) (TYPE_1__*) ;struct TYPE_3__* arg0; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct run_softc*,int ,char*,size_t,int) ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, int VAR_4)
{
 struct run_softc *VAR_5 = VAR_3;
 uint8_t VAR_6;


 FUNC_1(VAR_5);
 for (VAR_6 = VAR_5->cmdq_exec; VAR_5->cmdq[VAR_6].func && VAR_4;
     VAR_6 = VAR_5->cmdq_exec, VAR_4--) {
  FUNC_0(VAR_5, VAR_2, "cmdq_exec=%d pending=%d\n",
      VAR_6, VAR_4);
  if (VAR_5->cmdq_run == VAR_0) {




   if (VAR_5->cmdq[VAR_6].arg0)
    VAR_5->cmdq[VAR_6].func(VAR_5->cmdq[VAR_6].arg0);
   else
    VAR_5->cmdq[VAR_6].func(&VAR_5->cmdq[VAR_6]);
  }
  VAR_5->cmdq[VAR_6].arg0 = ((void*)0);
  VAR_5->cmdq[VAR_6].func = ((void*)0);
  VAR_5->cmdq_exec++;
  VAR_5->cmdq_exec &= VAR_1;
 }
 FUNC_2(VAR_5);
}
