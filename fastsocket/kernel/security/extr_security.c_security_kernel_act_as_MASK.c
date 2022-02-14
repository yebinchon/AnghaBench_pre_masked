
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cred {int dummy; } ;
struct TYPE_2__ {int (* kernel_act_as ) (struct cred*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cred*,int ) ;

int FUNC_1(struct cred *VAR_1, u32 VAR_2)
{
 return VAR_0->kernel_act_as(VAR_1, VAR_2);
}
