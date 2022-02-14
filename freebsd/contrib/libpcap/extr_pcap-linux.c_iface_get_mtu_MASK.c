
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, const char *VAR_5, char *VAR_6)
{
 struct ifreq VAR_7;

 if (!VAR_5)
  return VAR_0;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_3(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));

 if (FUNC_0(VAR_4, VAR_2, &VAR_7) == -1) {
  FUNC_2(VAR_6, VAR_1,
      VAR_3, "SIOCGIFMTU");
  return -1;
 }

 return VAR_7.ifr_mtu;
}
