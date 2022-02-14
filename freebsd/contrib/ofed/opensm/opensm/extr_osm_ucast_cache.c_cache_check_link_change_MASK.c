
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int p_log; int cache_valid; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_10__ {TYPE_1__* p_remote_physp; } ;
typedef TYPE_3__ osm_physp_t ;
struct TYPE_8__ {scalar_t__ p_remote_physp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(osm_ucast_mgr_t * VAR_1,
   osm_physp_t * VAR_2, osm_physp_t * VAR_3)
{
 FUNC_2(VAR_1->p_log);
 FUNC_0(VAR_2 && VAR_3);

 if (!VAR_1->cache_valid)
  goto Exit;

 if (!VAR_2->p_remote_physp && !VAR_3->p_remote_physp)

  goto Exit;



 if ((VAR_2->p_remote_physp &&
      VAR_2->p_remote_physp->p_remote_physp) ||
     (VAR_3->p_remote_physp &&
      VAR_3->p_remote_physp->p_remote_physp)) {
  FUNC_1(VAR_1->p_log, VAR_0,
   "Link location change discovered\n");
  FUNC_4(VAR_1);
  goto Exit;
 }
Exit:
 FUNC_3(VAR_1->p_log);
}
