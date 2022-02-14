
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int arch; } ;


 int FUNC_0 (int *,int,unsigned long) ;
 TYPE_1__* FUNC_1 (int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_0,
     enum bfd_architecture VAR_1,
     unsigned long VAR_2)
{
  FUNC_0 (VAR_0, VAR_1, VAR_2);
  return VAR_1 == FUNC_1 (VAR_0)->arch;
}
