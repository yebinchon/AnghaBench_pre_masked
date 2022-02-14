
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 uint32_t VAR_4, *VAR_5, *VAR_6 = VAR_1;

 VAR_4 = FUNC_1(FUNC_0(VAR_2), VAR_0);
 VAR_4 = (VAR_4 & 0x3f800000) >> 23;

 VAR_5 = &VAR_6[0];
 if (VAR_4 >= 32 && VAR_4 < 64) {
  VAR_4 -= 32;
  VAR_5 = &VAR_6[1];
 } else if (VAR_4 >= 64 && VAR_4 < 96) {
  VAR_4 -= 64;
  VAR_5 = &VAR_6[2];
 } else if (VAR_4 >= 96) {
  VAR_4 -= 96;
  VAR_5 = &VAR_6[3];
 }
 *VAR_5 |= (1 << VAR_4);

 return (1);
}
