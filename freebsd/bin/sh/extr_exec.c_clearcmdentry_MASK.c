
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tblentry {scalar_t__ cmdtype; struct tblentry* next; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tblentry*) ;
 struct tblentry** VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_1(void)
{
 struct tblentry **VAR_6;
 struct tblentry **VAR_7;
 struct tblentry *VAR_8;

 VAR_2;
 for (VAR_6 = VAR_4 ; VAR_6 < &VAR_4[VAR_1] ; VAR_6++) {
  VAR_7 = VAR_6;
  while ((VAR_8 = *VAR_7) != ((void*)0)) {
   if (VAR_8->cmdtype == VAR_0) {
    *VAR_7 = VAR_8->next;
    FUNC_0(VAR_8);
   } else {
    VAR_7 = &VAR_8->next;
   }
  }
 }
 VAR_5 = 0;
 VAR_3;
}
