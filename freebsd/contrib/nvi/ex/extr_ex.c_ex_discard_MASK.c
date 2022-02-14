
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ clen; struct TYPE_12__* if_name; struct TYPE_12__* o_cp; int rq; int agv_flags; } ;
struct TYPE_13__ {int ecq; TYPE_2__ excmd; } ;
struct TYPE_11__ {TYPE_3__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ RANGE ;
typedef TYPE_3__ GS ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_3)
{
 GS *VAR_4;
 EXCMD *VAR_5;
 RANGE *VAR_6;





 for (VAR_4 = VAR_3->gp;;) {
  VAR_5 = FUNC_2(VAR_4->ecq);
  if (FUNC_1(VAR_5, VAR_1))
   FUNC_6(VAR_5->if_name);

  if (VAR_5 == &VAR_4->excmd)
   break;
  if (FUNC_0(VAR_5->agv_flags, VAR_0)) {
   while ((VAR_6 = FUNC_4(VAR_5->rq)) != ((void*)0)) {
    FUNC_5(VAR_5->rq, VAR_6, VAR_2);
    FUNC_6(VAR_6);
   }
   FUNC_6(VAR_5->o_cp);
  }
  FUNC_3(VAR_4->ecq, VAR_2);
  FUNC_6(VAR_5);
 }

 VAR_5->if_name = ((void*)0);
 VAR_5->clen = 0;
 return (0);
}
