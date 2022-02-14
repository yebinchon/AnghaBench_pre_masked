
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opheader; } ;
typedef TYPE_1__ ipfw_obj_header ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_1(ipfw_obj_header *VAR_1)
{

 if (FUNC_0(VAR_0, &VAR_1->opheader, sizeof(*VAR_1)) != 0)
  return (-1);

 return (0);
}
