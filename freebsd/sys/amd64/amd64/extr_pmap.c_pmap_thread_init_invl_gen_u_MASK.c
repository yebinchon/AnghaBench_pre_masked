
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmap_invl_gen {void* next; scalar_t__ gen; } ;
struct TYPE_2__ {struct pmap_invl_gen md_invl_gen; } ;
struct thread {TYPE_1__ td_md; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct thread *VAR_1)
{
 struct pmap_invl_gen *VAR_2;

 VAR_2 = &VAR_1->td_md.md_invl_gen;
 VAR_2->gen = 0;
 VAR_2->next = (void *)VAR_0;
}
