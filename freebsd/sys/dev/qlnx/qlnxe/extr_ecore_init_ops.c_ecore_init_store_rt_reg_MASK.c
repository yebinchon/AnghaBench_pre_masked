
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t* init_val; int* b_valid; } ;
struct ecore_hwfn {TYPE_1__ rt_data; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,size_t,size_t,size_t) ;
 size_t VAR_0 ;

void FUNC_1(struct ecore_hwfn *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_1,
         "Avoid storing %u in rt_data at index %u since RUNTIME_ARRAY_SIZE is %u!\n",
         VAR_3, VAR_2, VAR_0);
  return;
 }

 VAR_1->rt_data.init_val[VAR_2] = VAR_3;
 VAR_1->rt_data.b_valid[VAR_2] = 1;
}
