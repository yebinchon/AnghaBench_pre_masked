
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int msr; } ;
struct src {int multi; TYPE_1__ rsc; TYPE_3__* ops; } ;
struct ct_atc_pcm {TYPE_2__* vm_block; struct src* src; } ;
struct ct_atc {int dummy; } ;
struct TYPE_6__ {int (* get_ca ) (struct src*) ;} ;
struct TYPE_5__ {int size; int addr; } ;


 int FUNC_0 (struct src*) ;

__attribute__((used)) static int
FUNC_1(struct ct_atc *VAR_0, struct ct_atc_pcm *VAR_1)
{
 struct src *VAR_2 = VAR_1->src;
 u32 VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;
 VAR_5 = VAR_2->ops->get_ca(VAR_2);

 VAR_3 = VAR_1->vm_block->size;
 VAR_4 = VAR_2->multi * VAR_2->rsc.msr;
 VAR_4 = 128 * (VAR_4 < 8 ? VAR_4 : 8);

 return (VAR_5 + VAR_3 - VAR_4 - VAR_1->vm_block->addr) % VAR_3;
}
