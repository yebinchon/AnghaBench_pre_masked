
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct vtballoon_softc {int vtballoon_current_npages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int) ;

__attribute__((used)) static vm_page_t
FUNC_1(struct vtballoon_softc *VAR_2)
{
 vm_page_t VAR_3;

 VAR_3 = FUNC_0(((void*)0), 0, VAR_1 | VAR_0);
 if (VAR_3 != ((void*)0))
  VAR_2->vtballoon_current_npages++;

 return (VAR_3);
}
