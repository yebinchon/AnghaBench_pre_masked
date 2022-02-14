
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(ldns_buffer *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint8_t VAR_3;

 if(VAR_2 < 2) {
  if(VAR_2 == 1)
   VAR_1 *= 10;
  FUNC_0(VAR_0, "0.%02ld", (long)VAR_1);
  return;
 }

 FUNC_0(VAR_0, "%d", (int)VAR_1);
 for(VAR_3=0; VAR_3<VAR_2-2; VAR_3++)
  FUNC_0(VAR_0, "0");
}
