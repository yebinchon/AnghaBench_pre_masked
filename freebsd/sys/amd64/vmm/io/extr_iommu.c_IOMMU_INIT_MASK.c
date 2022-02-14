
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static __inline int
FUNC_1(void)
{
 if (VAR_1 != ((void*)0))
  return ((*VAR_1->init)());
 else
  return (VAR_0);
}
