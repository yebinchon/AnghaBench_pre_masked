
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_1 (int ,int) ;
 int* FUNC_2 (int*,int) ;
 int* FUNC_3 (int*,int) ;
 int FUNC_4 (int*) ;

vm_paddr_t
FUNC_5(vm_offset_t VAR_9)
{
 pt_entry_t *VAR_10, VAR_11;

 if (VAR_9 >= VAR_4 && VAR_9 < VAR_3)
  return (FUNC_0(VAR_9));
 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10 == ((void*)0))
  return (0);







 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 == 0)
  return (0);
 if ((VAR_11 & VAR_1) == VAR_0)
  return ((VAR_11 & ~VAR_2) | (VAR_9 & VAR_5));
 VAR_10 = FUNC_2(&VAR_11, VAR_9);
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 == 0)
  return (0);
 if ((VAR_11 & VAR_1) == VAR_0)
  return ((VAR_11 & ~VAR_2) | (VAR_9 & VAR_6));
 VAR_10 = FUNC_3(&VAR_11, VAR_9);
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 == 0)
  return (0);
 return ((VAR_11 & ~VAR_2) | (VAR_9 & VAR_7));
}
