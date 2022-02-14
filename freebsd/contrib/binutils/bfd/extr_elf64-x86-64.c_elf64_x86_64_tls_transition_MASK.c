
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {scalar_t__ shared; } ;







 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (struct bfd_link_info *VAR_1, int VAR_2, int VAR_3)
{
  if (VAR_1->shared)
    return VAR_2;

  switch (VAR_2)
    {
    case 129:
    case 132:
    case 130:
    case 131:
      if (VAR_3)
 return VAR_0;
      return 131;
    case 128:
      return VAR_0;
    }

   return VAR_2;
}
