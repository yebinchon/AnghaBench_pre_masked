
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqport {int rp_portname; int rp_ifname; } ;
struct afswtch {int dummy; } ;
typedef int rp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lagg_reqport*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ,struct lagg_reqport*) ;
 char const* VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char*,char const*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_5, int VAR_6, int VAR_7, const struct afswtch *VAR_8)
{
 struct lagg_reqport VAR_9;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_3(VAR_9.rp_ifname, VAR_4, sizeof(VAR_9.rp_ifname));
 FUNC_3(VAR_9.rp_portname, VAR_5, sizeof(VAR_9.rp_portname));







 if (FUNC_1(VAR_7, VAR_1, &VAR_9) && VAR_2 != VAR_0) {
  FUNC_4("%s %s: SIOCSLAGGPORT: %s",
      VAR_4, VAR_5, FUNC_2(VAR_2));
  VAR_3 = 1;
 }
}
