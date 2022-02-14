
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int **,scalar_t__**) ;

boolean_t
FUNC_2(pmap_t VAR_2, vm_offset_t VAR_3)
{
 pd_entry_t *VAR_4;
 pt_entry_t *VAR_5;

 if (!FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_5))
  return (VAR_0);
 FUNC_0(VAR_5 != ((void*)0), ("Valid mapping but no pte ?"));
 if (*VAR_5 == 0)
  return (VAR_1);
 return (VAR_0);
}
