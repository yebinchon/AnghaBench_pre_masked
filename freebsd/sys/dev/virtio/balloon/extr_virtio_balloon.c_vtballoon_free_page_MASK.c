
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct vtballoon_softc {int vtballoon_current_npages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct vtballoon_softc *VAR_0, vm_page_t VAR_1)
{

 FUNC_0(VAR_1);
 VAR_0->vtballoon_current_npages--;
}
