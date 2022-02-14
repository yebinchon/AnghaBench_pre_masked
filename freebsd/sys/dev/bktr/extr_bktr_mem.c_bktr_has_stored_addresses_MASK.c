
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addresses_stored; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int) ;

int
FUNC_1(int VAR_2)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_0) {
  FUNC_0("bktr_mem: Unit number %d invalid\n", VAR_2);
  return 0;
 }

 return VAR_1[VAR_2].addresses_stored;
}
