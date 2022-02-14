
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct alias {int name; int line; int file; } ;
typedef TYPE_1__* segT ;
struct TYPE_3__ {char const* name; } ;
typedef scalar_t__ PTR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,char const*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1, PTR VAR_2)
{
  struct alias *VAR_3 = (struct alias *) VAR_2;
  segT VAR_4 = FUNC_2 (VAR_0, VAR_3->name);

  if (VAR_4 == ((void*)0))
    FUNC_1 (VAR_3->file, VAR_3->line,
     FUNC_0("section `%s' aliased to `%s' is not used"),
     VAR_3->name, VAR_1);
  else
    VAR_4->name = VAR_1;
}
