
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_print_symbol_type ;
typedef int bfd ;
struct TYPE_6__ {char* name; TYPE_1__* section; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_5__ {char* name; } ;
typedef int FILE ;





 int FUNC_0 (int *,void*,TYPE_2__*) ;
 int FUNC_1 (int *,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_0,
       void * VAR_1,
       asymbol *VAR_2,
       bfd_print_symbol_type VAR_3)
{
  FILE *VAR_4 = (FILE *) VAR_1;

  switch (VAR_3)
    {
    case 128:
      FUNC_1 (VAR_4, "%s", VAR_2->name);
      break;
    case 129:
      break;

    case 130:
      {
 const char *VAR_5 = VAR_2->section->name;

 FUNC_0 (VAR_0, (void *) VAR_4, VAR_2);

 FUNC_1 (VAR_4, " %-5s %s",
   VAR_5, VAR_2->name);
      }
    }
}
