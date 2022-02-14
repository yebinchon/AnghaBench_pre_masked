
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,unsigned long) ;
__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_4,
       enum bfd_architecture VAR_5,
       unsigned long VAR_6)
{
  FUNC_0 (VAR_4, VAR_5, VAR_6);

  if (VAR_5 == VAR_3)
    return VAR_1;

  if (VAR_5 == VAR_2)
    switch (VAR_6)
      {
      case 134:
      case 130:
      case 129:
      case 128:
      case 135:
      case 131:
      case 132:
      case 133:
      case 0:
 return VAR_1;
      default:
 return VAR_0;
      }

  return VAR_0;
}
