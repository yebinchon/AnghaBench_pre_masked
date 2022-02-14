
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int quad_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;

__attribute__((used)) static int
FUNC_1(u_char *VAR_4, int VAR_5, int VAR_6, quad_t VAR_7,
    quad_t VAR_8)
{

 if (VAR_6 == 0 || VAR_7 > VAR_3 || VAR_8 > VAR_3)
  return (VAR_2);

 VAR_4 += VAR_0 + VAR_5 * VAR_1;
 VAR_4[0] = 0;
 if (VAR_7 == 1) {




  VAR_4[1] = VAR_4[3] = 0;
  VAR_4[2] = 2;
 } else
  VAR_4[1] = VAR_4[2] = VAR_4[3] = 0xff;
 VAR_4[4] = VAR_6;
 VAR_4[5] = VAR_4[6] = VAR_4[7] = 0xff;
 FUNC_0(VAR_4 + 8, (uint32_t)VAR_7);
 FUNC_0(VAR_4 + 12, (uint32_t)(VAR_8 - VAR_7 + 1));
 return (0);
}
