
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {scalar_t__ top; scalar_t__ len; scalar_t__* d; } ;
typedef int BITMAP_WTYPE ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*) ;

size_t
FUNC_1(struct bitmap *VAR_1)
{
 size_t VAR_2;
 BITMAP_WTYPE VAR_3;

 FUNC_0(VAR_1);
 if (VAR_1->top >= VAR_1->len)
  return 0;
 if (VAR_1->len == 0 || (VAR_1->top == 0 && VAR_1->d[0] == 0))
  return 0;

 VAR_3 = VAR_1->d[VAR_1->top];
 VAR_2 = (VAR_1->top + 1) * VAR_0;
 while (!(VAR_3 & ((BITMAP_WTYPE)1 << (VAR_0 - 1)))) {
  VAR_3 <<= 1;
  VAR_2--;
 }
 return VAR_2;
}
