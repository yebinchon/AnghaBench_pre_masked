
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct md_page {int dummy; } ;
typedef int * pv_entry_t ;
typedef int pmap_t ;
struct TYPE_5__ {int pv_list; } ;
struct TYPE_6__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_4 ;
 struct md_page* FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__,TYPE_2__*) ;
 int * FUNC_5 (struct md_page*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(pmap_t VAR_7, vm_offset_t VAR_8, vm_paddr_t VAR_9)
{
 struct md_page *VAR_10;
 pv_entry_t VAR_11;
 vm_offset_t VAR_12;
 vm_page_t VAR_13;

 FUNC_7(&VAR_6, VAR_3);
 FUNC_0((VAR_9 & VAR_1) == 0,
     ("pmap_pv_demote_pte1: pa is not 1mpage aligned"));





 VAR_10 = FUNC_3(VAR_9);
 VAR_8 = FUNC_6(VAR_8);
 VAR_11 = FUNC_5(VAR_10, VAR_7, VAR_8);
 FUNC_0(VAR_11 != ((void*)0), ("pmap_pv_demote_pte1: pv not found"));
 VAR_13 = FUNC_1(VAR_9);
 FUNC_2(&VAR_13->md.pv_list, VAR_11, VAR_5);

 VAR_12 = VAR_8 + VAR_2 - VAR_0;
 do {
  VAR_13++;
  FUNC_0((VAR_13->oflags & VAR_4) == 0,
      ("pmap_pv_demote_pte1: page %p is not managed", VAR_13));
  VAR_8 += VAR_0;
  FUNC_4(VAR_7, VAR_8, VAR_13);
 } while (VAR_8 < VAR_12);
}
