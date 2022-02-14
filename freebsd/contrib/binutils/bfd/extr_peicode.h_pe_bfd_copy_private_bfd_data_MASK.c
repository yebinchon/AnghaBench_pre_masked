
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int real_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_3, bfd *VAR_4)
{



  if (FUNC_1 (VAR_4) != ((void*)0)
      && FUNC_1 (VAR_3) != ((void*)0)
      && FUNC_1 (VAR_3)->real_flags & VAR_1)
    FUNC_1 (VAR_4)->real_flags |= VAR_1;

  if (!FUNC_0 (VAR_3, VAR_4))
    return VAR_0;

  if (&FUNC_2)
    return FUNC_2 (VAR_3, VAR_4);

  return VAR_2;
}
