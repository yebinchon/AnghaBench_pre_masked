
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifgroupreq {int ifgr_group; int ifgr_name; } ;
struct afswtch {int dummy; } ;
typedef int ifgr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (struct ifgroupreq*,int ,int) ;
 char const* VAR_4 ;
 scalar_t__ FUNC_5 (int ,char const*,scalar_t__) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_5, int VAR_6, int VAR_7, const struct afswtch *VAR_8)
{
 struct ifgroupreq VAR_9;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_5(VAR_9.ifgr_name, VAR_4, VAR_1);

 if (VAR_5[0] && FUNC_3(VAR_5[FUNC_6(VAR_5) - 1]))
  FUNC_1(1, "unsetifgroup: group names may not end in a digit");

 if (FUNC_5(VAR_9.ifgr_group, VAR_5, VAR_1) >= VAR_1)
  FUNC_1(1, "unsetifgroup: group name too long");
 if (FUNC_2(VAR_7, VAR_2, (caddr_t)&VAR_9) == -1 && VAR_3 != VAR_0)
  FUNC_0(1, "SIOCDIFGROUP");
}
