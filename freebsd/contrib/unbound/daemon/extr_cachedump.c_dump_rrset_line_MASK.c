
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct ub_packed_rrset_key {int dummy; } ;
typedef int s ;
typedef int RES ;


 int FUNC_0 (struct ub_packed_rrset_key*,size_t,int ,char*,int) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_2(RES* VAR_0, struct ub_packed_rrset_key* VAR_1, time_t VAR_2, size_t VAR_3)
{
 char VAR_4[65535];
 if(!FUNC_0(VAR_1, VAR_3, VAR_2, VAR_4, sizeof(VAR_4))) {
  return FUNC_1(VAR_0, "BADRR\n");
 }
 return FUNC_1(VAR_0, "%s", VAR_4);
}
