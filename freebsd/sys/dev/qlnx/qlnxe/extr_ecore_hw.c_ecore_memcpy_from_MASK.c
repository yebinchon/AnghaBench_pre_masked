
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef scalar_t__ osal_size_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,void*,int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,void*,int ,scalar_t__,int) ;

void FUNC_2(struct ecore_hwfn *VAR_1,
         struct ecore_ptt *VAR_2,
         void *VAR_3, u32 VAR_4, osal_size_t VAR_5)
{
 FUNC_0(VAR_1, VAR_0,
     "hw_addr 0x%x, dest %p hw_addr 0x%x, size %lu\n",
     VAR_4, VAR_3, VAR_4, (unsigned long) VAR_5);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
}
