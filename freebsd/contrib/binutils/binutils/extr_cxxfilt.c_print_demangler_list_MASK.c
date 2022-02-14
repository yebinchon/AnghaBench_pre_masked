
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangler_engine {char* demangling_style_name; scalar_t__ demangling_style; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 struct demangler_engine* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_2)
{
  const struct demangler_engine *VAR_3;

  FUNC_0 (VAR_2, "{%s", VAR_0->demangling_style_name);

  for (VAR_3 = VAR_0 + 1;
       VAR_3->demangling_style != VAR_1;
       ++VAR_3)
    FUNC_0 (VAR_2, ",%s", VAR_3->demangling_style_name);

  FUNC_0 (VAR_2, "}");
}
