
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int flags; TYPE_4__* section; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_7__ {TYPE_1__* output_section; } ;
struct TYPE_5__ {scalar_t__ vma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,scalar_t__*) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_5 (bfd *VAR_4, asymbol *VAR_5, bfd_boolean VAR_6,
     char **VAR_7, bfd_vma *VAR_8)
{
  if (FUNC_3 (VAR_5->section)
      && ! VAR_6)
    {
      *VAR_8 = 0;
      return VAR_3;
    }

  *VAR_8 = FUNC_1 (VAR_4);
  if (*VAR_8 == 0
      && (! VAR_6
   || (VAR_5->flags & VAR_0) != 0))
    {
      if (VAR_6)
 {

   *VAR_8 = VAR_5->section->output_section->vma ;
   FUNC_2 (VAR_4, *VAR_8);
 }
      else if (!FUNC_4 (VAR_4, VAR_8))
 {
   *VAR_7 =
     (char *) FUNC_0("GP relative relocation when _gp not defined");
   return VAR_1;
 }
    }

  return VAR_2;
}
