
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pv_entry {int dummy; } ;
struct l2_dtable {int dummy; } ;
struct TYPE_2__ {int v_page_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* FUNC_3 (char*,int,int *,int *,int *,int *,int ,int) ;
 int FUNC_4 (void*,int) ;
 TYPE_1__ VAR_12 ;

void
FUNC_5(void)
{
 int VAR_13 = VAR_1;

 VAR_6 = FUNC_3("L2 Table", VAR_0, VAR_8,
     ((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_4 | VAR_3);
 VAR_5 = FUNC_3("L2 Table", sizeof(struct l2_dtable), ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_4 | VAR_3);




 VAR_11 = FUNC_3("PV ENTRY", sizeof (struct pv_entry), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_2, VAR_4 | VAR_3);
 FUNC_1("vm.pmap.shpgperproc", &VAR_13);
 VAR_10 = VAR_13 * VAR_7 + VAR_12.v_page_count;
 FUNC_4(VAR_11, VAR_10);
 VAR_9 = 9 * (VAR_10 / 10);




 FUNC_0(1, FUNC_2("pmap_init: done!\n"));
}
