
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symlist {char* name; struct symlist* next; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const char *VAR_3, struct symlist *VAR_4)
{
  struct symlist *VAR_5;

  if (VAR_2)
    {
      for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next)
 if (*(VAR_5->name) != '!')
   {
     if (!FUNC_0 (VAR_5->name, VAR_3, 0))
       return VAR_1;
   }
 else
   {
     if (FUNC_0 (VAR_5->name + 1, VAR_3, 0))
       return VAR_1;
   }
    }
  else
    {
      for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next)
 if (FUNC_1 (VAR_3, VAR_5->name) == 0)
   return VAR_1;
    }

  return VAR_0;
}
