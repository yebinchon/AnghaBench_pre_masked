
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int baud; int conversion; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1) {
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].baud >= 0; VAR_2++) {
  if (VAR_0[VAR_2].baud == VAR_1)
   break;
 }

 return VAR_0[VAR_2].conversion;
}
