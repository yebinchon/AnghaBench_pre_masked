
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; } ;
struct ifreq {TYPE_1__ ifr_hwaddr; int ifr_name; } ;
typedef int ifr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (char*,int ,scalar_t__,char*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_6, const char *VAR_7, char *VAR_8)
{
 struct ifreq VAR_9;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(VAR_9.ifr_name, VAR_7, sizeof(VAR_9.ifr_name));

 if (FUNC_0(VAR_6, VAR_4, &VAR_9) == -1) {
  FUNC_2(VAR_8, VAR_1,
      VAR_5, "SIOCGIFHWADDR");
  if (VAR_5 == VAR_0) {



   return VAR_3;
  }
  return VAR_2;
 }

 return VAR_9.ifr_hwaddr.sa_family;
}
