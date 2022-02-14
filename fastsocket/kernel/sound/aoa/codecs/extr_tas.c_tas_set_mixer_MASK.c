
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas {int* mixer_l; int* mixer_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct tas*,int ,int,int*) ;

__attribute__((used)) static void FUNC_1(struct tas *VAR_3)
{
 u8 VAR_4[9];
 int VAR_5, VAR_6;
 u8 VAR_7;

 for (VAR_6=0;VAR_6<3;VAR_6++) {
  VAR_7 = VAR_3->mixer_l[VAR_6];
  if (VAR_7 > 177) VAR_7 = 177;
  VAR_5 = VAR_2[VAR_7];
  VAR_4[3*VAR_6+0] = VAR_5>>16;
  VAR_4[3*VAR_6+1] = VAR_5>>8;
  VAR_4[3*VAR_6+2] = VAR_5;
 }
 FUNC_0(VAR_3, VAR_0, 9, VAR_4);

 for (VAR_6=0;VAR_6<3;VAR_6++) {
  VAR_7 = VAR_3->mixer_r[VAR_6];
  if (VAR_7 > 177) VAR_7 = 177;
  VAR_5 = VAR_2[VAR_7];
  VAR_4[3*VAR_6+0] = VAR_5>>16;
  VAR_4[3*VAR_6+1] = VAR_5>>8;
  VAR_4[3*VAR_6+2] = VAR_5;
 }
 FUNC_0(VAR_3, VAR_1, 9, VAR_4);
}
