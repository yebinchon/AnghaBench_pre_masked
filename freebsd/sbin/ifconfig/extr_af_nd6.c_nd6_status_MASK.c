
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct in6_ndireq {TYPE_1__ ndi; int ifname; } ;
typedef int nd ;
struct TYPE_4__ {int ifr_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_1 (int,int ,struct in6_ndireq*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct in6_ndireq*,int ,int) ;
 int FUNC_4 (char*,unsigned int,int ) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*) ;

void
FUNC_9(int VAR_9)
{
 struct in6_ndireq VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_7(VAR_10.ifname, VAR_8.ifr_name, sizeof(VAR_10.ifname));
 if ((VAR_11 = FUNC_6(VAR_0, VAR_6, 0)) < 0) {
  if (VAR_7 != VAR_1 && VAR_7 != VAR_3)
   FUNC_8("socket(AF_INET6, SOCK_DGRAM)");
  return;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_5, &VAR_10);
 if (VAR_12) {
  if (VAR_7 != VAR_2)
   FUNC_8("ioctl(SIOCGIFINFO_IN6)");
  FUNC_0(VAR_11);
  return;
 }
 VAR_13 = FUNC_2(VAR_11);
 FUNC_0(VAR_11);
 if (VAR_10.ndi.flags == 0 && !VAR_13)
  return;
 FUNC_4("\tnd6 options",
     (unsigned int)(VAR_10.ndi.flags | (VAR_13 << 15)), VAR_4);
 FUNC_5('\n');
}
