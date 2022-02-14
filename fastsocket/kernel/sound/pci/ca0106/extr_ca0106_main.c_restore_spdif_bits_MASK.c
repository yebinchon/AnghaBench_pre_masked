
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {scalar_t__* spdif_str_bits; scalar_t__* spdif_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ca0106*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_ca0106 *VAR_1, int VAR_2)
{
 if (VAR_1->spdif_str_bits[VAR_2] != VAR_1->spdif_bits[VAR_2]) {
  VAR_1->spdif_str_bits[VAR_2] = VAR_1->spdif_bits[VAR_2];
  FUNC_0(VAR_1, VAR_0 + VAR_2, 0,
         VAR_1->spdif_str_bits[VAR_2]);
 }
}
