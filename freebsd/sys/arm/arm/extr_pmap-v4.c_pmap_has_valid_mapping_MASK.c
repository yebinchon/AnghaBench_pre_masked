
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **,int**) ;

__attribute__((used)) static int
FUNC_1(pmap_t VAR_2, vm_offset_t VAR_3)
{
 pd_entry_t *VAR_4;
 pt_entry_t *VAR_5;

 if (FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5) &&
     VAR_5 && ((*VAR_5 & VAR_1) != VAR_0))
  return (1);

 return (0);
}
