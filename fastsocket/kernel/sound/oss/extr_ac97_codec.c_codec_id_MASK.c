
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char*,int,...) ;

__attribute__((used)) static char *FUNC_1(u16 VAR_1, u16 VAR_2, char *VAR_3)
{
 if(VAR_1&0x8080) {
  FUNC_0(VAR_3, VAR_0, "0x%04x:0x%04x", VAR_1, VAR_2);
 } else {
  VAR_3[0] = (VAR_1 >> 8);
  VAR_3[1] = (VAR_1 & 0xFF);
  VAR_3[2] = (VAR_2 >> 8);
  FUNC_0(VAR_3+3, VAR_0 - 3, "%d", VAR_2&0xFF);
 }
 return VAR_3;
}
