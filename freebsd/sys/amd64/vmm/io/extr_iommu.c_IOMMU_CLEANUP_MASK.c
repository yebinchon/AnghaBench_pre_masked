
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cleanup ) () ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static __inline void
FUNC_1(void)
{
 if (VAR_1 != ((void*)0) && VAR_0)
  (*VAR_1->cleanup)();
}
