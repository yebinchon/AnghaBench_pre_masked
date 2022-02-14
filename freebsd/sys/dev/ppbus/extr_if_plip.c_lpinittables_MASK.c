
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_12;

 FUNC_1(&VAR_7);
 if (VAR_10 == ((void*)0))
  VAR_10 = FUNC_0(4 * VAR_0, VAR_1, VAR_2);

 if (VAR_10 == ((void*)0)) {
  FUNC_2(&VAR_7);
  return (1);
 }

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_0(4 * VAR_0, VAR_1, VAR_2);

 if (VAR_5 == ((void*)0)) {
  FUNC_2(&VAR_7);
  return (1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_5[VAR_12] = (VAR_12 & 0xF0) >> 4;
  VAR_6[VAR_12] = 0x10 | (VAR_12 & 0x0F);
  VAR_3[VAR_12] = (VAR_12 & 0x78) << 1;
  VAR_4[VAR_12] = (VAR_12 & 0x78) >> 3;
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_10[VAR_12] = ((VAR_12 & 0x80) >> 3) | ((VAR_12 & 0x70) >> 4) | 0x08;
  VAR_11[VAR_12] = ((VAR_12 & 0x08) << 1) | (VAR_12 & 0x07);
  VAR_8[VAR_12] = ((~VAR_12) & 0x80) | ((VAR_12 & 0x38) << 1);
  VAR_9[VAR_12] = (((~VAR_12) & 0x80) >> 4) | ((VAR_12 & 0x38) >> 3);
 }
 FUNC_2(&VAR_7);

 return (0);
}
