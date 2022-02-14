
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
 int FUNC_1 (int) ;

int
FUNC_2(struct sockaddr_storage* VAR_0, int VAR_1,
 struct sockaddr_storage* VAR_2, int VAR_3, socklen_t VAR_4)
{
 int VAR_5 = (VAR_1<VAR_3)?VAR_1:VAR_3;
 int VAR_6, VAR_7;
 int VAR_8 = 0;
 uint8_t* VAR_9, *VAR_10;
 if(FUNC_0(VAR_0, VAR_4)) {
  VAR_9 = (uint8_t*)&((struct sockaddr_in6*)VAR_0)->sin6_addr;
  VAR_10 = (uint8_t*)&((struct sockaddr_in6*)VAR_2)->sin6_addr;
  VAR_7 = 16;
 } else {
  VAR_9 = (uint8_t*)&((struct sockaddr_in*)VAR_0)->sin_addr;
  VAR_10 = (uint8_t*)&((struct sockaddr_in*)VAR_2)->sin_addr;
  VAR_7 = 4;
 }

 for(VAR_6=0; VAR_6<VAR_7; VAR_6++) {
  if(VAR_9[VAR_6] == VAR_10[VAR_6]) {
   VAR_8 += 8;
  } else {
   uint8_t VAR_11 = VAR_9[VAR_6]^VAR_10[VAR_6];
   FUNC_1(VAR_11);
   while(!(VAR_11&0x80)) {
    VAR_8++;
    VAR_11<<=1;
   }
   break;
  }
 }
 if(VAR_8 > VAR_5) VAR_8 = VAR_5;
 return VAR_8;
}
