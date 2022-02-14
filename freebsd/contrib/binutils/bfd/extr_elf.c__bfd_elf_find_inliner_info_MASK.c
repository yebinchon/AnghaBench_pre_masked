
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int dwarf2_find_line_info; } ;


 int FUNC_0 (int *,char const**,char const**,unsigned int*,int *) ;
 TYPE_1__* FUNC_1 (int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_0,
       const char **VAR_1,
       const char **VAR_2,
       unsigned int *VAR_3)
{
  bfd_boolean VAR_4;
  VAR_4 = FUNC_0 (VAR_0, VAR_1,
      VAR_2, VAR_3,
      & FUNC_1 (VAR_0)->dwarf2_find_line_info);
  return VAR_4;
}
