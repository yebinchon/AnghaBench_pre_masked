
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqopts {int ro_opts; int ro_ifname; } ;
struct afswtch {int dummy; } ;
typedef int ro ;
 int VAR_0 ;
 int FUNC_0 (struct lagg_reqopts*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct lagg_reqopts*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct lagg_reqopts VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.ro_opts = VAR_3;
 switch (VAR_6.ro_opts) {
 case 129:
 case -129:
 case 128:
 case -128:
 case 132:
 case -132:
 case 130:
 case -130:
 case 133:
 case -133:
 case 131:
 case -131:
  break;
 default:
  FUNC_1(1, "Invalid lagg option");
 }
 FUNC_3(VAR_6.ro_ifname, VAR_1, sizeof(VAR_6.ro_ifname));

 if (FUNC_2(VAR_4, VAR_0, &VAR_6) != 0)
  FUNC_1(1, "SIOCSLAGGOPTS");
}
