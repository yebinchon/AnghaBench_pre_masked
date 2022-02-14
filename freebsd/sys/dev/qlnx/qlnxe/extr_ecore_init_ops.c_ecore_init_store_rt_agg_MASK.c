
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* init_val; int* b_valid; } ;
struct ecore_hwfn {TYPE_1__ rt_data; } ;
typedef int osal_size_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,int,int) ;
 int VAR_0 ;

void FUNC_1(struct ecore_hwfn *VAR_1,
        u32 VAR_2, u32 *VAR_3,
        osal_size_t VAR_4)
{
 osal_size_t VAR_5;

 if ((VAR_2 + VAR_4 - 1) >= VAR_0) {
  FUNC_0(VAR_1,
         "Avoid storing values in rt_data at indices %u-%u since RUNTIME_ARRAY_SIZE is %u!\n",
         VAR_2, (u32)(VAR_2 + VAR_4 - 1),
         VAR_0);
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4 / sizeof(u32); VAR_5++) {
  VAR_1->rt_data.init_val[VAR_2 + VAR_5] = VAR_3[VAR_5];
  VAR_1->rt_data.b_valid[VAR_2 + VAR_5] = 1;

 }
}
