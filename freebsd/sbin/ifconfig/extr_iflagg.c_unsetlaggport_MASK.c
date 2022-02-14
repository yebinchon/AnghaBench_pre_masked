
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqport {int rp_portname; int rp_ifname; } ;
struct afswtch {int dummy; } ;
typedef int rp ;


 int VAR_0 ;
 int FUNC_0 (struct lagg_reqport*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct lagg_reqport*) ;
 char const* VAR_1 ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct lagg_reqport VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_6.rp_ifname, VAR_1, sizeof(VAR_6.rp_ifname));
 FUNC_3(VAR_6.rp_portname, VAR_2, sizeof(VAR_6.rp_portname));

 if (FUNC_2(VAR_4, VAR_0, &VAR_6))
  FUNC_1(1, "SIOCSLAGGDELPORT");
}
