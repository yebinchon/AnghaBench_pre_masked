
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iflags; } ;
struct TYPE_5__ {int tq; } ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;
typedef TYPE_2__ EXCMD ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;

int
FUNC_7(SCR *VAR_4, EXCMD *VAR_5)
{
 EX_PRIVATE *VAR_6;

 VAR_6 = FUNC_0(VAR_4);


 if (FUNC_2(VAR_6->tq)) {
  FUNC_5(VAR_4, VAR_1, ((void*)0));
  return (1);
 }


 return (FUNC_6(VAR_4, FUNC_4(FUNC_3(VAR_6->tq, VAR_2), VAR_2, VAR_3),
     FUNC_1(VAR_5->iflags, VAR_0)));
}
