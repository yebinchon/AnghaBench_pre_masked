
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct bitmap {size_t top; size_t* d; } ;
typedef size_t BITMAP_WTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct bitmap*,size_t) ;
 int FUNC_2 (struct bitmap*) ;

int
FUNC_3(struct bitmap *VAR_3, const void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 size_t VAR_7, VAR_8, VAR_9;
 const u_char *VAR_10 = (const u_char *)VAR_4;

 if (VAR_5 > VAR_2 / 8)
  return -1;
 if ((VAR_6 = FUNC_1(VAR_3, VAR_5 * 8)) != 0)
  return VAR_6;
 FUNC_0(VAR_3);
 if (VAR_5 == 0)
  return 0;
 VAR_3->top = VAR_8 = ((VAR_5 + (VAR_1 - 1)) / VAR_1) - 1;
 VAR_9 = ((VAR_5 + (VAR_1 - 1)) % VAR_1) * 8;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_3->d[VAR_8] |= (BITMAP_WTYPE)VAR_10[VAR_7] << VAR_9;
  if (VAR_9 == 0) {
   VAR_8--;
   VAR_9 = VAR_0 - 8;
  } else
   VAR_9 -= 8;
 }
 FUNC_2(VAR_3);
 return 0;
}
