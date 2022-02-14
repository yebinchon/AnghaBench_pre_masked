
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int recno_t ;
struct TYPE_13__ {int lno; } ;
struct TYPE_12__ {int * gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef int GS ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,size_t,size_t,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,size_t*,int,int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*) ;

int
FUNC_10(SCR *VAR_3, EXCMD *VAR_4, MARK *VAR_5, MARK *VAR_6, u_int32_t VAR_7)
{
 GS *VAR_8;
 recno_t VAR_9, VAR_10;
 size_t VAR_11, VAR_12;
 CHAR_T *VAR_13;
 CHAR_T VAR_14[10];

 FUNC_3(VAR_3, VAR_4);

 VAR_8 = VAR_3->gp;
 for (VAR_9 = VAR_5->lno, VAR_10 = VAR_6->lno; VAR_9 <= VAR_10; ++VAR_9) {
  VAR_11 = 0;






  if (FUNC_2(VAR_1)) {
   if (VAR_9 <= 999999) {
    FUNC_5(VAR_14, FUNC_4(VAR_14), FUNC_1("%6u  "), VAR_9);
    VAR_13 = VAR_14;
   } else
    VAR_13 = FUNC_1("TOOBIG  ");
   if (FUNC_8(VAR_3, VAR_13, &VAR_11, 8, 0, 0))
    return (1);
  }






  if (FUNC_6(VAR_3, VAR_9, VAR_0, &VAR_13, &VAR_12))
   return (1);

  if (VAR_12 == 0 && !FUNC_2(VAR_2))
   (void)FUNC_9(VAR_3, "\n");
  else if (FUNC_7(VAR_3, VAR_13, VAR_12, VAR_11, VAR_7))
   return (1);

  if (FUNC_0(VAR_3))
   break;
 }
 return (0);
}
