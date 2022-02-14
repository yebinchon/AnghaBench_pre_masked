
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mf_refc; scalar_t__ mf_cid; } ;
typedef TYPE_1__ mntfs ;


 int FUNC_0 (scalar_t__) ;

mntfs *
FUNC_1(mntfs *VAR_0)
{
  if (VAR_0->mf_refc == 0) {
    if (VAR_0->mf_cid)
      FUNC_0(VAR_0->mf_cid);
    VAR_0->mf_cid = 0;
  }
  VAR_0->mf_refc++;

  return VAR_0;
}
