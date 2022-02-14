
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ sections; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_1)
{
  if (VAR_1->sections)
    FUNC_1 (VAR_1,
      VAR_0,
      ((void*)0));

  return FUNC_0 (VAR_1);
}
