
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ value; } ;
struct TYPE_9__ {TYPE_2__ def; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ u; } ;
struct generic_link_hash_entry {TYPE_4__ root; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd ;
struct TYPE_7__ {int * p; } ;
struct TYPE_11__ {scalar_t__ value; TYPE_1__ udata; int * section; } ;
typedef TYPE_5__ asymbol ;
typedef int asection ;


 int FUNC_0 (int) ;
 TYPE_5__** FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_1,
       unsigned int VAR_2,
       asection *VAR_3,
       bfd_vma VAR_4)
{
  asymbol **VAR_5;

  VAR_5 = FUNC_1 (VAR_1);
  FUNC_0 (VAR_5 != (asymbol **) ((void*)0));



  while (*VAR_5)
    {
      asymbol *VAR_6 = *VAR_5;

      if (VAR_6->section == VAR_3)
 {

   if (VAR_6->value > VAR_4)
     {
       VAR_6->value -=VAR_2;

       if (VAR_6->udata.p != ((void*)0))
  {
    struct generic_link_hash_entry *VAR_7;

    VAR_7 = (struct generic_link_hash_entry *) VAR_6->udata.p;
    FUNC_0 (VAR_7->root.type == VAR_0);
    VAR_7->root.u.def.value -= VAR_2;
    FUNC_0 (VAR_7->root.u.def.value == VAR_6->value);
  }
     }
 }
      VAR_5++;
    }
}
