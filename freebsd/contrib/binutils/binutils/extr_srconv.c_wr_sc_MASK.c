
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct coff_symbol {char* name; TYPE_3__* type; TYPE_2__* where; struct coff_symbol* next; } ;
struct coff_sfile {TYPE_1__* scope; } ;
struct coff_section {char* name; } ;
struct coff_ofile {int nsections; struct coff_section* sections; } ;
struct IT_sc {int format; int align; int read; int write; int exec; int init; int mode; int* name; void* contents; scalar_t__ spare1; scalar_t__ segadd; scalar_t__ spare; int concat; scalar_t__ length; scalar_t__ addr; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ offset; struct coff_section* section; } ;
struct TYPE_4__ {struct coff_symbol* vars_head; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int* FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,struct IT_sc*) ;

__attribute__((used)) static int
FUNC_5 (struct coff_ofile *VAR_7, struct coff_sfile *VAR_8)
{
  int VAR_9;
  int VAR_10 = 0;

  int VAR_11 = VAR_7->nsections;
  struct myinfo
    {
      struct coff_section *sec;
      struct coff_symbol *symbol;
    };
  struct coff_symbol *VAR_12;
  struct myinfo *VAR_13
    = (struct myinfo *) FUNC_1 (VAR_11, sizeof (struct myinfo));


  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
    {
      VAR_13[VAR_9].sec = VAR_7->sections + VAR_9;
      VAR_13[VAR_9].symbol = 0;
    }

  for (VAR_12 = VAR_8->scope->vars_head;
       VAR_12;
       VAR_12 = VAR_12->next)
    {

      if (VAR_12->type->type == VAR_5)
 {
   for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
     {
       if (VAR_12->where->section == VAR_13[VAR_9].sec)
  {
    VAR_13[VAR_9].symbol = VAR_12;
    break;
  }
     }
 }
    }



  for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++)
    {
      struct IT_sc VAR_14;
      char *VAR_15;

      VAR_12 = VAR_13[VAR_9].symbol;
      VAR_14.spare = 0;
      VAR_14.spare1 = 0;

      if (!VAR_12)
 {


   VAR_14.format = !(FUNC_0 (VAR_4) & VAR_3);
   VAR_14.addr = 0;
   VAR_14.length = 0;
   VAR_15 = VAR_13[VAR_9].sec->name;
 }
      else
 {
   if (FUNC_0 (VAR_4) & VAR_3)
     {
       VAR_14.format = 0;
       VAR_14.addr = VAR_12->where->offset;
     }
   else
     {
       VAR_14.format = 1;
       VAR_14.addr = 0;
     }
   VAR_14.length = VAR_12->type->size;
   VAR_15 = VAR_12->name;
 }

      VAR_14.align = 4;
      VAR_14.concat = VAR_0;
      VAR_14.read = 3;
      VAR_14.write = 3;
      VAR_14.exec = 3;
      VAR_14.init = 3;
      VAR_14.mode = 3;
      VAR_14.spare = 0;
      VAR_14.segadd = 0;
      VAR_14.spare1 = 0;
      VAR_14.name = FUNC_2 (VAR_15);

      if (FUNC_3 (VAR_14.name) == 1)
 {
   switch (VAR_14.name[0])
     {
     case 'D':
     case 'B':
       VAR_14.contents = VAR_2;
       break;

     default:
       VAR_14.contents = VAR_1;
     }
 }
      else
 {
   VAR_14.contents = VAR_1;
 }

      FUNC_4 (VAR_6, &VAR_14);
      VAR_10++;
    }
  return VAR_10;
}
