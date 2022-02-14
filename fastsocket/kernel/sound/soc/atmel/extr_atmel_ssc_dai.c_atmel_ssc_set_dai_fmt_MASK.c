
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct atmel_ssc_info {unsigned int daifmt; } ;


 struct atmel_ssc_info* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_1,
  unsigned int VAR_2)
{
 struct atmel_ssc_info *VAR_3 = &VAR_0[VAR_1->id];

 VAR_3->daifmt = VAR_2;
 return 0;
}
