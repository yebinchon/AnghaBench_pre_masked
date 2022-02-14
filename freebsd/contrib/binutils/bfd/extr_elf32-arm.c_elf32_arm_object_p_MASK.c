
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_6)
{
  unsigned int VAR_7;

  VAR_7 = FUNC_0 (VAR_6, VAR_0);

  if (VAR_7 != VAR_5)
    FUNC_1 (VAR_6, VAR_3, VAR_7);

  else if (FUNC_2 (VAR_6)->e_flags & VAR_1)
    FUNC_1 (VAR_6, VAR_3, VAR_4);

  else
    FUNC_1 (VAR_6, VAR_3, VAR_7);

  return VAR_2;
}
