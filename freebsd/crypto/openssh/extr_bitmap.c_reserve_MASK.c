
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bitmap {size_t top; size_t len; int * d; } ;
typedef int BITMAP_WTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,size_t,size_t,int ) ;

__attribute__((used)) static int
FUNC_1(struct bitmap *VAR_3, u_int VAR_4)
{
 BITMAP_WTYPE *VAR_5;
 size_t VAR_6;

 if (VAR_3->top >= VAR_3->len || VAR_4 > VAR_2)
  return -1;
 VAR_6 = (VAR_4 / VAR_0) + 1;
 if (VAR_3->len < VAR_6) {
  if ((VAR_5 = FUNC_0(VAR_3->d, VAR_3->len,
      VAR_6, VAR_1)) == ((void*)0))
   return -1;
  VAR_3->d = VAR_5;
  VAR_3->len = VAR_6;
 }
 return 0;
}
