
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct in6_ndireq {TYPE_1__ ndi; int ifname; } ;
struct TYPE_8__ {scalar_t__ errtype; } ;
struct TYPE_9__ {TYPE_2__ error; } ;
typedef TYPE_3__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,struct in6_ndireq*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (struct in6_ndireq*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(ifconfig_handle_t *VAR_4, const char *VAR_5,
    struct in6_ndireq *VAR_6)
{
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 FUNC_3(VAR_6->ifname, VAR_5, sizeof(VAR_6->ifname));
 if (FUNC_0(VAR_4, VAR_0, VAR_3, VAR_6) == -1) {
  return (-1);
 }
 if (FUNC_1(VAR_4, VAR_5)) {
  VAR_6->ndi.flags |= VAR_1;
 } else if (VAR_4->error.errtype != VAR_2) {
  return (-1);
 }

 return (0);
}
