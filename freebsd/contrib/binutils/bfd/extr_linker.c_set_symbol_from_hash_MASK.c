
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int value; int * section; } ;
struct TYPE_8__ {TYPE_2__ c; TYPE_1__ def; } ;
struct bfd_link_hash_entry {int type; TYPE_3__ u; } ;
struct TYPE_9__ {int flags; int * section; int value; } ;
typedef TYPE_4__ asymbol ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* VAR_4 ;

__attribute__((used)) static void
FUNC_4 (asymbol *VAR_5, struct bfd_link_hash_entry *VAR_6)
{
  switch (VAR_6->type)
    {
    default:
      FUNC_1 ();
      break;
    case 131:


      if (VAR_5->section != ((void*)0))
 {
   FUNC_0 ((VAR_5->flags & VAR_0) != 0);
 }
      else
 {
   VAR_5->flags |= VAR_0;
   VAR_5->section = VAR_2;
   VAR_5->value = 0;
 }
      break;
    case 130:
      VAR_5->section = VAR_4;
      VAR_5->value = 0;
      break;
    case 129:
      VAR_5->section = VAR_4;
      VAR_5->value = 0;
      VAR_5->flags |= VAR_1;
      break;
    case 134:
      VAR_5->section = VAR_6->u.def.section;
      VAR_5->value = VAR_6->u.def.value;
      break;
    case 133:
      VAR_5->flags |= VAR_1;
      VAR_5->section = VAR_6->u.def.section;
      VAR_5->value = VAR_6->u.def.value;
      break;
    case 135:
      VAR_5->value = VAR_6->u.c.size;
      if (VAR_5->section == ((void*)0))
 VAR_5->section = VAR_3;
      else if (! FUNC_2 (VAR_5->section))
 {
   FUNC_0 (FUNC_3 (VAR_5->section));
   VAR_5->section = VAR_3;
 }

      break;
    case 132:
    case 128:

      break;
    }
}
