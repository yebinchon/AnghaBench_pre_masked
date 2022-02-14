
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Token ;
struct TYPE_2__ {int doNot; int (* defProc ) (int ,char*) ;int * form; } ;
typedef void* Boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,double*) ;
 char* FUNC_1 (void*,void**,void**,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (void*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 void* VAR_8 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static Token
FUNC_10(Boolean VAR_9)
{
    Token VAR_10;
    char *VAR_11;
    char *VAR_12;
    char *VAR_13;
    void *VAR_14;
    void *VAR_15;
    Boolean VAR_16;
    Boolean VAR_17;
    double VAR_18, VAR_19;

    VAR_10 = VAR_3;
    VAR_12 = ((void*)0);
    VAR_14 = VAR_15 = VAR_1;
    VAR_16 = VAR_17 = VAR_1;





    VAR_11 = FUNC_1(VAR_9, &VAR_16, &VAR_14, VAR_8);
    if (!VAR_11)
 goto done;




    while (FUNC_6((unsigned char) *VAR_5))
 VAR_5++;






    VAR_13 = VAR_5;
    switch (*VAR_5) {
 case '!':
 case '=':
 case '<':
 case '>':
     if (VAR_5[1] == '=') {
  VAR_5 += 2;
     } else {
  VAR_5 += 1;
     }
     break;
 default:
     if (!VAR_9) {
  VAR_10 = VAR_4;
  goto done;
     }

     if (VAR_16) {
  VAR_10 = VAR_11[0] != 0;
  goto done;
     }

     if (FUNC_0(VAR_11, &VAR_18)) {
  VAR_10 = VAR_18 != 0.0;
  goto done;
     }

     if (VAR_7->form[0] == 0) {
  VAR_10 = VAR_11[0] != 0;
  goto done;
     }

     VAR_10 = VAR_7->defProc(FUNC_8(VAR_11), VAR_11) != VAR_7->doNot;
     goto done;
    }

    while (FUNC_6((unsigned char)*VAR_5))
 VAR_5++;

    if (*VAR_5 == '\0') {
 FUNC_3(VAR_2,
      "Missing right-hand-side of operator");
 goto done;
    }

    VAR_12 = FUNC_1(VAR_9, &VAR_17, &VAR_15, VAR_1);
    if (!VAR_12)
 goto done;

    if (VAR_17 || VAR_16) {
do_string_compare:
 if (((*VAR_13 != '!') && (*VAR_13 != '=')) || (VAR_13[1] != '=')) {
     FUNC_3(VAR_2,
    "String comparison operator should be either == or !=");
     goto done;
 }

 if (FUNC_2(VAR_0)) {
     FUNC_4(VAR_6, "lhs = \"%s\", rhs = \"%s\", op = %.2s\n",
     VAR_11, VAR_12, VAR_13);
 }




 if (*VAR_13 == '=') {
     VAR_10 = FUNC_7(VAR_11, VAR_12) == 0;
 } else {
     VAR_10 = FUNC_7(VAR_11, VAR_12) != 0;
 }
    } else {





 if (!FUNC_0(VAR_11, &VAR_18) || !FUNC_0(VAR_12, &VAR_19))
     goto do_string_compare;

 if (FUNC_2(VAR_0)) {
     FUNC_4(VAR_6, "left = %f, right = %f, op = %.2s\n", VAR_18,
     VAR_19, VAR_13);
 }
 switch(VAR_13[0]) {
 case '!':
     if (VAR_13[1] != '=') {
  FUNC_3(VAR_2,
       "Unknown operator");
  goto done;
     }
     VAR_10 = (VAR_18 != VAR_19);
     break;
 case '=':
     if (VAR_13[1] != '=') {
  FUNC_3(VAR_2,
       "Unknown operator");
  goto done;
     }
     VAR_10 = (VAR_18 == VAR_19);
     break;
 case '<':
     if (VAR_13[1] == '=') {
  VAR_10 = (VAR_18 <= VAR_19);
     } else {
  VAR_10 = (VAR_18 < VAR_19);
     }
     break;
 case '>':
     if (VAR_13[1] == '=') {
  VAR_10 = (VAR_18 >= VAR_19);
     } else {
  VAR_10 = (VAR_18 > VAR_19);
     }
     break;
 }
    }

done:
    FUNC_5(VAR_14);
    FUNC_5(VAR_15);
    return VAR_10;
}
