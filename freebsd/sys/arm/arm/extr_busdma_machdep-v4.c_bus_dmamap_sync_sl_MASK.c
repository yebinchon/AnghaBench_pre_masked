
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct sync_list {scalar_t__ vaddr; scalar_t__ pages; scalar_t__ datacount; scalar_t__ dataoffs; } ;
typedef int bus_dmasync_op_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct sync_list *VAR_0, bus_dmasync_op_t VAR_1,
    int VAR_2)
{
 vm_offset_t VAR_3;
 vm_page_t VAR_4;
 size_t VAR_5;

 if (VAR_0->vaddr != 0) {
  FUNC_3(VAR_0->vaddr, VAR_0->datacount, VAR_1, VAR_2);
  return;
 }

 VAR_3 = 0;
 VAR_5 = FUNC_2(FUNC_7(VAR_0->dataoffs + VAR_0->datacount));

 for (VAR_4 = VAR_0->pages; VAR_4 != VAR_0->pages + VAR_5; ++VAR_4) {
  FUNC_0(FUNC_1(VAR_4) == FUNC_1(VAR_0->pages) +
      FUNC_6(VAR_4 - VAR_0->pages),
      ("unexpected vm_page_t phys: 0x%08x != 0x%08x",
      FUNC_1(VAR_4), FUNC_1(VAR_0->pages) +
      FUNC_6(VAR_4 - VAR_0->pages)));
  VAR_3 = FUNC_4(VAR_4);
  FUNC_5(VAR_3);
 }
}
