
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct alias {int name; int line; int file; } ;
typedef scalar_t__ PTR ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,char const*) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0, PTR VAR_1)
{
  struct alias *VAR_2 = (struct alias *) VAR_1;
  symbolS *VAR_3 = FUNC_3 (VAR_2->name);

  if (VAR_3 == ((void*)0))
    FUNC_2 (VAR_2->file, VAR_2->line,
     FUNC_1("symbol `%s' aliased to `%s' is not used"),
     VAR_2->name, VAR_0);
    else
      FUNC_0 (VAR_3, (char *) VAR_0);
}
