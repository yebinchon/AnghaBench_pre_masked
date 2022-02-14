
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t owrite; size_t insert; scalar_t__ len; scalar_t__ cno; scalar_t__ lb; int lno; scalar_t__ R_erase; } ;
typedef int TEXTH ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,size_t) ;
 size_t FUNC_1 (size_t,size_t const) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int,int **,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(SCR *VAR_3, TEXTH *VAR_4, TEXT *VAR_5, const size_t VAR_6)
{
 TEXT *VAR_7;
 size_t VAR_8, VAR_9;
 CHAR_T *VAR_10;





 if (VAR_5->owrite == 0)
  return;





 for (VAR_7 = FUNC_2(VAR_4), VAR_8 = 0;;) {
  VAR_8 += VAR_7 == VAR_5 ? VAR_5->cno : VAR_7->len + VAR_7->R_erase;
  if ((VAR_7 = FUNC_3(VAR_7, VAR_2)) == ((void*)0))
   break;
 }
 if (VAR_8 < VAR_6) {
  VAR_9 = FUNC_1(VAR_5->owrite, VAR_6 - VAR_8);
  if (FUNC_4(VAR_3,
      FUNC_2(VAR_4)->lno, VAR_0 | VAR_1, &VAR_10, ((void*)0)))
   return;
  FUNC_0(VAR_5->lb + VAR_5->cno, VAR_10 + VAR_8, VAR_9);
  VAR_5->len -= VAR_5->owrite - VAR_9;
  VAR_5->owrite = 0;
  VAR_5->insert += VAR_9;
 }
}
