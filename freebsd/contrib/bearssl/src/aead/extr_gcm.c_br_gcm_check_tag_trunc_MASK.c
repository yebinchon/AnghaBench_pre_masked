
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_gcm_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char*) ;

uint32_t
FUNC_2(br_gcm_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned char VAR_3[16];
 size_t VAR_4;
 int VAR_5;

 FUNC_1(VAR_0, VAR_3);
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 ++) {
  VAR_5 |= VAR_3[VAR_4] ^ ((const unsigned char *)VAR_1)[VAR_4];
 }
 return FUNC_0(VAR_5);
}
