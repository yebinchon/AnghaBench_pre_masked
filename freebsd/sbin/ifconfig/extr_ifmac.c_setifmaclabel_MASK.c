
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; int ifr_name; } ;
struct afswtch {int dummy; } ;
typedef scalar_t__ mac_t ;
typedef int ifr ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,char const*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct ifreq VAR_6;
 mac_t VAR_7;
 int VAR_8;

 if (FUNC_2(&VAR_7, VAR_2) == -1) {
  FUNC_4(VAR_2);
  return;
 }

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_5(VAR_6.ifr_name, VAR_1, sizeof(VAR_6.ifr_name));
 VAR_6.ifr_ifru.ifru_data = (void *)VAR_7;

 VAR_8 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 FUNC_1(VAR_7);
 if (VAR_8 == -1)
  FUNC_4("setifmac");
}
