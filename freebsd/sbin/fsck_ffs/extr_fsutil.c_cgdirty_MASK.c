
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cg {scalar_t__ cg_ckhash; } ;
struct TYPE_3__ {struct cg* b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_4__ {int fs_metackhash; int fs_cgsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (long,void*,int ) ;
 int FUNC_1 (struct bufarea*) ;
 TYPE_2__ VAR_1 ;

void
FUNC_2(struct bufarea *VAR_2)
{
 struct cg *VAR_3;

 VAR_3 = VAR_2->b_un.b_cg;
 if ((VAR_1.fs_metackhash & VAR_0) != 0) {
  VAR_3->cg_ckhash = 0;
  VAR_3->cg_ckhash =
      FUNC_0(~0L, (void *)VAR_3, VAR_1.fs_cgsize);
 }
 FUNC_1(VAR_2);
}
