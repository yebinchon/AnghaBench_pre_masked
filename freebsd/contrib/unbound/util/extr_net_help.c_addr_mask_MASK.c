
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;

void
FUNC_1(struct sockaddr_storage* VAR_0, socklen_t VAR_1, int VAR_2)
{
 uint8_t VAR_3[8] = {0x0, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe};
 int VAR_4, VAR_5;
 uint8_t* VAR_6;
 if(FUNC_0(VAR_0, VAR_1)) {
  VAR_6 = (uint8_t*)&((struct sockaddr_in6*)VAR_0)->sin6_addr;
  VAR_5 = 128;
 } else {
  VAR_6 = (uint8_t*)&((struct sockaddr_in*)VAR_0)->sin_addr;
  VAR_5 = 32;
 }
 if(VAR_2 >= VAR_5)
  return;
 for(VAR_4=VAR_2/8+1; VAR_4<VAR_5/8; VAR_4++) {
  VAR_6[VAR_4] = 0;
 }
 VAR_6[VAR_2/8] &= VAR_3[VAR_2&0x7];
}
