
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ pt_entry_t ;
typedef int pmap_t ;
typedef scalar_t__ pd_entry_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (int ,int ) ;
 scalar_t__* FUNC_3 (scalar_t__*,int ) ;

boolean_t
FUNC_4(pmap_t VAR_1, vm_offset_t VAR_2)
{
 pd_entry_t *VAR_3;
 pt_entry_t *VAR_4;
 boolean_t VAR_5;

 VAR_5 = VAR_0;
 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0) && *VAR_3 != 0) {
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  VAR_5 = (*VAR_4 == 0);
 }
 FUNC_1(VAR_1);
 return (VAR_5);
}
