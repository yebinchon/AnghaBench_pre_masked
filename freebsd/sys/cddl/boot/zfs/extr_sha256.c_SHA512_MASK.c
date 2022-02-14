
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int c64 ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*) ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_0, const void *VAR_1, uint64_t VAR_2, zio_cksum_t *VAR_3)
{
 uint64_t VAR_4[2];
 uint8_t VAR_5[256];
 unsigned VAR_6 = VAR_2 & 127;
 unsigned VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_2 - VAR_6; VAR_7 += 128)
  FUNC_1(VAR_0, (uint8_t *)VAR_1 + VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_5[VAR_8] = ((uint8_t *)VAR_1)[VAR_8+VAR_7];

 if (VAR_6 < 112) {
  for (VAR_5[VAR_6++] = 0x80; VAR_6 < 112; VAR_6++)
   VAR_5[VAR_6] = 0;
 } else {
  for (VAR_5[VAR_6++] = 0x80; VAR_6 < 240; VAR_6++)
   VAR_5[VAR_6] = 0;
 }

 VAR_4[0] = 0;
 VAR_4[1] = VAR_2 << 3;
 FUNC_0(VAR_5+VAR_6, VAR_4, sizeof (VAR_4));
 VAR_6 += sizeof (VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 128)
  FUNC_1(VAR_0, VAR_5 + VAR_7);


 FUNC_0((uint8_t *)VAR_3, VAR_0, sizeof (uint64_t) * 4);
}
