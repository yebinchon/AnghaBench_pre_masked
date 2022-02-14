
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, u_int VAR_5, int *VAR_6)
{
 device_t VAR_7 = VAR_4;
 uint64_t VAR_8;
 uint8_t VAR_9;


 if (VAR_5 != 0) {
  VAR_5 &= VAR_1;
  if (VAR_5 >= VAR_2)
   VAR_8 = (uint64_t)1 << (VAR_5 - VAR_2);
  else
   VAR_8 = 1;
  if (VAR_8 <= VAR_0) {
   VAR_9 = VAR_8;
   *VAR_6 = 0;
  } else {

   VAR_9 = 0;
  }
 } else {
  VAR_9 = 0;
 }




 FUNC_2(VAR_7, 0x73, VAR_9);
 if (FUNC_1(VAR_7, 0x73) != VAR_9)
  FUNC_2(VAR_7, 0x73, VAR_9);
}
