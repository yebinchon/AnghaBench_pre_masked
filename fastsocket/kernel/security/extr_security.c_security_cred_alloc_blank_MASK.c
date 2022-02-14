
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* cred_alloc_blank ) (struct cred*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cred*,int ) ;

int FUNC_1(struct cred *VAR_1, gfp_t VAR_2)
{
 return VAR_0->cred_alloc_blank(VAR_1, VAR_2);
}
