
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct in6_addr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char const*,struct in6_addr*) ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char* VAR_2, char** VAR_3)
{
 struct in6_addr VAR_4;

 const char* VAR_5 = "0123456789abcdef";
 char VAR_6[128];
 char *VAR_7;
 int VAR_8;
 if(FUNC_2(VAR_0, VAR_2, &VAR_4) <= 0) {
  return 0;
 }
 VAR_7 = VAR_6;
 for(VAR_8=15; VAR_8>=0; VAR_8--) {
  uint8_t VAR_9 = ((uint8_t*)&VAR_4)[VAR_8];
  *VAR_7++ = VAR_5[ (VAR_9&0x0f) ];
  *VAR_7++ = '.';
  *VAR_7++ = VAR_5[ (VAR_9&0xf0) >> 4 ];
  *VAR_7++ = '.';
 }
 FUNC_3(VAR_6+16*4, sizeof(VAR_6)-16*4, "ip6.arpa");
 *VAR_3 = FUNC_4(VAR_6);
 if(!*VAR_3) {
  FUNC_1(VAR_1, "error: out of memory\n");
  FUNC_0(1);
 }
 return 1;
}
