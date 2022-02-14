
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ direction; } ;
typedef TYPE_1__ bfd ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

bfd *
FUNC_3 (bfd *VAR_4, bfd *VAR_5)
{
  if ((FUNC_1 (VAR_4) != VAR_0) ||
      (VAR_4->direction == VAR_3))
    {
      FUNC_2 (VAR_1);
      return ((void*)0);
    }

  return FUNC_0 (VAR_4,
     VAR_2, (VAR_4, VAR_5));
}
