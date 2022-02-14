
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct TYPE_2__ {int prime_len; scalar_t__ ec; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_1 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct sae_data *VAR_2, const u8 **VAR_3,
       const u8 *VAR_4, const u8 **VAR_5,
       size_t *VAR_6)
{
 size_t VAR_7, VAR_8;
 const u8 *VAR_9;

 if (VAR_5)
  *VAR_5 = ((void*)0);
 if (VAR_6)
  *VAR_6 = 0;

 VAR_7 = (VAR_2->tmp->ec ? 3 : 2) * VAR_2->tmp->prime_len;
 if (VAR_7 >= (size_t) (VAR_4 - *VAR_3))
  return;
 VAR_8 = VAR_4 - (*VAR_3 + VAR_7);

 if (VAR_8 < VAR_1) {
  FUNC_2(VAR_0,
      "SAE: Too short optional data (%u octets) to include our Anti-Clogging Token",
      (unsigned int) VAR_8);
  return;
 }

 VAR_9 = *VAR_3 + VAR_7;
 if (FUNC_0(VAR_9, VAR_4)) {



  return;
 }

 VAR_9 += VAR_1;
 if (FUNC_0(VAR_9, VAR_4)) {


  VAR_8 -= 2 + VAR_9[1];
 }

 FUNC_1(VAR_0, "SAE: Anti-Clogging Token", *VAR_3, VAR_8);
 if (VAR_5)
  *VAR_5 = *VAR_3;
 if (VAR_6)
  *VAR_6 = VAR_8;
 *VAR_3 += VAR_8;
}
