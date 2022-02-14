
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct namecache {int nc_flag; TYPE_1__* nc_dvp; int nc_name; TYPE_1__* nc_vp; } ;
struct TYPE_6__ {int v_cache_src; struct namecache* v_cache_dd; int v_cache_dst; } ;


 int FUNC_0 (int ,char*,struct namecache*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct namecache*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_5 (int *,struct namecache*,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct namecache*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct namecache*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_10(struct namecache *VAR_15, bool VAR_16)
{

 if (!(VAR_15->nc_flag & VAR_3))
  FUNC_8(VAR_15->nc_vp);
 FUNC_8(VAR_15->nc_dvp);
 FUNC_7(VAR_15, VAR_4);

 FUNC_0(VAR_0, "cache_zap(%p) vp %p", VAR_15,
     (VAR_15->nc_flag & VAR_3) ? ((void*)0) : VAR_15->nc_vp);
 FUNC_2(VAR_15, VAR_8);
 if (!(VAR_15->nc_flag & VAR_3)) {
  FUNC_4(VAR_12, VAR_6, VAR_13, VAR_5, VAR_15->nc_dvp,
      VAR_15->nc_name, VAR_15->nc_vp);
  FUNC_5(&VAR_15->nc_vp->v_cache_dst, VAR_15, VAR_7);
  if (VAR_15 == VAR_15->nc_vp->v_cache_dd)
   VAR_15->nc_vp->v_cache_dd = ((void*)0);
 } else {
  FUNC_3(VAR_12, VAR_6, VAR_14, VAR_5, VAR_15->nc_dvp,
      VAR_15->nc_name);
  FUNC_9(VAR_15, VAR_16);
 }
 if (VAR_15->nc_flag & VAR_2) {
  if (VAR_15 == VAR_15->nc_dvp->v_cache_dd)
   VAR_15->nc_dvp->v_cache_dd = ((void*)0);
 } else {
  FUNC_2(VAR_15, VAR_9);
  if (FUNC_1(&VAR_15->nc_dvp->v_cache_src)) {
   VAR_15->nc_flag |= VAR_1;
   FUNC_6(&VAR_11, 1);
  }
 }
 FUNC_6(&VAR_10, 1);
}
