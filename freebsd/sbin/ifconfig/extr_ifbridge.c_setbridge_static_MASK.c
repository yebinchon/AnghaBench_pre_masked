
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbareq {int ifba_vlan; int ifba_flags; int ifba_dst; int ifba_ifsname; } ;
struct ether_addr {int octet; } ;
struct afswtch {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbareq*,int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*,char const*) ;
 struct ether_addr* FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ifbareq*,int ,int) ;
 int FUNC_6 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, const char *VAR_3, int VAR_4,
    const struct afswtch *VAR_5)
{
 struct ifbareq VAR_6;
 struct ether_addr *VAR_7;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 FUNC_6(VAR_6.ifba_ifsname, VAR_2, sizeof(VAR_6.ifba_ifsname));

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 == ((void*)0))
  FUNC_2(1, "%s: invalid address: %s", VAR_2, VAR_3);

 FUNC_4(VAR_6.ifba_dst, VAR_7->octet, sizeof(VAR_6.ifba_dst));
 VAR_6.ifba_flags = VAR_1;
 VAR_6.ifba_vlan = 1;

 if (FUNC_0(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6), 1) < 0)
  FUNC_1(1, "BRDGSADDR %s", VAR_2);
}
