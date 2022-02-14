
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_3__ {int mf_prfree; int mf_info; scalar_t__ mf_private; int mf_mount; } ;
typedef TYPE_1__ mntfs ;
typedef int am_node ;


 scalar_t__ FUNC_0 (int ,char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(am_node *VAR_2, mntfs *VAR_3)
{
  VAR_3->mf_mount = FUNC_1(VAR_3->mf_mount, VAR_1);
  VAR_3->mf_private = (opaque_t) FUNC_0(VAR_3->mf_info, "", ((void*)0), ((void*)0));
  VAR_3->mf_prfree = VAR_0;

  return 0;
}
