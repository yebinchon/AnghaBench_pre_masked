
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_3(uint32_t VAR_0)
{
 uint32_t VAR_1, VAR_2;

 VAR_1 = FUNC_2(VAR_0, 0);
 VAR_2 = FUNC_0(VAR_0, 0xFFFF); VAR_0 = FUNC_1(VAR_2, VAR_0 >> 16, VAR_0); VAR_1 += VAR_2 << 4;
 VAR_2 = FUNC_0(VAR_0, 0x00FF); VAR_0 = FUNC_1(VAR_2, VAR_0 >> 8, VAR_0); VAR_1 += VAR_2 << 3;
 VAR_2 = FUNC_0(VAR_0, 0x000F); VAR_0 = FUNC_1(VAR_2, VAR_0 >> 4, VAR_0); VAR_1 += VAR_2 << 2;
 VAR_2 = FUNC_0(VAR_0, 0x0003); VAR_0 = FUNC_1(VAR_2, VAR_0 >> 2, VAR_0); VAR_1 += VAR_2 << 1;
 VAR_1 += FUNC_0(VAR_0, 0x0001);
 return VAR_1;
}
