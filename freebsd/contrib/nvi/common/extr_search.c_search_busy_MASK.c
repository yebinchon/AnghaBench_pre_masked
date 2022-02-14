
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int busy_t ;
struct TYPE_6__ {TYPE_1__* gp; } ;
struct TYPE_5__ {int (* scr_busy ) (TYPE_2__*,char*,int ) ;} ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;

void
FUNC_1(
 SCR *VAR_0,
 busy_t VAR_1)
{
 VAR_0->gp->scr_busy(VAR_0, "078|Searching...", VAR_1);
}
