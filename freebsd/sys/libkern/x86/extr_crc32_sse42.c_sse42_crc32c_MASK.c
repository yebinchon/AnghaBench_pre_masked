
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int,unsigned char const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;

uint32_t
FUNC_4(uint32_t VAR_6, const unsigned char *VAR_7, unsigned VAR_8)
{

 const size_t VAR_9 = 8;



 const unsigned char *VAR_10, *VAR_11;

 uint64_t VAR_12, VAR_13, VAR_14;




 VAR_10 = VAR_7;
 VAR_12 = VAR_6;


 while (VAR_8 && ((uintptr_t)VAR_10 & (VAR_9 - 1)) != 0) {
  VAR_12 = FUNC_2(VAR_12, *VAR_10);
  VAR_10++;
  VAR_8--;
 }
 VAR_6 = 0;
 while (VAR_8 >= VAR_1 * 3) {
  VAR_13 = 0;
  VAR_14 = 0;
  VAR_11 = VAR_10 + VAR_1;
  do {

   VAR_12 = FUNC_1(VAR_12, *(const uint64_t *)VAR_10);
   VAR_13 = FUNC_1(VAR_13,
       *(const uint64_t *)(VAR_10 + VAR_1));
   VAR_14 = FUNC_1(VAR_14,
       *(const uint64_t *)(VAR_10 + (VAR_1 * 2)));







   VAR_10 += VAR_9;
  } while (VAR_10 < VAR_11);
  VAR_6 = FUNC_3(VAR_5, VAR_6) ^ VAR_12;
  VAR_13 = FUNC_3(VAR_5, VAR_13);
  VAR_6 = FUNC_3(VAR_3, VAR_6) ^ VAR_13;
  VAR_12 = VAR_14;
  VAR_10 += VAR_1 * 2;
  VAR_8 -= VAR_1 * 3;
 }
 VAR_12 ^= VAR_6;


 VAR_11 = VAR_10 + (VAR_8 - (VAR_8 & (VAR_9 - 1)));
 while (VAR_10 < VAR_11) {

  VAR_12 = FUNC_1(VAR_12, *(const uint64_t *)VAR_10);



  VAR_10 += VAR_9;
 }
 VAR_8 &= (VAR_9 - 1);


 while (VAR_8) {
  VAR_12 = FUNC_2(VAR_12, *VAR_10);
  VAR_10++;
  VAR_8--;
 }

 return ((uint32_t)VAR_12);
}
