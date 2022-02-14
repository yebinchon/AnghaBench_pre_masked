
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_memory ) (int ,char*,int) ;} ;
typedef int CORE_ADDR ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_2)
{
  unsigned long VAR_3;

  (*VAR_1->read_memory) (VAR_2, (char *) &VAR_3, 4);
  if (VAR_3 == VAR_0)
    return 1;



  return 0;
}
