
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_hash_class ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (unsigned char*,size_t,int const*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (int const*,unsigned char*,void const*,size_t) ;

uint32_t
FUNC_7(const br_hash_class *VAR_0,
 const void *VAR_1, size_t VAR_2,
 void *VAR_3, size_t *VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 unsigned char *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_3(VAR_0);
 VAR_6 = *VAR_4;
 VAR_8 = VAR_3;




 if (VAR_6 < ((VAR_7 << 1) + 2)) {
  return 0;
 }




 FUNC_4(VAR_8 + 1, VAR_7, VAR_0, VAR_8 + 1 + VAR_7, VAR_6 - VAR_7 - 1);
 FUNC_4(VAR_8 + 1 + VAR_7, VAR_6 - VAR_7 - 1, VAR_0, VAR_8 + 1, VAR_7);





 FUNC_6(VAR_0, VAR_8 + 1 + VAR_7, VAR_1, VAR_2);
 VAR_9 = 1 - ((VAR_8[0] + 0xFF) >> 8);
 VAR_10 = 0;
 VAR_11 = 0;
 for (VAR_5 = VAR_7 + 1; VAR_5 < VAR_6; VAR_5 ++) {
  uint32_t VAR_12, VAR_13;

  VAR_12 = VAR_8[VAR_5];




  VAR_13 = VAR_9 & ((VAR_12 + 0xFF) >> 8);
  VAR_10 |= VAR_13 & FUNC_0(VAR_12, 0x01);
  VAR_9 &= FUNC_2(VAR_13);
  VAR_11 += VAR_9;
 }




 VAR_10 &= FUNC_1(VAR_11, (uint32_t)VAR_7);





 if (VAR_10) {
  size_t VAR_14;

  VAR_14 = 2 + VAR_7 + VAR_11;
  VAR_6 -= VAR_14;
  FUNC_5(VAR_8, VAR_8 + VAR_14, VAR_6);
  *VAR_4 = VAR_6;
 }
 return VAR_10;
}
