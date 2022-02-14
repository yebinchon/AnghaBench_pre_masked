
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct wmemstream {int len; int ** bufp; } ;
typedef int ssize_t ;
typedef int fpos_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct wmemstream*,int,int) ;
 int * FUNC_1 (int *,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct wmemstream *VAR_2, fpos_t VAR_3)
{
 wchar_t *VAR_4;
 ssize_t VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_0 / sizeof(wchar_t))
  VAR_5 = VAR_0 / sizeof(wchar_t) - 1;
 else
  VAR_5 = VAR_3;
 if (VAR_5 > VAR_2->len) {
  VAR_4 = FUNC_1(*VAR_2->bufp, VAR_5 + 1, sizeof(wchar_t));
  if (VAR_4 != ((void*)0)) {




   FUNC_2(VAR_4 + VAR_2->len + 1, 0, VAR_5 - VAR_2->len);
   *VAR_2->bufp = VAR_4;
   VAR_2->len = VAR_5;
   return (1);
  }
  return (0);
 }
 return (1);
}
