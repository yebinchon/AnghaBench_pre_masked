
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface {int dummy; } ;
struct dr {scalar_t__ dr_life; scalar_t__ dr_ts; scalar_t__ dr_recv_pref; struct interface* dr_ifp; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 size_t VAR_0 ;
 struct dr* VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_0(struct interface *VAR_3)
{
 struct dr *VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < &VAR_1[VAR_0]; VAR_4++) {
  if (VAR_4->dr_ifp != VAR_3)
   continue;
  VAR_4->dr_recv_pref = 0;
  VAR_4->dr_ts = 0;
  VAR_4->dr_life = 0;
 }


 VAR_2.tv_sec = 0;
}
