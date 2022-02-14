
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int cn_flags; int cn_pnbuf; } ;
struct nameidata {int * ni_startdir; TYPE_1__ ni_cnd; int * ni_dvp; int * ni_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nameidata *VAR_12, const u_int VAR_13)
{
 int VAR_14;
 int VAR_15;

 VAR_14 = 0;
 VAR_15 = 0;

 if (!(VAR_13 & VAR_5) &&
     (VAR_12->ni_cnd.cn_flags & VAR_0)) {
  FUNC_1(VAR_11, VAR_12->ni_cnd.cn_pnbuf);
  VAR_12->ni_cnd.cn_flags &= ~VAR_0;
 }
 if (!(VAR_13 & VAR_8) &&
     (VAR_12->ni_cnd.cn_flags & VAR_1) && VAR_12->ni_vp)
  VAR_15 = 1;
 if (!(VAR_13 & VAR_4) &&
     (VAR_12->ni_cnd.cn_flags & VAR_2) &&
     VAR_12->ni_dvp != VAR_12->ni_vp)
  VAR_14 = 1;
 if (!(VAR_13 & VAR_7) && VAR_12->ni_vp) {
  if (VAR_15) {
   FUNC_2(VAR_12->ni_vp);
   VAR_15 = 0;
  } else
   FUNC_3(VAR_12->ni_vp);
  VAR_12->ni_vp = ((void*)0);
 }
 if (VAR_15)
  FUNC_0(VAR_12->ni_vp, 0);
 if (!(VAR_13 & VAR_3) &&
     (VAR_12->ni_cnd.cn_flags & (VAR_2|VAR_10))) {
  if (VAR_14) {
   FUNC_2(VAR_12->ni_dvp);
   VAR_14 = 0;
  } else
   FUNC_3(VAR_12->ni_dvp);
  VAR_12->ni_dvp = ((void*)0);
 }
 if (VAR_14)
  FUNC_0(VAR_12->ni_dvp, 0);
 if (!(VAR_13 & VAR_6) &&
     (VAR_12->ni_cnd.cn_flags & VAR_9)) {
  FUNC_3(VAR_12->ni_startdir);
  VAR_12->ni_startdir = ((void*)0);
 }
}
