
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 device_t VAR_2 = VAR_1;
 uint8_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, 0x71);
 if (VAR_0)
  FUNC_0(VAR_2, "got interrupt, wdt status = %d\n", VAR_3 & 1);
 FUNC_2(VAR_2, 0x71, VAR_3 & ~((uint8_t)0x01));
}
