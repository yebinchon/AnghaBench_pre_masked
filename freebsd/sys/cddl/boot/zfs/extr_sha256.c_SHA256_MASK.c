
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int *,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, const void *VAR_1, uint64_t VAR_2, zio_cksum_t *VAR_3)
{
 uint8_t VAR_4[128];
 unsigned VAR_5 = VAR_2 & 63;
 unsigned VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_2 - VAR_5; VAR_6 += 64)
  FUNC_0(VAR_0, (uint8_t *)VAR_1 + VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_4[VAR_7] = ((uint8_t *)VAR_1)[VAR_7+VAR_6];

 for (VAR_4[VAR_5++] = 0x80; (VAR_5 & 63) != 56; VAR_5++)
  VAR_4[VAR_5] = 0;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  VAR_4[VAR_5++] = (VAR_2 << 3) >> (56 - 8 * VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += 64)
  FUNC_0(VAR_0, VAR_4 + VAR_6);

 FUNC_1(VAR_3,
     (uint64_t)VAR_0[0] << 32 | VAR_0[1],
     (uint64_t)VAR_0[2] << 32 | VAR_0[3],
     (uint64_t)VAR_0[4] << 32 | VAR_0[5],
     (uint64_t)VAR_0[6] << 32 | VAR_0[7]);
}
