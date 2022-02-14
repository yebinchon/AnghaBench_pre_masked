
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsname; } ;
struct afswtch {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbreq*,int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (struct ifbreq*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
 struct ifbreq VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.ifbr_ifsname, VAR_1, sizeof(VAR_5.ifbr_ifsname));
 if (FUNC_0(VAR_3, VAR_0, &VAR_5, sizeof(VAR_5), 1) < 0)
  FUNC_1(1, "BRDGADD %s", VAR_1);
}
