
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_7__ {int wired_count; int resident_count; } ;
struct TYPE_8__ {TYPE_1__ pm_stats; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,struct spglist*) ;
 int FUNC_6 (int*) ;
 int VAR_11 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(pmap_t VAR_12, pt_entry_t *VAR_13, vm_offset_t VAR_14,
    struct spglist *VAR_15)
{
 pt_entry_t VAR_16;
 vm_page_t VAR_17;

 FUNC_7(&VAR_11, VAR_9);
 FUNC_2(VAR_12, VAR_0);
 VAR_16 = FUNC_6(VAR_13);
 FUNC_0(VAR_16 != 0,
     ("pmap_remove_pte: pmap %p va %x zero pte", VAR_12, VAR_14));
 if (VAR_16 & VAR_8)
  VAR_12->pm_stats.wired_count -= 1;




 if (VAR_16 & VAR_4)
  FUNC_3(VAR_10, VAR_14);
 VAR_12->pm_stats.resident_count -= 1;
 if (VAR_16 & VAR_6) {
  VAR_17 = FUNC_1(VAR_16 & VAR_3);
  if ((VAR_16 & (VAR_5 | VAR_7)) == (VAR_5 | VAR_7))
   FUNC_9(VAR_17);
  if (VAR_16 & VAR_2)
   FUNC_8(VAR_17, VAR_1);
  FUNC_4(VAR_12, VAR_17, VAR_14);
 }
 return (FUNC_5(VAR_12, VAR_14, VAR_15));
}
