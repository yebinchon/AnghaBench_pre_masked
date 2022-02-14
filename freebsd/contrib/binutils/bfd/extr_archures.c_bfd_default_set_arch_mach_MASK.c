
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
struct TYPE_3__ {int * arch_info; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int ) ;

bfd_boolean
FUNC_2 (bfd *VAR_4,
      enum bfd_architecture VAR_5,
      unsigned long VAR_6)
{
  VAR_4->arch_info = FUNC_0 (VAR_5, VAR_6);
  if (VAR_4->arch_info != ((void*)0))
    return VAR_1;

  VAR_4->arch_info = &VAR_2;
  FUNC_1 (VAR_3);
  return VAR_0;
}
