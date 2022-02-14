
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_print_symbol_type ;
typedef int bfd ;
struct TYPE_7__ {char* name; TYPE_2__* section; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_2__ asection ;
struct TYPE_9__ {int index; } ;
typedef int FILE ;


 int FUNC_0 () ;



 int FUNC_1 (int *,void*,TYPE_1__*) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0,
     void * VAR_1,
     asymbol *VAR_2,
     bfd_print_symbol_type VAR_3)
{
  FILE *VAR_4 = (FILE *) VAR_1;

  switch (VAR_3)
    {
    case 128:
      FUNC_2 (VAR_4, "%s", VAR_2->name);
      break;
    case 129:
      FUNC_0 ();
      break;
    case 130:
      {
 const char *VAR_5 =
   (VAR_2->section == (asection *) ((void*)0)
    ? "*abs"
    : VAR_2->section->name);

 if (VAR_2->name[0] == ' ')
   FUNC_2 (VAR_4, "* empty table entry ");
 else
   {
     FUNC_1 (VAR_0, (void *) VAR_4, VAR_2);

     FUNC_2 (VAR_4, " %-5s %04x %02x %s",
       VAR_5,
       (unsigned) FUNC_3 (VAR_2)->index,
       (unsigned) 0,
       VAR_2->name);
   }
      }
      break;
    }
}
