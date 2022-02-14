
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*,...) ;

__attribute__((used)) static int FUNC_3(char** VAR_0, size_t* VAR_1,
 uint8_t* VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 uint16_t VAR_5;
 if(!(VAR_3 == 0 || VAR_3 == 2)) {
  VAR_4 += FUNC_2(VAR_0, VAR_1, "malformed keepalive ");
  VAR_4 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  return VAR_4;
 }
 if(VAR_3 == 0 ) {
  VAR_4 += FUNC_2(VAR_0, VAR_1, "no timeout value (only valid for client option) ");
 } else {
  VAR_5 = FUNC_1(VAR_2);
  VAR_4 += FUNC_2(VAR_0, VAR_1, "timeout value in units of 100ms %u", (int)VAR_5);
 }
 return VAR_4;
}
