
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void
FUNC_4(uint64_t VAR_4, uint64_t VAR_5)
{
 vm_offset_t VAR_6;





 if (VAR_4 == 0) {
  if (VAR_5 <= VAR_1)
   return;
  VAR_4 = VAR_1;
  VAR_5 -= VAR_1;
 } else if (VAR_4 > VAR_0) {

  return;
 }
 if ((VAR_4 + VAR_5) > (VAR_0 - 1024 * 1024)) {
  VAR_5 = VAR_0 - VAR_4 + 1;
  if (VAR_5 <= 1024 * 1024)
   return;
  VAR_5 -= 1024 * 1024;
 }





 VAR_6 = FUNC_2(VAR_4) - VAR_4;
 VAR_4 = FUNC_2(VAR_4);
 VAR_5 = FUNC_3(VAR_5 - VAR_6);

 if (VAR_5 > 0 && VAR_2 < FUNC_1(VAR_3))
  VAR_2 = FUNC_0(VAR_3, VAR_2, VAR_4, VAR_5, 0);
}
