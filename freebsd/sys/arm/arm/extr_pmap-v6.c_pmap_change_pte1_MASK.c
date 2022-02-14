
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int register_t ;
typedef int pt1_entry_t ;
typedef scalar_t__ pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(pmap_t VAR_4, pt1_entry_t *VAR_5, vm_offset_t VAR_6,
    pt1_entry_t VAR_7)
{

 if (VAR_4 == VAR_3) {
  FUNC_1(&VAR_2);
  FUNC_4(VAR_6, VAR_7);
  FUNC_2(&VAR_2);
 } else {
  register_t VAR_8;






  VAR_8 = FUNC_0(VAR_1 | VAR_0);
  FUNC_5(VAR_5);
  FUNC_3(VAR_4, VAR_6, VAR_7);
  FUNC_6(VAR_5, VAR_7);
  FUNC_7(VAR_8);
 }
}
