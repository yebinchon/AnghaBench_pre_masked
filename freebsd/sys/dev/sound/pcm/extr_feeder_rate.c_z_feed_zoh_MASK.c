
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct z_info {int z_start; int channels; int bps; int * z_delay; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct z_info *VAR_0, uint8_t *VAR_1)
{





 uint32_t VAR_2;
 uint8_t *VAR_3;

 VAR_2 = VAR_0->channels * VAR_0->bps;
 VAR_3 = VAR_0->z_delay + (VAR_0->z_start * VAR_2);





 do {
  *VAR_1++ = *VAR_3++;
 } while (--VAR_2 != 0);

}
