
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct ustr {unsigned int u_len; int * u_name; } ;
struct nls_table {int (* char2uni ) (int *,unsigned int,unsigned int*) ;} ;
typedef int dstring ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int *,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct nls_table *VAR_0, dstring *VAR_1, struct ustr *VAR_2,
   int VAR_3)
{
 int VAR_4;
 unsigned VAR_5, VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_1, 0, sizeof(dstring) * VAR_3);
 VAR_1[0] = 8;
 VAR_6 = 0xffU;

try_again:
 VAR_8 = 0U;
 for (VAR_5 = 0U; VAR_5 < VAR_2->u_len; VAR_5++) {
  VAR_4 = VAR_0->char2uni(&VAR_2->u_name[VAR_5], VAR_2->u_len - VAR_5, &VAR_7);
  if (!VAR_4)
   continue;

  if (VAR_4 < 0) {
   VAR_4 = 1;
   VAR_7 = '?';
  }

  if (VAR_7 > VAR_6) {
   VAR_6 = 0xffffU;
   VAR_1[0] = (uint8_t)0x10U;
   goto try_again;
  }

  if (VAR_6 == 0xffffU)
   VAR_1[++VAR_8] = (uint8_t)(VAR_7 >> 8);
  VAR_1[++VAR_8] = (uint8_t)(VAR_7 & 0xffU);
  VAR_5 += VAR_4 - 1;
 }

 VAR_1[VAR_3 - 1] = (uint8_t)VAR_8 + 1;
 return VAR_8 + 1;
}
