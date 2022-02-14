
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bitmap {size_t top; size_t* d; } ;
typedef size_t BITMAP_WTYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct bitmap*,size_t) ;

int
FUNC_1(struct bitmap *VAR_2, u_int VAR_3)
{
 int VAR_4;
 size_t VAR_5;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) != 0)
  return VAR_4;
 VAR_5 = VAR_3 / VAR_0;
 if (VAR_5 > VAR_2->top)
  VAR_2->top = VAR_5;
 VAR_2->d[VAR_5] |= (BITMAP_WTYPE)1 << (VAR_3 & VAR_1);
 return 0;
}
