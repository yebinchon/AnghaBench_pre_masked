
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_10__ {size_t cols; int * gp; } ;
typedef TYPE_1__ SCR ;
typedef int GS ;
typedef int CHAR_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*,int ) ;
 char* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_10(SCR *VAR_3, const CHAR_T *VAR_4, size_t *VAR_5, size_t VAR_6,
     u_int VAR_7, int VAR_8)
{
 CHAR_T VAR_9;
 char *VAR_10;
 GS *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;

 if (FUNC_6(VAR_3, VAR_1))
  FUNC_5(VAR_0);
 VAR_11 = VAR_3->gp;
 VAR_14 = FUNC_7(VAR_3, VAR_2);
 for (VAR_12 = *VAR_5; VAR_6--;)
  if ((VAR_9 = *VAR_4++) == FUNC_3('\t') && !FUNC_4(VAR_0))
   for (VAR_13 = VAR_14 - VAR_12 % VAR_14;
       VAR_12 < VAR_3->cols && VAR_13--; ++VAR_12) {
    (void)FUNC_8(VAR_3,
        "%c", VAR_8 ? VAR_8 : ' ');
    if (FUNC_0(VAR_3))
     goto intr;
   }
  else {
   VAR_10 = FUNC_2(VAR_3, VAR_9);
   VAR_13 = FUNC_1(VAR_3, VAR_9);






   if (VAR_12 + VAR_13 > VAR_3->cols) {
    VAR_12 = 0;
    (void)FUNC_9(VAR_3, "\n");
   }

   VAR_12 += VAR_13;
   if (!VAR_8) {
    (void)FUNC_9(VAR_3, VAR_10);
    if (FUNC_0(VAR_3))
     goto intr;
   } else while (VAR_13--) {
    (void)FUNC_8(VAR_3, "%c", VAR_8);
    if (FUNC_0(VAR_3))
     goto intr;
   }
   if (VAR_12 == VAR_3->cols) {
    VAR_12 = 0;
    (void)FUNC_9(VAR_3, "\n");
   }
  }
intr: *VAR_5 = VAR_12;
 return (0);
}
