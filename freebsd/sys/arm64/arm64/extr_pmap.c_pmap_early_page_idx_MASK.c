
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef size_t u_int ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static pt_entry_t *
FUNC_2(vm_offset_t VAR_5, vm_offset_t VAR_6, u_int *VAR_7,
    u_int *VAR_8)
{
 pt_entry_t *VAR_9;
 pd_entry_t *VAR_10;

 VAR_10 = (pd_entry_t *)VAR_5;
 *VAR_7 = (VAR_6 >> VAR_1) & VAR_3;


 FUNC_0((VAR_10[*VAR_7] & VAR_0) == VAR_2,
    ("Invalid bootstrap L1 table"));

 VAR_9 = (pt_entry_t *)VAR_4;
 *VAR_8 = FUNC_1(VAR_6);

 return (VAR_9);
}
