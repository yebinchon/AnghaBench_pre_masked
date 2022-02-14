
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_uvolt; int max_uvolt; } ;
struct regnode {TYPE_1__ std_param; } ;



__attribute__((used)) static int
FUNC_0(struct regnode *VAR_0, int *VAR_1)
{

 return (VAR_0->std_param.min_uvolt +
     (VAR_0->std_param.max_uvolt - VAR_0->std_param.min_uvolt) / 2);
}
