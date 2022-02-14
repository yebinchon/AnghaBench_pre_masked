
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned char* n; size_t nlen; int elen; int e; } ;
typedef TYPE_1__ br_rsa_public_key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,unsigned char const*,size_t) ;
 int FUNC_1 (int*,unsigned char*,size_t,int*) ;
 int FUNC_2 (unsigned char*,size_t,int*) ;
 int FUNC_3 (int*,int ,int ,int*,int,int*,int) ;
 int FUNC_4 (int) ;

uint32_t
FUNC_5(unsigned char *VAR_2, size_t VAR_3,
 const br_rsa_public_key *VAR_4)
{
 const unsigned char *VAR_5;
 size_t VAR_6;
 uint32_t VAR_7[1 + VAR_1];
 uint32_t *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;
 long VAR_12;
 uint32_t VAR_13, VAR_14;





 VAR_5 = VAR_4->n;
 VAR_6 = VAR_4->nlen;
 while (VAR_6 > 0 && *VAR_5 == 0) {
  VAR_5 ++;
  VAR_6 --;
 }
 if (VAR_6 == 0 || VAR_6 > (VAR_0 >> 3) || VAR_3 != VAR_6) {
  return 0;
 }
 VAR_12 = (long)VAR_6 << 3;
 VAR_11 = 1;
 while (VAR_12 > 0) {
  VAR_12 -= 31;
  VAR_11 ++;
 }



 VAR_11 += (VAR_11 & 1);






 VAR_8 = VAR_7;
 VAR_9 = VAR_8 + VAR_11;
 VAR_10 = VAR_8 + 2 * VAR_11;




 FUNC_0(VAR_8, VAR_5, VAR_6);
 VAR_13 = FUNC_4(VAR_8[1]);





 VAR_14 = VAR_13 & 1;




 VAR_14 &= FUNC_1(VAR_9, VAR_2, VAR_3, VAR_8);




 FUNC_3(VAR_9, VAR_4->e, VAR_4->elen, VAR_8, VAR_13, VAR_10, VAR_1 - 2 * VAR_11);




 FUNC_2(VAR_2, VAR_3, VAR_9);
 return VAR_14;
}
