
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmap_kernel_map_range {int attrs; } ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_1(struct pmap_kernel_map_range *VAR_7, pt_entry_t VAR_8)
{
 pt_entry_t VAR_9, VAR_10;

 VAR_10 = VAR_0 | VAR_3 | VAR_4 | VAR_1 | VAR_6;
 VAR_9 = (VAR_7->attrs ^ VAR_8) & VAR_10;
 if (VAR_9 == 0)
  return (1);
 if ((VAR_9 & ~VAR_2) == 0 &&
     FUNC_0(VAR_5, VAR_7->attrs, 1) ==
     FUNC_0(VAR_5, VAR_8, 1))
  return (1);
 return (0);
}
