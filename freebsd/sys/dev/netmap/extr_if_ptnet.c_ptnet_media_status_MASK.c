
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_status; int ifm_active; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(if_t VAR_5, struct ifmediareq *VAR_6)
{


 VAR_6->ifm_status = VAR_2 | VAR_1;
 VAR_6->ifm_active = VAR_3 | VAR_0 | VAR_4;
}
