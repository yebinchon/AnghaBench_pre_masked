
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmap_invl_gen {scalar_t__ gen; } ;
struct TYPE_3__ {struct pmap_invl_gen md_invl_gen; } ;
struct TYPE_4__ {TYPE_1__ td_md; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool
FUNC_0(void)
{
 struct pmap_invl_gen *VAR_1;

 VAR_1 = &VAR_0->td_md.md_invl_gen;
 return (VAR_1->gen == 0);
}
