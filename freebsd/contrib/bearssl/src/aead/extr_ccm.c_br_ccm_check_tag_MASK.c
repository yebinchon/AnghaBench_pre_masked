
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
typedef int br_ccm_context ;


 unsigned char FUNC_0 (unsigned char) ;
 size_t FUNC_1 (int *,unsigned char*) ;

uint32_t
FUNC_2(br_ccm_context *VAR_0, const void *VAR_1)
{
 unsigned char VAR_2[16];
 size_t VAR_3, VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 ++) {
  VAR_5 |= VAR_2[VAR_3] ^ ((const unsigned char *)VAR_1)[VAR_3];
 }
 return FUNC_0(VAR_5);
}
