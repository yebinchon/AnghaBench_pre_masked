
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mf_cid; scalar_t__ mf_server; scalar_t__ mf_mount; scalar_t__ mf_private; int (* mf_prfree ) (scalar_t__) ;scalar_t__ mf_info; scalar_t__ mf_remopts; scalar_t__ mf_mopts; scalar_t__ mf_auto; scalar_t__ mf_fo; } ;
typedef TYPE_1__ mntfs ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(mntfs *VAR_0)
{
  if (VAR_0->mf_fo) {
    FUNC_1(VAR_0->mf_fo);
    FUNC_0(VAR_0->mf_fo);
  }
  FUNC_0(VAR_0->mf_auto);
  FUNC_0(VAR_0->mf_mopts);
  FUNC_0(VAR_0->mf_remopts);
  FUNC_0(VAR_0->mf_info);
  if (VAR_0->mf_private && VAR_0->mf_prfree)
    (*VAR_0->mf_prfree) (VAR_0->mf_private);

  FUNC_0(VAR_0->mf_mount);




  if (VAR_0->mf_server)
    FUNC_2(VAR_0->mf_server);




  if (VAR_0->mf_cid) {
    FUNC_4(VAR_0->mf_cid);
    VAR_0->mf_cid = 0;
  }
}
