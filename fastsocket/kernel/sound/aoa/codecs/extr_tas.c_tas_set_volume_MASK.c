
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas {int cached_volume_l; int cached_volume_r; scalar_t__ mute_r; scalar_t__ mute_l; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct tas*,int ,int,int*) ;

__attribute__((used)) static void FUNC_1(struct tas *VAR_2)
{
 u8 VAR_3[6];
 int VAR_4;
 u8 VAR_5, VAR_6;

 VAR_5 = VAR_2->cached_volume_l;
 VAR_6 = VAR_2->cached_volume_r;

 if (VAR_5 > 177) VAR_5 = 177;
 if (VAR_6 > 177) VAR_6 = 177;

 if (VAR_2->mute_l) VAR_5 = 0;
 if (VAR_2->mute_r) VAR_6 = 0;







 VAR_4 = VAR_1[VAR_5];
 VAR_3[0] = VAR_4>>20;
 VAR_3[1] = VAR_4>>12;
 VAR_3[2] = VAR_4>>4;
 VAR_4 = VAR_1[VAR_6];
 VAR_3[3] = VAR_4>>20;
 VAR_3[4] = VAR_4>>12;
 VAR_3[5] = VAR_4>>4;
 FUNC_0(VAR_2, VAR_0, 6, VAR_3);
}
