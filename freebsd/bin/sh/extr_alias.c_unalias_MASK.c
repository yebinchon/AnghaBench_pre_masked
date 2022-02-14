
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {char* name; int flag; struct alias* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct alias*) ;
 struct alias** FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_4)
{
 struct alias *VAR_5, **VAR_6;

 VAR_6 = FUNC_2(VAR_4);

 for (VAR_5 = *VAR_6; VAR_5; VAR_6 = &(VAR_5->next), VAR_5 = VAR_5->next) {
  if (FUNC_0(VAR_4, VAR_5->name)) {







   if (VAR_5->flag & VAR_0)
    *VAR_5->name = '\0';
   else {
    VAR_1;
    *VAR_6 = VAR_5->next;
    FUNC_1(VAR_5);
    VAR_2;
   }
   VAR_3--;
   return (0);
  }
 }

 return (1);
}
