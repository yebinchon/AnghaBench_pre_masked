
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
typedef int pt2_entry_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;

vm_offset_t
FUNC_2(u_int VAR_2)
{
 u_int VAR_3;
 vm_offset_t VAR_4, VAR_5;
 pt2_entry_t *VAR_6;


 VAR_4 = VAR_5 = VAR_1;
 VAR_1 += VAR_2 * VAR_0;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_6 = FUNC_0(VAR_5);
  FUNC_1(VAR_6, 0);
  VAR_5 += VAR_0;
 }

 return (VAR_4);
}
