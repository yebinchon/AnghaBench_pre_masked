
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int *** sw; int z_sz; int y_sz; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct torus*,int,int,int,int ) ;
 int FUNC_2 (struct torus*,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (struct torus*,int,int,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static
bool FUNC_5(struct torus *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2 + 1, VAR_0->y_sz);
 int VAR_5 = FUNC_0(VAR_3 - 1, VAR_0->z_sz);
 int VAR_6 = FUNC_0(VAR_3 + 1, VAR_0->z_sz);

 if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3) &&
     FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6,
       FUNC_4(VAR_0->sw[VAR_1][VAR_4][VAR_3],
         VAR_0->sw[VAR_1][VAR_2][VAR_3],
         VAR_0->sw[VAR_1][VAR_2][VAR_5]))) {
  return 1;
 }
 FUNC_2(VAR_0, 0x650, VAR_1, VAR_2, VAR_3, VAR_1, VAR_2, VAR_3);

 if (FUNC_3(VAR_0, VAR_1, VAR_4, VAR_3) &&
     FUNC_1(VAR_0, VAR_1, VAR_4, VAR_6,
       FUNC_4(VAR_0->sw[VAR_1][VAR_2][VAR_3],
         VAR_0->sw[VAR_1][VAR_4][VAR_3],
         VAR_0->sw[VAR_1][VAR_4][VAR_5]))) {
  return 1;
 }
 FUNC_2(VAR_0, 0x650, VAR_1, VAR_2, VAR_3, VAR_1, VAR_4, VAR_3);
 return 0;
}
