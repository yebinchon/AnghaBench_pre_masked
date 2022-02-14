
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(
 int * VAR_0,
 int * VAR_1,
 int VAR_2
 )
{
 if (*VAR_1 >= VAR_2) {
  *VAR_0 += *VAR_1 / VAR_2;
  *VAR_1 %= VAR_2;
 } else if (*VAR_1 < 0) {
  --*VAR_0;
  *VAR_1 += VAR_2;
  if (*VAR_1 < 0) {
   *VAR_0 -= 1 + (-*VAR_1) / VAR_2;
   *VAR_1 = VAR_2 - (-*VAR_1) % VAR_2;
  }
 }
}
