
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct objfile {int dummy; } ;
struct dieinfo {int dummy; } ;
typedef struct type* SYMBOL_TYPE ;


 int FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct symbol* FUNC_1 (struct dieinfo*,struct objfile*) ;
 struct type* FUNC_2 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_3 (struct dieinfo*,struct objfile*,struct type*) ;

__attribute__((used)) static void
FUNC_4 (struct dieinfo *VAR_2, char *VAR_3, char *VAR_4,
        struct objfile *VAR_5)
{
  struct type *VAR_6;
  struct symbol *VAR_7;

  VAR_6 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5);
  if (!FUNC_0 (VAR_6))
    {
      VAR_7 = FUNC_1 (VAR_2, VAR_5);
      if (VAR_7 != ((void*)0))
 {
   SYMBOL_TYPE (VAR_8) = VAR_6;
   if (VAR_0 == VAR_1)
     {
       FUNC_3 (VAR_2, VAR_5, VAR_6);
     }
 }
    }
}
