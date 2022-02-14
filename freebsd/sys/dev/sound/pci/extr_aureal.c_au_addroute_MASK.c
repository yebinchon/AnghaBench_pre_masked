
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {int* x; int* y; int* z; int routes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct au_info*,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct au_info *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0x1099c+(VAR_2<<2);
 if (VAR_1->x[VAR_2] != VAR_2+0x67) VAR_5 = VAR_0+(VAR_1->x[VAR_2]<<2);

 FUNC_1(VAR_1, 0, VAR_0+(VAR_4<<2), 0xffffffff, 4);
  FUNC_1(VAR_1, 0, VAR_5, VAR_4 | (VAR_3<<7), 4);
 VAR_1->y[VAR_4]=VAR_1->x[VAR_2];
 VAR_1->x[VAR_2]=VAR_4;
 VAR_1->z[VAR_4]=VAR_2 & 0x000000ff;
 FUNC_0(VAR_1->routes, VAR_4, 1);
}
