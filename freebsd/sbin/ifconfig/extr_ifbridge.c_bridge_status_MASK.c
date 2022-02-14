
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ifbrparam {int ifbrp_csize; int ifbrp_ctime; int ifbop_priority; int ifbop_protocol; int ifbop_hellotime; int ifbop_fwddelay; int ifbop_holdcount; int ifbop_maxage; int ifbop_root_path_cost; int ifbop_root_port; int ifbop_designated_root; int ifbop_bridgeid; } ;
struct ifbropreq {int ifbrp_csize; int ifbrp_ctime; int ifbop_priority; int ifbop_protocol; int ifbop_hellotime; int ifbop_fwddelay; int ifbop_holdcount; int ifbop_maxage; int ifbop_root_path_cost; int ifbop_root_port; int ifbop_designated_root; int ifbop_bridgeid; } ;
struct ether_addr {int dummy; } ;
typedef int param ;
typedef int ifbp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct ifbrparam*,int,int ) ;
 char* FUNC_3 (struct ether_addr*) ;
 int FUNC_4 (char*,...) ;
 char** VAR_4 ;

__attribute__((used)) static void
FUNC_5(int VAR_5)
{
 struct ifbropreq VAR_6;
 struct ifbrparam VAR_7;
 u_int16_t VAR_8;
 u_int8_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u_int8_t VAR_14[VAR_3];
 u_int16_t VAR_15;
 u_int32_t VAR_16, VAR_17;

 if (FUNC_2(VAR_5, VAR_0, &VAR_7, sizeof(VAR_7), 0) < 0)
  return;
 VAR_16 = VAR_7.ifbrp_csize;
 if (FUNC_2(VAR_5, VAR_1, &VAR_7, sizeof(VAR_7), 0) < 0)
  return;
 VAR_17 = VAR_7.ifbrp_ctime;
 if (FUNC_2(VAR_5, VAR_2, &VAR_6, sizeof(VAR_6), 0) < 0)
  return;
 VAR_8 = VAR_6.ifbop_priority;
 VAR_13 = VAR_6.ifbop_protocol;
 VAR_9 = VAR_6.ifbop_hellotime;
 VAR_10 = VAR_6.ifbop_fwddelay;
 VAR_12 = VAR_6.ifbop_holdcount;
 VAR_11 = VAR_6.ifbop_maxage;

 FUNC_0(VAR_6.ifbop_bridgeid, VAR_15, VAR_14);
 FUNC_4("\tid %s priority %u hellotime %u fwddelay %u\n",
     FUNC_3((struct ether_addr *)VAR_14), VAR_8, VAR_9, VAR_10);
 FUNC_4("\tmaxage %u holdcnt %u proto %s maxaddr %u timeout %u\n",
     VAR_11, VAR_12, VAR_4[VAR_13], VAR_16, VAR_17);

 FUNC_0(VAR_6.ifbop_designated_root, VAR_15, VAR_14);
 FUNC_4("\troot id %s priority %d ifcost %u port %u\n",
     FUNC_3((struct ether_addr *)VAR_14), VAR_15,
     VAR_6.ifbop_root_path_cost, VAR_6.ifbop_root_port & 0xfff);

 FUNC_1(VAR_5, "\tmember: ");

 return;

}
