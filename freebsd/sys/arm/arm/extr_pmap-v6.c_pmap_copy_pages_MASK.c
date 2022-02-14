
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef size_t vm_offset_t ;
struct pcpu {char* pc_cmap1_addr; char* pc_cmap2_addr; int pc_cmap_lock; int * pc_cmap2_pte2p; int * pc_cmap1_pte2p; } ;
typedef int pt2_entry_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct pcpu* FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (size_t) ;
 int FUNC_14 (size_t) ;
 int FUNC_15 (int ) ;

void
FUNC_16(vm_page_t VAR_6[], vm_offset_t VAR_7, vm_page_t VAR_8[],
    vm_offset_t VAR_9, int VAR_10)
{
 pt2_entry_t *VAR_11, *VAR_12;
 vm_page_t VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 vm_offset_t VAR_17, VAR_18;
 struct pcpu *VAR_19;
 int VAR_20;

 FUNC_11();
 VAR_19 = FUNC_3();
 VAR_11 = VAR_19->pc_cmap1_pte2p;
 VAR_12 = VAR_19->pc_cmap2_pte2p;
 FUNC_5(&VAR_19->pc_cmap_lock);
 if (FUNC_9(VAR_11) != 0)
  FUNC_7("pmap_copy_pages: CMAP1 busy");
 if (FUNC_9(VAR_12) != 0)
  FUNC_7("pmap_copy_pages: CMAP2 busy");
 while (VAR_10 > 0) {
  VAR_13 = VAR_6[VAR_7 >> VAR_1];
  VAR_17 = VAR_7 & VAR_0;
  VAR_20 = FUNC_4(VAR_10, VAR_2 - VAR_17);
  VAR_14 = VAR_8[VAR_9 >> VAR_1];
  VAR_18 = VAR_9 & VAR_0;
  VAR_20 = FUNC_4(VAR_20, VAR_2 - VAR_18);
  FUNC_10(VAR_11, FUNC_0(FUNC_1(VAR_13),
      VAR_3 | VAR_5, FUNC_15(VAR_13)));
  FUNC_14((vm_offset_t)VAR_19->pc_cmap1_addr);
  FUNC_10(VAR_12, FUNC_0(FUNC_1(VAR_14),
      VAR_4, FUNC_15(VAR_14)));
  FUNC_14((vm_offset_t)VAR_19->pc_cmap2_addr);
  VAR_15 = VAR_19->pc_cmap1_addr + VAR_17;
  VAR_16 = VAR_19->pc_cmap2_addr + VAR_18;
  FUNC_2(VAR_15, VAR_16, VAR_20);
  VAR_7 += VAR_20;
  VAR_9 += VAR_20;
  VAR_10 -= VAR_20;
 }
 FUNC_8(VAR_11);
 FUNC_13((vm_offset_t)VAR_19->pc_cmap1_addr);
 FUNC_8(VAR_12);
 FUNC_13((vm_offset_t)VAR_19->pc_cmap2_addr);
 FUNC_12();
 FUNC_6(&VAR_19->pc_cmap_lock);
}
