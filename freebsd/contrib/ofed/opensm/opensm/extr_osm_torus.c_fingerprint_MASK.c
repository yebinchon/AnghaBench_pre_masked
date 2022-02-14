
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int x_sz; int y_sz; int z_sz; int *** sw; } ;


 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static
unsigned FUNC_2(struct torus *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 unsigned VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_0->x_sz > 1;
 VAR_9 = VAR_0->y_sz > 1;
 VAR_10 = VAR_0->z_sz > 1;

 VAR_5 = FUNC_0(VAR_1 + 1, VAR_0->x_sz);
 VAR_6 = FUNC_0(VAR_2 + 1, VAR_0->y_sz);
 VAR_7 = FUNC_0(VAR_3 + 1, VAR_0->z_sz);

 VAR_4 = FUNC_1(VAR_0->sw[VAR_1][VAR_2][VAR_3], 0, 0, 0);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_5][VAR_2][VAR_3], VAR_8, 0, 0);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_1][VAR_6][VAR_3], 0, VAR_9, 0);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_5][VAR_6][VAR_3], VAR_8, VAR_9, 0);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_1][VAR_2][VAR_7], 0, 0, VAR_10);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_5][VAR_2][VAR_7], VAR_8, 0, VAR_10);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_1][VAR_6][VAR_7], 0, VAR_9, VAR_10);
 VAR_4 |= FUNC_1(VAR_0->sw[VAR_5][VAR_6][VAR_7], VAR_8, VAR_9, VAR_10);

 VAR_4 |= VAR_8 << 8;
 VAR_4 |= VAR_9 << 9;
 VAR_4 |= VAR_10 << 10;

 return VAR_4;
}
