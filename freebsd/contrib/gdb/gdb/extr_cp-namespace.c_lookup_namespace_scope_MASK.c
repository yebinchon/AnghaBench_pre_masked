
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int domain_enum ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 struct symbol* FUNC_2 (char*,char const*,char const*,struct block const*,int const,struct symtab**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static struct symbol *
FUNC_5 (const char *VAR_0,
   const char *VAR_1,
   const struct block *VAR_2,
   const domain_enum VAR_3,
   struct symtab **VAR_4,
   const char *VAR_5,
   int VAR_6)
{
  char *VAR_7;

  if (VAR_5[VAR_6] != '\0')
    {


      struct symbol *VAR_8;
      int VAR_9 = VAR_6;


      if (VAR_9 != 0)
 {
   FUNC_3 (VAR_5[VAR_9] == ':');
   VAR_9 += 2;
 }
      VAR_9 += FUNC_1 (VAR_5 + VAR_9);
      VAR_8 = FUNC_5 (VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4,
        VAR_5, VAR_9);
      if (VAR_8 != ((void*)0))
 return VAR_8;
    }




  VAR_7 = FUNC_0 (VAR_6 + 1);
  FUNC_4 (VAR_7, VAR_5, VAR_6);
  VAR_7[VAR_6] = '\0';
  return FUNC_2 (VAR_7, VAR_0, VAR_1,
         VAR_2, VAR_3, VAR_4);
}
