
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {char* bp; int len; } ;
struct TYPE_16__ {size_t cols; struct TYPE_16__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_1__ GS ;
typedef char CHAR_T ;
typedef TYPE_3__ ARGS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,char*,int,char*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char) ;
 scalar_t__ FUNC_7 (char*,char*,size_t) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*) ;
 size_t FUNC_9 (TYPE_1__*,char*,...) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 char* FUNC_11 (TYPE_1__*,char*,int*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int
FUNC_13(SCR *VAR_3, int VAR_4, ARGS **VAR_5)
{
 ARGS **VAR_6;
 CHAR_T *VAR_7;
 GS *VAR_8;
 size_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 char *VAR_20, *VAR_21;
 size_t VAR_22;

 VAR_8 = VAR_3->gp;


 FUNC_5(VAR_3, VAR_5[0]->bp, VAR_5[0]->len + 1, VAR_20, VAR_22);
 if ((VAR_21 = FUNC_12(VAR_20, '/')) == ((void*)0))
  VAR_15 = 0;
 else {
  VAR_15 = (VAR_21 - VAR_20) + 1;
  for (VAR_17 = VAR_4 - 1, VAR_6 = VAR_5 + 1; VAR_17 > 0; --VAR_17, ++VAR_6)
   if (VAR_6[0]->len < VAR_15 ||
       FUNC_7(VAR_6[0]->bp, VAR_5[0]->bp,
       VAR_15)) {
    VAR_15 = 0;
    break;
   }
 }
 for (VAR_17 = VAR_4, VAR_6 = VAR_5, VAR_12 = 0; VAR_17 > 0; --VAR_17, ++VAR_6) {
  for (VAR_11 = 0, VAR_7 = VAR_6[0]->bp + VAR_15; *VAR_7 != '\0'; ++VAR_7)
   VAR_11 += FUNC_6(VAR_3, *VAR_7);
  if (VAR_11 > VAR_12)
   VAR_12 = VAR_11;
 }
 VAR_12 += FUNC_0(VAR_12, 6);





 if (FUNC_3(VAR_3, VAR_2)) {
  VAR_19 = 1;
  FUNC_2(VAR_3, VAR_2);
 } else
  VAR_19 = 0;






 if (VAR_12 >= VAR_3->cols) {
  for (VAR_17 = VAR_4, VAR_6 = VAR_5; VAR_17 > 0; --VAR_17, ++VAR_6) {
   FUNC_5(VAR_3, VAR_6[0]->bp+VAR_15, VAR_6[0]->len+1-VAR_15,
     VAR_20, VAR_22);
   VAR_21 = FUNC_11(VAR_3, VAR_20, &VAR_18);
   (void)FUNC_9(VAR_3, "%s\n", VAR_21);
   if (VAR_18)
    FUNC_1(VAR_3, VAR_21, 0);
   if (FUNC_3(VAR_8, VAR_1))
    break;
  }
  if (FUNC_3(VAR_8, VAR_1)) goto intr;;
 } else {

  VAR_14 = (VAR_3->cols - 1) / VAR_12;
  if (VAR_4 > VAR_14) {
   VAR_13 = VAR_4 / VAR_14;
   if (VAR_4 % VAR_14)
    ++VAR_13;
  } else
   VAR_13 = 1;


  for (VAR_16 = 0; VAR_16 < VAR_13; ++VAR_16) {
   for (VAR_9 = VAR_16, VAR_11 = 0; VAR_11 < VAR_14; ++VAR_11) {
    FUNC_5(VAR_3, VAR_5[VAR_9]->bp+VAR_15,
     VAR_5[VAR_9]->len+1-VAR_15, VAR_20, VAR_22);
    VAR_21 = FUNC_11(VAR_3, VAR_20, &VAR_18);
    VAR_10 = FUNC_9(VAR_3, "%s", VAR_21);
    if (VAR_18)
     FUNC_1(VAR_3, VAR_21, 0);
    if (FUNC_3(VAR_8, VAR_1)) goto intr;;
    if ((VAR_9 += VAR_13) >= VAR_4)
     break;
    (void)FUNC_9(VAR_3,
        "%*s", (int)(VAR_12 - VAR_10), "");
    if (FUNC_3(VAR_8, VAR_1)) goto intr;;
   }
   (void)FUNC_10(VAR_3, "\n");
   if (FUNC_3(VAR_8, VAR_1)) goto intr;;
  }
  (void)FUNC_10(VAR_3, "\n");
  if (FUNC_3(VAR_8, VAR_1)) goto intr;;
 }
 (void)FUNC_8(VAR_3);

 if (0) {
intr: FUNC_2(VAR_8, VAR_1);
 }
 if (VAR_19)
  FUNC_4(VAR_3, VAR_2);

 return (0);
}
