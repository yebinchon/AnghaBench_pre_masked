
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, char *VAR_2, int VAR_3)
{
 char VAR_4[128+16];
 char *VAR_5 = FUNC_0(VAR_4);

 ((uint32_t *)VAR_5)[0] = 0x6A09E667;
 ((uint32_t *)VAR_5)[1] = 0xBB67AE85;
 ((uint32_t *)VAR_5)[2] = 0x3C6EF372;
 ((uint32_t *)VAR_5)[3] = 0xA54FF53A;
 ((uint32_t *)VAR_5)[4] = 0x510E527F;
 ((uint32_t *)VAR_5)[5] = 0x9B05688C;
 ((uint32_t *)VAR_5)[6] = 0x1F83D9AB;
 ((uint32_t *)VAR_5)[7] = 0x5BE0CD19;
 FUNC_1((uint32_t *)VAR_5, (uint32_t *)VAR_2,
     VAR_0 / sizeof(uint32_t));
}
