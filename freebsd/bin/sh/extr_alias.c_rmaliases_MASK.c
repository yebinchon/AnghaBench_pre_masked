
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {int flag; char* name; struct alias* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct alias** VAR_5 ;
 int FUNC_0 (struct alias*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct alias *VAR_6, **VAR_7;
 int VAR_8;

 VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_5[VAR_8];
  while (*VAR_7) {
   VAR_6 = *VAR_7;
   if (VAR_6->flag & VAR_0) {
    *VAR_6->name = '\0';
    VAR_7 = &(*VAR_7)->next;
   } else {
    *VAR_7 = VAR_6->next;
    FUNC_0(VAR_6);
   }
  }
 }
 VAR_4 = 0;
 VAR_3;
}
