
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_2(void) {
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
   if (VAR_2[VAR_3][VAR_4].ip != ((void*)0)) {
    FUNC_1(VAR_2[VAR_3][VAR_4].ip);
    VAR_2[VAR_3][VAR_4].ip = 0;
   }
   FUNC_0(VAR_3, VAR_4);
  }
 }
}
