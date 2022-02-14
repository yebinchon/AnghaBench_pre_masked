
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,char*,int const) ;

int FUNC_1(const u8 *VAR_0, int VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 const u8 *VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  FUNC_0(VAR_3, "%02x", *VAR_4);
  ++VAR_4;
  VAR_3 += 2;
 }

 return VAR_4 - VAR_0;
}
