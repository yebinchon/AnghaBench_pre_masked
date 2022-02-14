
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct objfile {int dummy; } ;
struct dieinfo {int dummy; } ;
typedef struct type* SYMBOL_TYPE ;


 scalar_t__ VAR_0 ;
 struct type* FUNC_0 (struct dieinfo*,struct objfile*) ;
 scalar_t__ VAR_1 ;
 struct symbol* FUNC_1 (struct dieinfo*,struct objfile*) ;
 int FUNC_2 (struct dieinfo*,struct objfile*,struct type*) ;

__attribute__((used)) static void
FUNC_3 (struct dieinfo *VAR_2, char *VAR_3, char *VAR_4,
    struct objfile *VAR_5)
{
  struct type *VAR_6;
  struct symbol *VAR_7;

  VAR_6 = FUNC_0 (VAR_2, VAR_5);
  VAR_7 = FUNC_1 (VAR_2, VAR_5);
  if (VAR_7 != ((void*)0))
    {
      SYMBOL_TYPE (VAR_8) = VAR_6;
      if (VAR_0 == VAR_1)
 {
   FUNC_2 (VAR_2, VAR_5, VAR_6);
 }
    }
}
