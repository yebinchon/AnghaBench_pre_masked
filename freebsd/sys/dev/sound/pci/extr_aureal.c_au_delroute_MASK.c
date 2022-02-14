
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {int* z; int* y; int* x; int routes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au_info*,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct au_info*,int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_3(struct au_info *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4=VAR_1->z[VAR_2];

 FUNC_1(VAR_1->routes, VAR_2, 0);
 VAR_1->z[VAR_2]=0x1f;
 VAR_3=FUNC_0(VAR_1, 0, VAR_0+(VAR_2<<2), 4);
 FUNC_2(VAR_1, 0, VAR_0+(VAR_1->y[VAR_2]<<2), VAR_3, 4);
 VAR_1->y[VAR_3 & 0x7f]=VAR_1->y[VAR_2];
 FUNC_2(VAR_1, 0, VAR_0+(VAR_2<<2), 0xfffffffe, 4);
 if (VAR_1->x[VAR_4] == VAR_2) VAR_1->x[VAR_4]=VAR_1->y[VAR_2];
 VAR_1->y[VAR_2]=0x7f;
}
