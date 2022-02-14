
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvxlancmd {int vxlcmd_flags; } ;
struct afswtch {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifvxlancmd*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct ifvxlancmd*,int,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct ifvxlancmd VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 if (VAR_3 != 0)
  VAR_6.vxlcmd_flags |= VAR_0;

 if (FUNC_1(VAR_4, VAR_1, &VAR_6, sizeof(VAR_6), 1) < 0)
  FUNC_2(1, "VXLAN_CMD_FLUSH");
}
