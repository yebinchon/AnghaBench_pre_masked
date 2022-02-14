
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ format; } ;
typedef TYPE_1__ bfd ;


 char const* FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

const char *
FUNC_2 (bfd *VAR_3)
{
  if (VAR_3->format != VAR_1)
    {
      FUNC_1 (VAR_2);
      return ((void*)0);
    }
  return FUNC_0 (VAR_3, VAR_0, (VAR_3));
}
