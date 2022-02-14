
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_2, struct ifmediareq *VAR_3)
{

 VAR_3->ifm_status = VAR_1 | VAR_0;

 return;
}
