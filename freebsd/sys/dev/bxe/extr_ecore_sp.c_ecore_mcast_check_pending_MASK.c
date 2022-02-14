
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* check_pending ) (TYPE_1__*) ;} ;
struct ecore_mcast_obj {scalar_t__ (* check_sched ) (struct ecore_mcast_obj*) ;TYPE_1__ raw; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ecore_mcast_obj*) ;

__attribute__((used)) static bool FUNC_2(struct ecore_mcast_obj *VAR_0)
{
 return VAR_0->raw.check_pending(&VAR_0->raw) || VAR_0->check_sched(VAR_0);
}
