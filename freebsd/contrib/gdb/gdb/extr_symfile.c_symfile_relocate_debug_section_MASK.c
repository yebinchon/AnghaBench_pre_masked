
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int VAR_2 ;

bfd_byte *
FUNC_2 (bfd *VAR_3, asection *VAR_4, bfd_byte *VAR_5)
{


  if ((VAR_4->flags & VAR_1) == 0)
    return ((void*)0);
  if ((VAR_4->flags & VAR_0) == 0)
    return ((void*)0);



  FUNC_0 (VAR_3, VAR_2, ((void*)0));

  return FUNC_1 (VAR_3, VAR_4, VAR_5, ((void*)0));
}
