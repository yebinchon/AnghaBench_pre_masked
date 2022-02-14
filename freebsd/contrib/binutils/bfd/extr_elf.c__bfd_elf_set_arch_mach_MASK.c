
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,unsigned long) ;
 TYPE_1__* FUNC_1 (int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_2,
   enum bfd_architecture VAR_3,
   unsigned long VAR_4)
{


  if (VAR_3 != FUNC_1 (VAR_2)->arch
      && VAR_3 != VAR_1
      && FUNC_1 (VAR_2)->arch != VAR_1)
    return VAR_0;

  return FUNC_0 (VAR_2, VAR_3, VAR_4);
}
