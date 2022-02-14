
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int register_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(pmap_t VAR_3, pd_entry_t *VAR_4, pd_entry_t VAR_5,
    vm_offset_t VAR_6, vm_size_t VAR_7)
{
 register_t VAR_8;

 FUNC_0(VAR_3, VAR_1);






 VAR_8 = FUNC_2();






 FUNC_4(VAR_4, VAR_0);
 FUNC_5(VAR_3, VAR_6, VAR_6 + VAR_7);


 FUNC_6(VAR_4, VAR_5);
 FUNC_1(VAR_2);

 FUNC_3(VAR_8);
}
