
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_ndifreq {unsigned int ifindex; int ifname; } ;
typedef int ndifreq ;
typedef int caddr_t ;
struct TYPE_2__ {int ifr_name; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct in6_ndifreq*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_2)
{
 struct in6_ndifreq VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 FUNC_3(VAR_3.ifname, VAR_1.ifr_name, sizeof(VAR_3.ifname));

 VAR_4 = FUNC_0(VAR_3.ifname);
 VAR_5 = FUNC_1(VAR_2, VAR_0, (caddr_t)&VAR_3);
 if (VAR_5) {
  FUNC_4("ioctl(SIOCGDEFIFACE_IN6)");
  return (VAR_5);
 }
 return (VAR_3.ifindex == VAR_4);
}
