
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cl_local_node; scalar_t__ cl_has_local; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

u8 FUNC_0(void)
{
 u8 VAR_2 = VAR_0;

 if (VAR_1 && VAR_1->cl_has_local)
  VAR_2 = VAR_1->cl_local_node;

 return VAR_2;
}
