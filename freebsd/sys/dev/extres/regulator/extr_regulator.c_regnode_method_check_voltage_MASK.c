
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_uvolt; int min_uvolt; } ;
struct regnode {TYPE_1__ std_param; } ;


 int VAR_0 ;

int
FUNC_0(struct regnode *VAR_1, int VAR_2)
{

 if ((VAR_2 > VAR_1->std_param.max_uvolt) ||
     (VAR_2 < VAR_1->std_param.min_uvolt))
  return (VAR_0);
 return (0);
}
