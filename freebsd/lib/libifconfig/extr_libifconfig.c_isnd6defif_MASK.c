
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_ndifreq {unsigned int ifindex; int ifname; } ;
typedef int ndifreq ;
struct TYPE_5__ {int errtype; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,struct in6_ndifreq*) ;
 int FUNC_2 (struct in6_ndifreq*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static bool
FUNC_4(ifconfig_handle_t *VAR_3, const char *VAR_4)
{
 struct in6_ndifreq VAR_5;
 unsigned int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.ifname, VAR_4, sizeof(VAR_5.ifname));
 VAR_6 = FUNC_0(VAR_5.ifname);
 if (FUNC_1(VAR_3, VAR_0, VAR_2, &VAR_5) < 0) {
  return (0);
 }
 VAR_3->error.errtype = VAR_1;
 return (VAR_5.ifindex == VAR_6);
}
