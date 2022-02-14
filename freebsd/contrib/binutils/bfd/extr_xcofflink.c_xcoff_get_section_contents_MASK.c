
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct coff_section_tdata {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int * used_by_bfd; } ;
typedef TYPE_1__ asection ;
struct TYPE_7__ {int * contents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int **) ;
 int * FUNC_1 (int *,int) ;
 TYPE_3__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2, asection *VAR_3)
{
  if (FUNC_2 (VAR_2, VAR_3) == ((void*)0))
    {
      bfd_size_type VAR_4 = sizeof (struct coff_section_tdata);

      VAR_3->used_by_bfd = FUNC_1 (VAR_2, VAR_4);
      if (VAR_3->used_by_bfd == ((void*)0))
 return VAR_0;
    }

  if (FUNC_2 (VAR_2, VAR_3)->contents == ((void*)0))
    {
      bfd_byte *VAR_5;

      if (! FUNC_0 (VAR_2, VAR_3, &VAR_5))
 {
   if (VAR_5 != ((void*)0))
     FUNC_3 (VAR_5);
   return VAR_0;
 }
      FUNC_2 (VAR_2, VAR_3)->contents = VAR_5;
    }

  return VAR_1;
}
