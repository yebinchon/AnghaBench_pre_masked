
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int recno_t ;
typedef int VI_PRIVATE ;
struct TYPE_6__ {int lno; int len; int lb; } ;
typedef int TEXTH ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *,TYPE_1__*,int*) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_9(SCR *VAR_4, TEXTH *VAR_5, u_int32_t VAR_6)
{
 VI_PRIVATE *VAR_7;
 TEXT *VAR_8;
 recno_t VAR_9;
 int VAR_10;
 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = FUNC_2(VAR_5);

 if (FUNC_1(VAR_2))
  FUNC_7(VAR_4, VAR_8, &VAR_10);
 else
  VAR_10 = 0;
 if (FUNC_6(VAR_4, VAR_8->lno, VAR_8->lb, VAR_8->len) ||
     (VAR_10 && FUNC_8(VAR_4, VAR_8->lno, VAR_0)))
  return (1);

 for (VAR_9 = VAR_8->lno; (VAR_8 = FUNC_3(VAR_8, VAR_3)) != ((void*)0); ++VAR_9) {
  if (FUNC_1(VAR_2))
   FUNC_7(VAR_4, VAR_8, &VAR_10);
  else
   VAR_10 = 0;
  if (FUNC_5(VAR_4, 0, VAR_9, VAR_8->lb, VAR_8->len) ||
      (VAR_10 && FUNC_8(VAR_4, VAR_8->lno, VAR_0)))
   return (1);
 }






 FUNC_0(VAR_4, VAR_1);

 return (0);
}
