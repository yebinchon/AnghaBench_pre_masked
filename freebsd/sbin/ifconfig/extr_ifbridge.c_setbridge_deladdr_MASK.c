
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbareq {int ifba_dst; } ;
struct ether_addr {int octet; } ;
struct afswtch {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbareq*,int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 struct ether_addr* FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ifbareq*,int ,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
 struct ifbareq VAR_5;
 struct ether_addr *VAR_6;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6 == ((void*)0))
  FUNC_2(1, "invalid address: %s", VAR_1);

 FUNC_4(VAR_5.ifba_dst, VAR_6->octet, sizeof(VAR_5.ifba_dst));

 if (FUNC_0(VAR_3, VAR_0, &VAR_5, sizeof(VAR_5), 1) < 0)
  FUNC_1(1, "BRDGDADDR %s", VAR_1);
}
