
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {int flag; int name; struct alias* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 struct alias** FUNC_1 (char const*) ;

struct alias *
FUNC_2(const char *VAR_2, int VAR_3)
{
 struct alias *VAR_4;

 if (VAR_1 == 0)
  return (((void*)0));
 for (VAR_4 = *FUNC_1(VAR_2); VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_2, VAR_4->name)) {
   if (VAR_3 && (VAR_4->flag & VAR_0))
    return (((void*)0));
   return (VAR_4);
  }
 }

 return (((void*)0));
}
