
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqopts {int ro_flowid_shift; int ro_ifname; int ro_opts; } ;
struct afswtch {int dummy; } ;
typedef int ro ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lagg_reqopts*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ FUNC_3 (int,int ,struct lagg_reqopts*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4, int VAR_5, int VAR_6, const struct afswtch *VAR_7)
{
 struct lagg_reqopts VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.ro_opts = VAR_0;
 FUNC_4(VAR_8.ro_ifname, VAR_3, sizeof(VAR_8.ro_ifname));
 VAR_8.ro_flowid_shift = (int)FUNC_5(VAR_4, ((void*)0), 10);
 if (VAR_8.ro_flowid_shift & ~VAR_1)
  FUNC_2(1, "Invalid flowid_shift option: %s", VAR_4);

 if (FUNC_3(VAR_6, VAR_2, &VAR_8) != 0)
  FUNC_1(1, "SIOCSLAGGOPTS");
}
