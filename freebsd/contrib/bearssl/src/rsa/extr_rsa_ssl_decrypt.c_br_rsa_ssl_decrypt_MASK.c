
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;
typedef int (* br_rsa_private ) (unsigned char*,TYPE_1__ const*) ;


 int FUNC_0 (unsigned char,int) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

uint32_t
FUNC_3(br_rsa_private VAR_0, const br_rsa_private_key *VAR_1,
 unsigned char *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4;
 size_t VAR_5;





 if (VAR_3 < 59 || VAR_3 != (VAR_1->n_bitlen + 7) >> 3) {
  return 0;
 }
 VAR_4 = VAR_0(VAR_2, VAR_1);

 VAR_4 &= FUNC_0(VAR_2[0], 0x00);
 VAR_4 &= FUNC_0(VAR_2[1], 0x02);
 for (VAR_5 = 2; VAR_5 < (VAR_3 - 49); VAR_5 ++) {
  VAR_4 &= FUNC_1(VAR_2[VAR_5], 0);
 }
 VAR_4 &= FUNC_0(VAR_2[VAR_3 - 49], 0x00);
 FUNC_2(VAR_2, VAR_2 + VAR_3 - 48, 48);
 return VAR_4;
}
