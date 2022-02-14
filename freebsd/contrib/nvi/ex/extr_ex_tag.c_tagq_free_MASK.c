
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int tq; } ;
struct TYPE_10__ {int tagq; } ;
typedef TYPE_1__ TAGQ ;
typedef TYPE_1__ TAG ;
typedef int SCR ;
typedef TYPE_3__ EX_PRIVATE ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

int
FUNC_5(SCR *VAR_1, TAGQ *VAR_2)
{
 EX_PRIVATE *VAR_3;
 TAG *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 while ((VAR_4 = FUNC_2(VAR_2->tagq)) != ((void*)0)) {
  FUNC_3(VAR_2->tagq, VAR_4, VAR_0);
  FUNC_4(VAR_4);
 }





 if (FUNC_1(VAR_2, VAR_0))
  FUNC_3(VAR_3->tq, VAR_2, VAR_0);
 FUNC_4(VAR_2);
 return (0);
}
