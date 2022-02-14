
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct src {TYPE_1__* ops; } ;
struct ct_atc_pcm {TYPE_2__* vm_block; struct src* src; } ;
struct ct_atc {int dummy; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int (* get_ca ) (struct src*) ;} ;


 int FUNC_0 (struct src*) ;

__attribute__((used)) static int
FUNC_1(struct ct_atc *VAR_0, struct ct_atc_pcm *VAR_1)
{
 struct src *VAR_2 = VAR_1->src;

 if (!VAR_2)
  return 0;
 return VAR_2->ops->get_ca(VAR_2) - VAR_1->vm_block->addr;
}
