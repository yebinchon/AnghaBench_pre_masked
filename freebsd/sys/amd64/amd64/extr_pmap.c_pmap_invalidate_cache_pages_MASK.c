
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(vm_page_t *VAR_9, int VAR_10)
{
 vm_offset_t VAR_11, VAR_12;
 int VAR_13;
 bool VAR_14;

 VAR_14 = (VAR_7 & VAR_1) != 0;
 if (VAR_10 >= VAR_4 / VAR_3 ||
     ((VAR_6 & VAR_0) == 0 && !VAR_14))
  FUNC_6();
 else {
  if (VAR_14)
   FUNC_2();
  else if (VAR_8 != VAR_2)
   FUNC_5();
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   VAR_11 = FUNC_0(FUNC_1(VAR_9[VAR_13]));
   VAR_12 = VAR_11 + VAR_3;
   for (; VAR_11 < VAR_12; VAR_11 += VAR_5) {
    if (VAR_14)
     FUNC_4(VAR_11);
    else
     FUNC_3(VAR_11);
   }
  }
  if (VAR_14)
   FUNC_2();
  else if (VAR_8 != VAR_2)
   FUNC_5();
 }
}
