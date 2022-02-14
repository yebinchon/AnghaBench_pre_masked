
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct ifreq {scalar_t__ ifr_mtu; int ifr_name; } ;
typedef int ifr ;
typedef struct ifreq* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,scalar_t__,int ) ;

void
FUNC_8(char *VAR_5, u_int16_t VAR_6)
{
 struct ifreq VAR_7;
 int VAR_8;
 u_int16_t VAR_9;

 if ((VAR_8 = FUNC_4(VAR_0, VAR_3, 0)) == -1)
  FUNC_1("Can't create socket");

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_9 = 0;

 FUNC_6(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));

 if (FUNC_2(VAR_8, VAR_1, (caddr_t)&VAR_7) == -1)
  FUNC_7("SIOCGIFMTU failed (%s): %s", VAR_5,
   FUNC_5(VAR_4));
 else
  VAR_9 = VAR_7.ifr_mtu;

 if (VAR_6 != VAR_9) {
  VAR_7.ifr_mtu = VAR_6;

  if (FUNC_2(VAR_8, VAR_2, &VAR_7) == -1)
   FUNC_7("SIOCSIFMTU failed (%d): %s", VAR_6,
    FUNC_5(VAR_4));
 }

 FUNC_0(VAR_8);
}
