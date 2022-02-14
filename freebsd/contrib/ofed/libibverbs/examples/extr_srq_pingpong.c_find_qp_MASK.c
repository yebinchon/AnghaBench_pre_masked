
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong_context {TYPE_1__** qp; } ;
struct TYPE_2__ {int qp_num; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, struct pingpong_context *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  if (VAR_1->qp[VAR_3]->qp_num == VAR_0)
   return VAR_3;

 return -1;
}
