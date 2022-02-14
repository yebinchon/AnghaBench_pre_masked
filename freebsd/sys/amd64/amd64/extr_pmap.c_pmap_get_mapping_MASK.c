
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int*,int ) ;
 int* FUNC_3 (int*,int ) ;
 int* FUNC_4 (int ,int ) ;
 int* FUNC_5 (int*,int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(pmap_t VAR_1, vm_offset_t VAR_2, uint64_t *VAR_3, int *VAR_4)
{
 pml4_entry_t *VAR_5;
 pdp_entry_t *VAR_6;
 pd_entry_t *VAR_7;
 pt_entry_t *VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_9 = FUNC_6(VAR_1);
 FUNC_0(VAR_1);

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 VAR_3[VAR_10++] = *VAR_5;
 if ((*VAR_5 & VAR_9) == 0)
  goto done;

 VAR_6 = FUNC_5(VAR_5, VAR_2);
 VAR_3[VAR_10++] = *VAR_6;
 if ((*VAR_6 & VAR_9) == 0 || (*VAR_6 & VAR_0) != 0)
  goto done;

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 VAR_3[VAR_10++] = *VAR_7;
 if ((*VAR_7 & VAR_9) == 0 || (*VAR_7 & VAR_0) != 0)
  goto done;

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 VAR_3[VAR_10++] = *VAR_8;

done:
 FUNC_1(VAR_1);
 *VAR_4 = VAR_10;
}
