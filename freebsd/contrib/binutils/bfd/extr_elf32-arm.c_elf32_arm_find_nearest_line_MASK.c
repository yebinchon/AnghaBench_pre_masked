
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_2__ {int line_info; int dwarf2_find_line_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int **,int ,char const**,char const**,unsigned int*,int ,int *) ;
 int FUNC_1 (int *,int **,int *,int ,scalar_t__*,char const**,char const**,unsigned int*,int *) ;
 int FUNC_2 (int *,int *,int **,int ,char const**,char const**) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd * VAR_2,
        asection * VAR_3,
        asymbol ** VAR_4,
        bfd_vma VAR_5,
        const char ** VAR_6,
        const char ** VAR_7,
        unsigned int * VAR_8)
{
  bfd_boolean VAR_9 = VAR_0;



  if (FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7,
         VAR_8, 0,
         & FUNC_3 (VAR_2)->dwarf2_find_line_info))
    {
      if (!*VAR_7)
 FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5,
          *VAR_6 ? ((void*)0) : VAR_6,
          VAR_7);

      return VAR_1;
    }

  if (! FUNC_1 (VAR_2, VAR_4, VAR_3, VAR_5,
          & VAR_9, VAR_6,
          VAR_7, VAR_8,
          & FUNC_3 (VAR_2)->line_info))
    return VAR_0;

  if (VAR_9 && (*VAR_7 || *VAR_8))
    return VAR_1;

  if (VAR_4 == ((void*)0))
    return VAR_0;

  if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7))
    return VAR_0;

  *VAR_8 = 0;
  return VAR_1;
}
