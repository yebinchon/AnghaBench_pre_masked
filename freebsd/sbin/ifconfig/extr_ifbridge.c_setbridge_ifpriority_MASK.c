
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifbreq {int ifbr_priority; int ifbr_ifsname; } ;
struct afswtch {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbreq*,int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int*) ;
 int FUNC_4 (struct ifbreq*,int ,int) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, const char *VAR_2, int VAR_3,
    const struct afswtch *VAR_4)
{
 struct ifbreq VAR_5;
 u_long VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_3(VAR_2, &VAR_6) < 0 || (VAR_6 & ~0xff) != 0)
  FUNC_2(1, "invalid value: %s", VAR_2);

 FUNC_5(VAR_5.ifbr_ifsname, VAR_1, sizeof(VAR_5.ifbr_ifsname));
 VAR_5.ifbr_priority = VAR_6 & 0xff;

 if (FUNC_0(VAR_3, VAR_0, &VAR_5, sizeof(VAR_5), 1) < 0)
  FUNC_1(1, "BRDGSIFPRIO %s", VAR_2);
}
