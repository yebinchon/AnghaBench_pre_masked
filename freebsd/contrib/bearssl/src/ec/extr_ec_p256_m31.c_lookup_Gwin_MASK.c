
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* z; int y; int x; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int,int) ;
 int** VAR_0 ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(p256_jacobian *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3[18];
 uint32_t VAR_4;
 size_t VAR_5;

 FUNC_2(VAR_3, 0, sizeof VAR_3);
 for (VAR_4 = 0; VAR_4 < 15; VAR_4 ++) {
  uint32_t VAR_6;

  VAR_6 = -FUNC_0(VAR_2, VAR_4 + 1);
  for (VAR_5 = 0; VAR_5 < 18; VAR_5 ++) {
   VAR_3[VAR_5] |= VAR_6 & VAR_0[VAR_4][VAR_5];
  }
 }
 FUNC_1(VAR_1->x, &VAR_3[0], sizeof VAR_1->x);
 FUNC_1(VAR_1->y, &VAR_3[9], sizeof VAR_1->y);
 FUNC_2(VAR_1->z, 0, sizeof VAR_1->z);
 VAR_1->z[0] = 1;
}
