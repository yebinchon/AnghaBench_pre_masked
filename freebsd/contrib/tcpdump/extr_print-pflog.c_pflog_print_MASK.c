
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pfloghdr {scalar_t__ uid; int ifname; int dir; int action; int reason; int ruleset; int subrulenr; int rulenr; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_4, const struct pfloghdr *VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(&VAR_5->rulenr);
 VAR_7 = FUNC_0(&VAR_5->subrulenr);
 if (VAR_7 == (uint32_t)-1)
  FUNC_1((VAR_4, "rule %u/", VAR_6));
 else
  FUNC_1((VAR_4, "rule %u.%s.%u/", VAR_6, VAR_5->ruleset, VAR_7));

 FUNC_1((VAR_4, "%s", FUNC_2(VAR_3, "unkn(%u)", VAR_5->reason)));

 if (VAR_5->uid != VAR_0)
  FUNC_1((VAR_4, " [uid %u]", (unsigned)VAR_5->uid));

 FUNC_1((VAR_4, ": %s %s on %s: ",
     FUNC_2(VAR_1, "unkn(%u)", VAR_5->action),
     FUNC_2(VAR_2, "unkn(%u)", VAR_5->dir),
     VAR_5->ifname));
}
