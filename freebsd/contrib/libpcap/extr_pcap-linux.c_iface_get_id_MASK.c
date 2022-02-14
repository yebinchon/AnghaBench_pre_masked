
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_ifindex; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, const char *VAR_4, char *VAR_5)
{
 struct ifreq VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.ifr_name, VAR_4, sizeof(VAR_6.ifr_name));

 if (FUNC_0(VAR_3, VAR_1, &VAR_6) == -1) {
  FUNC_2(VAR_5, VAR_0,
      VAR_2, "SIOCGIFINDEX");
  return -1;
 }

 return VAR_6.ifr_ifindex;
}
