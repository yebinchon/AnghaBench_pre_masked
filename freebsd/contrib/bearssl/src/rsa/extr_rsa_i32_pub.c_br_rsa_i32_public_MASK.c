
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned char* n; size_t nlen; int elen; int e; } ;
typedef TYPE_1__ br_rsa_public_key ;


 int VAR_0 ;
 int FUNC_0 (int*,unsigned char const*,size_t) ;
 int FUNC_1 (int*,unsigned char*,size_t,int*) ;
 int FUNC_2 (unsigned char*,size_t,int*) ;
 int FUNC_3 (int*,int ,int ,int*,int,int*,int*) ;
 int FUNC_4 (int) ;

uint32_t
FUNC_5(unsigned char *VAR_1, size_t VAR_2,
 const br_rsa_public_key *VAR_3)
{
 const unsigned char *VAR_4;
 size_t VAR_5;
 uint32_t VAR_6[1 + (VAR_0 >> 5)];
 uint32_t VAR_7[1 + (VAR_0 >> 5)];
 uint32_t VAR_8[1 + (VAR_0 >> 5)];
 uint32_t VAR_9[1 + (VAR_0 >> 5)];
 uint32_t VAR_10, VAR_11;





 VAR_4 = VAR_3->n;
 VAR_5 = VAR_3->nlen;
 while (VAR_5 > 0 && *VAR_4 == 0) {
  VAR_4 ++;
  VAR_5 --;
 }
 if (VAR_5 == 0 || VAR_5 > (VAR_0 >> 3) || VAR_2 != VAR_5) {
  return 0;
 }
 FUNC_0(VAR_6, VAR_4, VAR_5);
 VAR_10 = FUNC_4(VAR_6[1]);





 VAR_11 = VAR_10 & 1;




 VAR_11 &= FUNC_1(VAR_7, VAR_1, VAR_2, VAR_6);




 FUNC_3(VAR_7, VAR_3->e, VAR_3->elen, VAR_6, VAR_10, VAR_8, VAR_9);




 FUNC_2(VAR_1, VAR_2, VAR_7);
 return VAR_11;
}
