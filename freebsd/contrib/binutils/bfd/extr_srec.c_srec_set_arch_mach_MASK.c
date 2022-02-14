
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
struct TYPE_4__ {int * arch_info; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,unsigned long) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_3, enum bfd_architecture VAR_4, unsigned long VAR_5)
{
  if (VAR_4 != VAR_1)
    return FUNC_0 (VAR_3, VAR_4, VAR_5);

  VAR_3->arch_info = & VAR_2;
  return VAR_0;
}
