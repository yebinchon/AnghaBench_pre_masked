
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibif {int name; } ;
struct ifreq {int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct mibif*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

int
FUNC_4(struct mibif *VAR_5, int VAR_6)
{
 struct ifreq VAR_7;

 FUNC_2(VAR_7.ifr_name, VAR_5->name, sizeof(VAR_7.ifr_name));
 if (FUNC_0(VAR_4, VAR_2, &VAR_7) == -1) {
  FUNC_3(VAR_1, "SIOCGIFFLAGS(%s): %m", VAR_5->name);
  return (-1);
 }
 if (VAR_6)
  VAR_7.ifr_flags |= VAR_0;
 else
  VAR_7.ifr_flags &= ~VAR_0;
 if (FUNC_0(VAR_4, VAR_3, &VAR_7) == -1) {
  FUNC_3(VAR_1, "SIOCSIFFLAGS(%s): %m", VAR_5->name);
  return (-1);
 }

 (void)FUNC_1(VAR_5);

 return (0);
}
