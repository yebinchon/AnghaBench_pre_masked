
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lno; int ccl_parent; int nextdisp; } ;
typedef TYPE_1__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *,size_t,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;

int
FUNC_5(SCR *VAR_3)
{
 size_t VAR_4;
 CHAR_T *VAR_5;

 if (FUNC_1(VAR_3, VAR_3->lno, 0, &VAR_5, &VAR_4) && VAR_3->lno == 1) {
  FUNC_4(VAR_3, ((void*)0), VAR_2);
  return (1);
 }
 if (VAR_4 == 0) {
  FUNC_3(VAR_3, VAR_0, "307|No ex command to execute");
  return (1);
 }


 if (FUNC_2(VAR_3, ((void*)0), VAR_5, VAR_4, 0, 0))
  return (1);


 VAR_3->nextdisp = VAR_3->ccl_parent;
 FUNC_0(VAR_3, VAR_1);
 return (0);
}
