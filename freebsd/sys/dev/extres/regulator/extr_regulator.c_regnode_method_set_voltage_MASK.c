
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_uvolt; int min_uvolt; } ;
struct regnode {TYPE_1__ std_param; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct regnode *VAR_1, int VAR_2, int VAR_3,
    int *VAR_4)
{

 if ((VAR_2 > VAR_1->std_param.max_uvolt) ||
     (VAR_3 < VAR_1->std_param.min_uvolt))
  return (VAR_0);
 *VAR_4 = 0;
 return (0);
}
