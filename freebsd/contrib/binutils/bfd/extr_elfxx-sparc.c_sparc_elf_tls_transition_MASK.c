
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ shared; } ;
typedef int bfd ;
struct TYPE_2__ {int has_tlsgd; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2 (struct bfd_link_info *VAR_3, bfd *VAR_4,
     int VAR_5, int VAR_6)
{
  if (! FUNC_0 (VAR_4)
      && VAR_5 == 133
      && ! FUNC_1 (VAR_4)->has_tlsgd)
    VAR_5 = VAR_0;

  if (VAR_3->shared)
    return VAR_5;

  switch (VAR_5)
    {
    case 133:
      if (VAR_6)
 return VAR_1;
      return 131;
    case 132:
      if (VAR_6)
 return VAR_2;
      return 130;
    case 131:
      if (VAR_6)
 return VAR_1;
      return VAR_5;
    case 130:
      if (VAR_6)
 return VAR_2;
      return VAR_5;
    case 129:
      return VAR_1;
    case 128:
      return VAR_2;
    }

  return VAR_5;
}
