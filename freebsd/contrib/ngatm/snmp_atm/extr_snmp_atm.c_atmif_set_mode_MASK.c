
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifreq {int ifr_media; int ifm_current; int ifr_name; int ifm_name; } ;
struct ifmediareq {int ifr_media; int ifm_current; int ifr_name; int ifm_name; } ;
struct TYPE_4__ {int mode; TYPE_1__* ifp; } ;
struct atmif_priv {TYPE_2__ pub; } ;
typedef int ifr ;
typedef int ifmr ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct atmif_priv *VAR_8, int VAR_9)
{
 struct ifmediareq VAR_10;
 struct ifreq VAR_11;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10.ifm_name, VAR_8->pub.ifp->name);


 if (FUNC_0(VAR_7, VAR_3, &VAR_10) < 0) {
  FUNC_3(VAR_2, "SIOCGIFMEDIA: %m");
  return (VAR_5);
 }

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 FUNC_2(VAR_11.ifr_name, VAR_8->pub.ifp->name);

 VAR_11.ifr_media = VAR_10.ifm_current;
 if (VAR_9 == VAR_0)
  VAR_11.ifr_media |= VAR_1;
 else
  VAR_11.ifr_media &= ~VAR_1;

 if (FUNC_0(VAR_7, VAR_4, &VAR_11) < 0) {
  FUNC_3(VAR_2, "SIOCSIFMEDIA: %m");
  return (VAR_5);
 }

 VAR_8->pub.mode = VAR_9;
 return (VAR_6);
}
