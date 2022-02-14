
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int flags; int * name; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;

bfd_boolean
FUNC_1 (bfd *VAR_5, asymbol *VAR_6)
{



  if ((VAR_6->flags & (VAR_1 | VAR_3 | VAR_0 | VAR_2)) != 0)
    return VAR_4;
  if (VAR_6->name == ((void*)0))
    return VAR_4;
  return FUNC_0 (VAR_5, VAR_6->name);
}
