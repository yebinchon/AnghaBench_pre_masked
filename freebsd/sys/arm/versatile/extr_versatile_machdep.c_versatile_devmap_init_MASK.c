
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int platform_t ;
struct TYPE_3__ {int pd_va; int pd_pa; int pd_size; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_1(platform_t VAR_1)
{
 int VAR_2 = 0;
 VAR_0[VAR_2].pd_va = 0xf0100000;
 VAR_0[VAR_2].pd_pa = 0x10100000;
 VAR_0[VAR_2].pd_size = 0x01000000;

 FUNC_0(&VAR_0[0]);
 return (0);
}
