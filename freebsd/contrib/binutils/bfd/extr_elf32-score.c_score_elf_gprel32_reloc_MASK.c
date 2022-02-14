
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_9__ {int flags; TYPE_2__* section; } ;
typedef TYPE_3__ asymbol ;
typedef int asection ;
typedef int arelent ;
struct TYPE_8__ {TYPE_1__* output_section; } ;
struct TYPE_7__ {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int *,int *,int ,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int ,char**,scalar_t__*) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_3 (bfd *VAR_6, arelent *VAR_7, asymbol *VAR_8,
   void *VAR_9, asection *VAR_10, bfd *VAR_11,
   char **VAR_12)
{
  bfd_boolean VAR_13;
  bfd_reloc_status_type VAR_14;
  bfd_vma VAR_15;


  if (VAR_11 != ((void*)0)
      && (VAR_8->flags & VAR_1) == 0
      && (VAR_8->flags & VAR_0) != 0)
    {
      *VAR_12 = (char *)
 FUNC_0("32bits gp relative relocation occurs for an external symbol");
      return VAR_5;
    }

  if (VAR_11 != ((void*)0))
    VAR_13 = VAR_3;
  else
    {
      VAR_13 = VAR_2;
      VAR_11 = VAR_8->section->output_section->owner;
    }

  VAR_14 = FUNC_2 (VAR_11, VAR_8, VAR_13, VAR_12, &VAR_15);
  if (VAR_14 != VAR_4)
    return VAR_14;

  VAR_15 = 0;
  return FUNC_1 (VAR_6, VAR_8, VAR_7, VAR_10,
     VAR_13, VAR_9, VAR_15);
}
