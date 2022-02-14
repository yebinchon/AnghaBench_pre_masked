
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cno; int lno; } ;
typedef int SCR ;
typedef TYPE_1__ MARK ;
typedef int CHAR_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int **,size_t*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,size_t*,int,int ,char) ;

int
FUNC_6(SCR *VAR_2, MARK *VAR_3, MARK *VAR_4)
{
 CHAR_T *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_6 = 0;
 if (FUNC_2(VAR_2, VAR_1)) {
  VAR_5 = FUNC_1("        ");
  if (FUNC_5(VAR_2, VAR_5, &VAR_6, 8, 0, 0))
   return (1);
 }

 if (FUNC_3(VAR_2, VAR_3->lno, VAR_0, &VAR_5, &VAR_7))
  return (1);

 if (FUNC_5(VAR_2, VAR_5, &VAR_6, VAR_3->cno, 0, ' '))
  return (1);
 VAR_5 += VAR_3->cno;
 if (FUNC_5(VAR_2,
     VAR_5, &VAR_6, VAR_4->cno == VAR_3->cno ? 1 : VAR_4->cno - VAR_3->cno, 0, '^'))
  return (1);
 if (FUNC_0(VAR_2))
  return (1);
 VAR_5 = FUNC_1("[ynq]");
 if (FUNC_5(VAR_2, VAR_5, &VAR_6, 5, 0, 0))
  return (1);
 (void)FUNC_4(VAR_2);
 return (0);
}
