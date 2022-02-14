
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct bitmap {int top; int len; size_t* d; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct bitmap*) ;

int
FUNC_1(struct bitmap *VAR_1, void *VAR_2, size_t VAR_3)
{
 u_char *VAR_4 = (u_char *)VAR_2;
 size_t VAR_5, VAR_6, VAR_7, VAR_8 = FUNC_0(VAR_1);

 if (VAR_3 < VAR_8 || VAR_1->top >= VAR_1->len)
  return -1;
 if (VAR_3 > VAR_8)
  VAR_3 = VAR_8;

 for (VAR_5 = VAR_7 = 0; VAR_5 < VAR_1->top + 1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_7 >= VAR_3)
    break;
   VAR_4[VAR_8 - 1 - VAR_7++] = (VAR_1->d[VAR_5] >> (VAR_6 * 8)) & 0xff;
  }
 }
 return 0;
}
