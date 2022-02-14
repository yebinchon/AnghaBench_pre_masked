
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
struct md_page {int pv_list; } ;
typedef int bitstr_t ;
struct TYPE_4__ {int pv_list; } ;
struct TYPE_3__ {int end; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (char*,scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 int * VAR_17 ;
 struct md_page* VAR_18 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__* VAR_23 ;

void
FUNC_11(void)
{
 vm_size_t VAR_24;
 int VAR_25, VAR_26;




 VAR_9 = (FUNC_1(VAR_20) & VAR_8) != 0 ? 16 : 8;




 FUNC_3("vm.pmap.superpages_enabled", &VAR_19);
 if (VAR_19) {
  FUNC_0(VAR_2 > 1 && VAR_14[1] == 0,
      ("pmap_init: can't assign to pagesizes[1]"));
  VAR_14[1] = VAR_1;
 }





 VAR_13 = 1 << VAR_9;
 VAR_11 = (bitstr_t *)FUNC_7(FUNC_5(VAR_13),
     VAR_5 | VAR_6);
 for (VAR_25 = 0; VAR_25 < VAR_0; VAR_25++)
  FUNC_4(VAR_11, VAR_25);
 VAR_10 = VAR_0;
 FUNC_8(&VAR_12, "asid set", ((void*)0), VAR_4);




 FUNC_8(&VAR_15, "pmap pv chunk list", ((void*)0), VAR_3);




 for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++)
  FUNC_10(&VAR_17[VAR_25], "pmap pv list");




 VAR_26 = FUNC_6(VAR_23[VAR_22 - 1].end, VAR_1);




 VAR_24 = (vm_size_t)(VAR_26 * sizeof(struct md_page));
 VAR_24 = FUNC_9(VAR_24);
 VAR_18 = (struct md_page *)FUNC_7(VAR_24, VAR_5 | VAR_6);
 for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
  FUNC_2(&VAR_18[VAR_25].pv_list);
 FUNC_2(&VAR_16.pv_list);

 VAR_21 = 1;
}
