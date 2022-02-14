
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cg {scalar_t__ cg_ckhash; } ;
struct TYPE_2__ {int fs_metackhash; int fs_cgsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (long,void*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct cg *VAR_2)
{

 if ((VAR_1.fs_metackhash & VAR_0) == 0)
  return;
 VAR_2->cg_ckhash = 0;
 VAR_2->cg_ckhash = FUNC_0(~0L, (void *)VAR_2, VAR_1.fs_cgsize);
}
