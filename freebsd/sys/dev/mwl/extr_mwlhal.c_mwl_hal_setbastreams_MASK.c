
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_hal {int dummy; } ;
struct TYPE_2__ {int mh_bastreams; } ;


 TYPE_1__* FUNC_0 (struct mwl_hal*) ;
 int VAR_0 ;

void
FUNC_1(struct mwl_hal *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1)->mh_bastreams = VAR_2 & ((1<<VAR_0)-1);
}
