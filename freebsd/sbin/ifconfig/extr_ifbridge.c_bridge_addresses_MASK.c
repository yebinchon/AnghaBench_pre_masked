
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbareq {char* ifba_vlan; int ifba_flags; int ifba_expire; int ifba_ifsname; int ifba_dst; } ;
struct ifbaconf {int ifbac_len; char* ifbac_buf; struct ifbareq* ifbac_req; } ;
struct ether_addr {int octet; } ;
typedef int ifbac ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbaconf*,int,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ether_addr*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_2, const char *VAR_3)
{
 struct ifbaconf VAR_4;
 struct ifbareq *VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7;
 int VAR_8, VAR_9 = 8192;
 struct ether_addr VAR_10;

 for (;;) {
  VAR_7 = FUNC_7(VAR_6, VAR_9);
  if (VAR_7 == ((void*)0))
   FUNC_1(1, "unable to allocate address buffer");
  VAR_4.ifbac_len = VAR_9;
  VAR_4.ifbac_buf = VAR_6 = VAR_7;
  if (FUNC_0(VAR_2, VAR_0, &VAR_4, sizeof(VAR_4), 0) < 0)
   FUNC_1(1, "unable to get address cache");
  if ((VAR_4.ifbac_len + sizeof(*VAR_5)) < VAR_9)
   break;
  VAR_9 *= 2;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4.ifbac_len / sizeof(*VAR_5); VAR_8++) {
  VAR_5 = VAR_4.ifbac_req + VAR_8;
  FUNC_4(VAR_10.octet, VAR_5->ifba_dst,
      sizeof(VAR_10.octet));
  FUNC_6("%s%s Vlan%d %s %lu ", VAR_3, FUNC_2(&VAR_10),
      VAR_5->ifba_vlan, VAR_5->ifba_ifsname, VAR_5->ifba_expire);
  FUNC_5("flags", VAR_5->ifba_flags, VAR_1);
  FUNC_6("\n");
 }

 FUNC_3(VAR_6);
}
