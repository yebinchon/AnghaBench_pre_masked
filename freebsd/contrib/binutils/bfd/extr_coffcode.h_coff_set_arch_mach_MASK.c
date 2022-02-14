
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
 int FUNC_0 (int *,int,unsigned long) ;
 int FUNC_1 (int *,unsigned int*,unsigned short*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_3,
      enum bfd_architecture VAR_4,
      unsigned long VAR_5)
{
  unsigned VAR_6;
  unsigned short VAR_7;

  if (! FUNC_0 (VAR_3, VAR_4, VAR_5))
    return VAR_0;

  if (VAR_4 != VAR_2
      && ! FUNC_1 (VAR_3, &VAR_6, &VAR_7))
    return VAR_0;

  return VAR_1;
}
