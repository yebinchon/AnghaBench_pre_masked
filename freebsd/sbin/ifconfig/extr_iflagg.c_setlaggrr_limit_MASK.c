
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqopts {int ro_bkt; int ro_ifname; } ;
struct afswtch {int dummy; } ;
typedef int ro ;


 int VAR_0 ;
 int FUNC_0 (struct lagg_reqopts*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct lagg_reqopts*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct lagg_reqopts VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_6.ro_ifname, VAR_1, sizeof(VAR_6.ro_ifname));
 VAR_6.ro_bkt = (int)FUNC_4(VAR_2, ((void*)0), 10);

 if (FUNC_2(VAR_4, VAR_0, &VAR_6) != 0)
  FUNC_1(1, "SIOCSLAGG");
}
