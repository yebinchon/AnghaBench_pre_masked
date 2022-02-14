
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bitmap {size_t top; size_t len; size_t* d; } ;
typedef size_t BITMAP_WTYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct bitmap*) ;

void
FUNC_1(struct bitmap *VAR_3, u_int VAR_4)
{
 size_t VAR_5;

 if (VAR_3->top >= VAR_3->len || VAR_4 > VAR_1)
  return;
 VAR_5 = VAR_4 / VAR_0;
 if (VAR_5 > VAR_3->top)
  return;
 VAR_3->d[VAR_5] &= ~((BITMAP_WTYPE)1 << (VAR_4 & VAR_2));

 FUNC_0(VAR_3);
}
