
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct vm_page {int dummy; } ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int* FUNC_6 (int ,scalar_t__) ;
 int* FUNC_7 (int*,scalar_t__) ;
 int FUNC_8 (long) ;
 scalar_t__ VAR_13 ;
 long VAR_14 ;
 int FUNC_9 (int,int) ;

void
FUNC_10(long VAR_15)
{
 pdp_entry_t *VAR_16;
 pd_entry_t *VAR_17, VAR_18;
 vm_offset_t VAR_19, VAR_20, VAR_21;
 vm_paddr_t VAR_22;
 long VAR_23;
 int VAR_24, VAR_25;

 VAR_14 = VAR_15;

 VAR_20 = VAR_4;
 VAR_21 = VAR_20 + VAR_15 * sizeof(struct vm_page);
 for (VAR_19 = VAR_20; VAR_19 < VAR_21; VAR_19 += VAR_0) {
  VAR_23 = VAR_9 + (VAR_19 - VAR_20) / sizeof(struct vm_page);
  VAR_24 = FUNC_1(FUNC_8(VAR_23));
  VAR_16 = FUNC_6(VAR_10, VAR_19);
  if ((*VAR_16 & VAR_8) == 0) {
   VAR_22 = FUNC_9(VAR_24, VAR_2);
   FUNC_2(VAR_22);
   FUNC_3((void *)FUNC_0(VAR_22));
   *VAR_16 = (pdp_entry_t)(VAR_22 | VAR_8 | VAR_7 |
       VAR_5 | VAR_6);
  }
  VAR_17 = FUNC_7(VAR_16, VAR_19);
  if ((*VAR_17 & VAR_8) != 0)
   FUNC_4("Unexpected pde");
  VAR_22 = FUNC_9(VAR_24, VAR_0);
  for (VAR_25 = 0; VAR_25 < VAR_1; VAR_25++)
   FUNC_2(VAR_22 + VAR_25 * VAR_2);
  VAR_18 = (pd_entry_t)(VAR_22 | VAR_8 | VAR_7 | VAR_5 |
      VAR_6 | VAR_3 | VAR_11 | VAR_12);
  FUNC_5(VAR_17, VAR_18);
 }
 VAR_13 = (vm_page_t)VAR_20;
}
