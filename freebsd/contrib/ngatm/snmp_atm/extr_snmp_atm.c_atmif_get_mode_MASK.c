
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifmediareq {int ifm_current; int ifm_name; } ;
struct TYPE_4__ {int mode; TYPE_1__* ifp; } ;
struct atmif_priv {TYPE_2__ pub; } ;
typedef int ifmr ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifmediareq*) ;
 int FUNC_1 (struct ifmediareq*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct atmif_priv *VAR_9)
{
 struct ifmediareq VAR_10;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10.ifm_name, VAR_9->pub.ifp->name);

 if (FUNC_0(VAR_8, VAR_5, &VAR_10) < 0) {
  FUNC_3(VAR_4, "SIOCGIFMEDIA: %m");
  VAR_9->pub.mode = VAR_2;
  return (VAR_6);
 }
 if (VAR_10.ifm_current & VAR_3)
  VAR_9->pub.mode = VAR_0;
 else
  VAR_9->pub.mode = VAR_1;

 return (VAR_7);
}
