
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

void
FUNC_6(vm_offset_t VAR_5, vm_size_t VAR_6)
{
 vm_offset_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;







 VAR_5 = FUNC_0(VAR_5 & VAR_4);

 VAR_7 = FUNC_4(VAR_5 + VAR_6);
 VAR_5 = FUNC_5(VAR_5);





 VAR_10 = VAR_3;
 VAR_11 = VAR_2;

 FUNC_3(VAR_5, (VAR_7 - VAR_5));

 while ((VAR_7 - VAR_5) >= (8 * 32)) {
  VAR_8 = VAR_5;
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++, VAR_8 += VAR_10)
   FUNC_2(VAR_8,
       VAR_1|VAR_0);
  VAR_5 += 8 * 32;
 }

 while (VAR_5 < VAR_7) {
  VAR_8 = VAR_5;
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++, VAR_8 += VAR_10)
   FUNC_1(VAR_8,
       VAR_1|VAR_0);
  VAR_5 += 32;
 }
}
