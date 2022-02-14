
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_2(const u_char *VAR_1, u_char *VAR_2, int VAR_3)
{
 u_char VAR_4[128+16];
 u_char *VAR_5 = FUNC_0(VAR_4);

 ((uint32_t *)VAR_5)[0] = 0x67452301;
 ((uint32_t *)VAR_5)[1] = 0xEFCDAB89;
 ((uint32_t *)VAR_5)[2] = 0x98BADCFE;
 ((uint32_t *)VAR_5)[3] = 0x10325476;
 ((uint32_t *)VAR_5)[4] = 0xC3D2E1F0;
 FUNC_1((uint32_t *)VAR_5, (uint32_t *)VAR_2,
     VAR_0 / sizeof(uint32_t));
}
