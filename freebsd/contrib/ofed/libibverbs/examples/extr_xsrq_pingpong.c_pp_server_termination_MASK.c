
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_clients; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0.num_clients; VAR_1++) {
  if (FUNC_0(VAR_1))
   return 1;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.num_clients; VAR_1++) {
  if (FUNC_1(VAR_1))
   return 1;
 }

 return 0;
}
