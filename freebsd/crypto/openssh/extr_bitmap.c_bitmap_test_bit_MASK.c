
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bitmap {scalar_t__ top; scalar_t__ len; size_t* d; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(struct bitmap *VAR_2, u_int VAR_3)
{
 if (VAR_2->top >= VAR_2->len)
  return 0;
 if (VAR_2->len == 0 || (VAR_3 / VAR_0) > VAR_2->top)
  return 0;
 return (VAR_2->d[VAR_3 / VAR_0] >> (VAR_3 & VAR_1)) & 1;
}
