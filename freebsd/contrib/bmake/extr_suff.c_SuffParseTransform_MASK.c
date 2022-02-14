
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nameLen; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef int Boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static Boolean
FUNC_4(char *VAR_6, Suff **VAR_7, Suff **VAR_8)
{
    LstNode VAR_9;
    Suff *VAR_10;
    LstNode VAR_11;
    char *VAR_12;
    LstNode VAR_13;

    Suff *VAR_14 = ((void*)0);


    VAR_9 = ((void*)0);
    VAR_13 = ((void*)0);







    for (;;) {
 if (VAR_9 == ((void*)0)) {
     VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_2);
 } else {
     VAR_9 = FUNC_2(VAR_5, FUNC_3(VAR_9), VAR_6,
      VAR_2);
 }
 if (VAR_9 == ((void*)0)) {



     if (VAR_13 != ((void*)0)) {
  *VAR_7 = VAR_14;
  *VAR_8 = VAR_4;
  return(VAR_3);
     }
     return (VAR_0);
 }
 VAR_10 = (Suff *)FUNC_0(VAR_9);
 VAR_12 = VAR_6 + VAR_10->nameLen;
 if (*VAR_12 == '\0') {
     VAR_14 = VAR_10;
     VAR_13 = VAR_9;
 } else {
     VAR_11 = FUNC_1(VAR_5, VAR_12, VAR_1);
     if (VAR_11 != ((void*)0)) {
  *VAR_7 = VAR_10;
  *VAR_8 = (Suff *)FUNC_0(VAR_11);
  return (VAR_3);
     }
 }
    }
}
