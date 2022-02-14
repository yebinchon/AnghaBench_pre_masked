
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct runtime_sc {scalar_t__ x; scalar_t__ dx; scalar_t__ dy; scalar_t__ y; } ;
struct internal_sc {scalar_t__ dx; scalar_t__ dy; scalar_t__ sm1; scalar_t__ sm2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct runtime_sc*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct runtime_sc *VAR_1, struct internal_sc *VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_2->sm1 <= VAR_2->sm2) {

  VAR_5 = FUNC_1(VAR_1, VAR_3);
  if (VAR_5 < VAR_4)

   return;
  VAR_1->x = VAR_3;
  VAR_1->y = VAR_4;
  return;
 }







 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5 <= VAR_4) {

  return;
 }

 VAR_6 = FUNC_1(VAR_1, VAR_3 + VAR_2->dx);
 if (VAR_6 >= VAR_4 + VAR_2->dy) {

  VAR_1->x = VAR_3;
  VAR_1->y = VAR_4;
  VAR_1->dx = VAR_2->dx;
  VAR_1->dy = VAR_2->dy;
  return;
 }







 VAR_7 = (VAR_5 - VAR_4) << VAR_0;
 VAR_9 = VAR_2->sm1 - VAR_2->sm2;
 FUNC_0(VAR_7, VAR_9);




 if (VAR_1->x + VAR_1->dx > VAR_3)
  VAR_7 += VAR_1->x + VAR_1->dx - VAR_3;
 VAR_8 = FUNC_2(VAR_7, VAR_2->sm1);

 VAR_1->x = VAR_3;
 VAR_1->y = VAR_4;
 VAR_1->dx = VAR_7;
 VAR_1->dy = VAR_8;
 return;
}
