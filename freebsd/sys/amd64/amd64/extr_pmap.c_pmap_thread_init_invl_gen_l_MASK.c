
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmap_invl_gen {scalar_t__ gen; } ;
struct TYPE_2__ {struct pmap_invl_gen md_invl_gen; } ;
struct thread {TYPE_1__ td_md; } ;



__attribute__((used)) static void
FUNC_0(struct thread *VAR_0)
{
 struct pmap_invl_gen *VAR_1;

 VAR_1 = &VAR_0->td_md.md_invl_gen;
 VAR_1->gen = 0;
}
