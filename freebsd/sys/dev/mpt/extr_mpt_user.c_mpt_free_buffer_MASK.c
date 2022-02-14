
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_page_memory {int * vaddr; int tag; int map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct mpt_page_memory *VAR_0)
{

 if (VAR_0->vaddr == ((void*)0))
  return;
 FUNC_1(VAR_0->tag, VAR_0->map);
 FUNC_2(VAR_0->tag, VAR_0->vaddr, VAR_0->map);
 FUNC_0(VAR_0->tag);
 VAR_0->vaddr = ((void*)0);
}
