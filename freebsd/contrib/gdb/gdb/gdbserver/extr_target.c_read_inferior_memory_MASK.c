
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_memory ) (int ,char*,int) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_0 ;

int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4;
  VAR_4 = (*VAR_0->read_memory) (VAR_1, VAR_2, VAR_3);
  FUNC_0 (VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
