
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pmap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

void
FUNC_4(pmap_t VAR_3, vm_offset_t VAR_4, vm_size_t VAR_5)
{

 if (VAR_4 >= VAR_2) {
  FUNC_1(VAR_4, VAR_5);
 } else {
  u_int VAR_6, VAR_7;
  vm_paddr_t VAR_8;


  VAR_7 = VAR_4 & VAR_0;
  VAR_6 = FUNC_2(VAR_1 - VAR_7, VAR_5);

  while (VAR_5 != 0) {

   VAR_8 = FUNC_3(VAR_3, VAR_4);
   if (VAR_8 != 0)
    FUNC_1(FUNC_0(VAR_8), VAR_6);


   VAR_5 -= VAR_6;
   VAR_4 += VAR_6;

   VAR_6 = FUNC_2(VAR_1, VAR_5);
  }
 }
}
