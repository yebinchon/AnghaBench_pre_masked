
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int scroll_t ;
typedef int recno_t ;
struct TYPE_5__ {scalar_t__ cno; int lno; } ;
typedef int SMAP ;
typedef int SCR ;
typedef TYPE_1__ MARK ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;


 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int ,int,int *) ;

int
FUNC_7(SCR *VAR_1, MARK *VAR_2, recno_t VAR_3, scroll_t VAR_4)
{
 SMAP *VAR_5;






 FUNC_0(FUNC_1(VAR_1), VAR_0);


 if (FUNC_4(VAR_1, &VAR_5))
  return (1);

 switch (VAR_4) {
 case 135:
 case 131:
 case 130:
 case 129:
  if (FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
   return (1);
  break;
 case 134:
 case 133:
 case 132:
 case 128:
  if (FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
   return (1);
  break;
 default:
  FUNC_2();
 }
 if (VAR_4 != 133 && VAR_4 != 130 &&
     VAR_2->cno == 0 && FUNC_3(VAR_1, VAR_2->lno, &VAR_2->cno))
  return (1);

 return (0);
}
