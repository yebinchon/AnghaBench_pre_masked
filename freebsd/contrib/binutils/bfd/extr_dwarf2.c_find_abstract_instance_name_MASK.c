
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comp_unit {int abbrevs; int * info_ptr_unit; int * abfd; } ;
struct TYPE_2__ {char* str; int val; } ;
struct attribute {int name; TYPE_1__ u; } ;
struct abbrev_info {unsigned int num_attrs; int * attrs; } ;
typedef int bfd_uint64_t ;
typedef int bfd_byte ;
typedef int bfd ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct abbrev_info* FUNC_3 (unsigned int,int ) ;
 int * FUNC_4 (struct attribute*,int *,struct comp_unit*,int *) ;
 unsigned int FUNC_5 (int *,int *,unsigned int*) ;
 int FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static char *
FUNC_7 (struct comp_unit *VAR_1, bfd_uint64_t VAR_2)
{
  bfd *VAR_3 = VAR_1->abfd;
  bfd_byte *VAR_4;
  unsigned int VAR_5, VAR_6, VAR_7;
  struct abbrev_info *VAR_8;
  struct attribute VAR_9;
  char *VAR_10 = 0;

  VAR_4 = VAR_1->info_ptr_unit + VAR_2;
  VAR_5 = FUNC_5 (VAR_3, VAR_4, &VAR_6);
  VAR_4 += VAR_6;

  if (VAR_5)
    {
      VAR_8 = FUNC_3 (VAR_5, VAR_1->abbrevs);
      if (! VAR_8)
 {
   FUNC_1) (FUNC_0("Dwarf Error: Could not find abbrev number %u."),
     VAR_5);
   FUNC_2 (VAR_0);
 }
      else
 {
   for (VAR_7 = 0; VAR_7 < VAR_8->num_attrs; ++VAR_7)
     {
       VAR_4 = FUNC_4 (&VAR_9, &VAR_8->attrs[VAR_7], VAR_1, VAR_4);
       switch (VAR_9.name)
  {
  case 129:

    if (VAR_10 == ((void*)0))
      VAR_10 = VAR_9.u.str;
    break;
  case 128:
    VAR_10 = FUNC_7 (VAR_1, VAR_9.u.val);
    break;
  case 130:
    VAR_10 = VAR_9.u.str;
    break;
  default:
    break;
  }
     }
 }
    }
  return (VAR_10);
}
