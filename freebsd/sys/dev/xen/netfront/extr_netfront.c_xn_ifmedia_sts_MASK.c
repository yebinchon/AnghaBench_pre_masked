
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_4, struct ifmediareq *VAR_5)
{

 VAR_5->ifm_status = VAR_1|VAR_0;
 VAR_5->ifm_active = VAR_2|VAR_3;
}
