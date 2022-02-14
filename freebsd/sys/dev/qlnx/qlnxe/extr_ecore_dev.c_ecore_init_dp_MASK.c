
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef size_t u32 ;
struct ecore_hwfn {size_t dp_module; void* dp_ctx; void* dp_level; } ;
struct ecore_dev {size_t dp_module; struct ecore_hwfn* hwfns; void* dp_ctx; void* dp_level; } ;


 size_t VAR_0 ;

void FUNC_0(struct ecore_dev *VAR_1,
     u32 VAR_2,
     u8 VAR_3,
     void *VAR_4)
{
 u32 VAR_5;

 VAR_1->dp_level = VAR_3;
 VAR_1->dp_module = VAR_2;
 VAR_1->dp_ctx = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct ecore_hwfn *VAR_6 = &VAR_1->hwfns[VAR_5];

  VAR_6->dp_level = VAR_3;
  VAR_6->dp_module = VAR_2;
  VAR_6->dp_ctx = VAR_4;
 }
}
