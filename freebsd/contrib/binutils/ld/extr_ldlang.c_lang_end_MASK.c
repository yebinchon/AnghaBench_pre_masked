
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* section; scalar_t__ value; } ;
struct TYPE_8__ {TYPE_2__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_3__ u; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int asection ;
struct TYPE_10__ {int * name; } ;
struct TYPE_9__ {int hash; scalar_t__ shared; scalar_t__ relocatable; } ;
struct TYPE_6__ {scalar_t__ output_offset; int * output_section; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bfd_link_hash_entry* FUNC_3 (int ,int *,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,char const**,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,...) ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int * VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7 (void)
{
  struct bfd_link_hash_entry *VAR_9;
  bfd_boolean VAR_10;

  if (VAR_7.relocatable || VAR_7.shared)
    VAR_10 = VAR_0;
  else
    VAR_10 = VAR_1;

  if (VAR_5.name == ((void*)0))
    {


      VAR_5.name = VAR_6;
      VAR_10 = VAR_0;
    }

  VAR_9 = FUNC_3 (VAR_7.hash, VAR_5.name,
       VAR_0, VAR_0, VAR_1);
  if (VAR_9 != ((void*)0)
      && (VAR_9->type == VAR_2
   || VAR_9->type == VAR_3)
      && VAR_9->u.def.section->output_section != ((void*)0))
    {
      bfd_vma VAR_11;

      VAR_11 = (VAR_9->u.def.value
      + FUNC_2 (VAR_8,
        VAR_9->u.def.section->output_section)
      + VAR_9->u.def.section->output_offset);
      if (! FUNC_5 (VAR_8, VAR_11))
 FUNC_6 (FUNC_0("%P%F:%s: can't set start address\n"), VAR_5.name);
    }
  else
    {
      bfd_vma VAR_12;
      const char *VAR_13;



      VAR_12 = FUNC_4 (VAR_5.name, &VAR_13, 0);
      if (*VAR_13 == '\0')
 {
   if (! FUNC_5 (VAR_8, VAR_12))
     FUNC_6 (FUNC_0("%P%F: can't set start address\n"));
 }
      else
 {
   asection *VAR_14;



   VAR_14 = FUNC_1 (VAR_8, VAR_4);
   if (VAR_14 != ((void*)0))
     {
       if (VAR_10)
  FUNC_6 (FUNC_0("%P: warning: cannot find entry symbol %s;"
    " defaulting to %V\n"),
         VAR_5.name,
         FUNC_2 (VAR_8, VAR_14));
       if (! FUNC_5 (VAR_8,
        FUNC_2 (VAR_8,
        VAR_14)))
  FUNC_6 (FUNC_0("%P%F: can't set start address\n"));
     }
   else
     {
       if (VAR_10)
  FUNC_6 (FUNC_0("%P: warning: cannot find entry symbol %s;"
    " not setting start address\n"),
         VAR_5.name);
     }
 }
    }



}
