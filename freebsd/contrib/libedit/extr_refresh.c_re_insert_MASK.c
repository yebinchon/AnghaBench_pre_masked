
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_3__ {int el_scratch; } ;
typedef TYPE_1__ EditLine ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void

FUNC_2(EditLine *VAR_1 __attribute__((__unused__)),
    wchar_t *VAR_2, int VAR_3, int VAR_4, wchar_t *VAR_5, int VAR_6)
{
 wchar_t *VAR_7, *VAR_8;

 if (VAR_6 <= 0)
  return;
 if (VAR_6 > VAR_4 - VAR_3)
  VAR_6 = VAR_4 - VAR_3;

 FUNC_0(1,
     (VAR_0, "re_insert() starting: %d at %d max %d, d == \"%s\"\n",
     VAR_6, VAR_3, VAR_4, FUNC_1(VAR_2, &VAR_1->el_scratch)));
 FUNC_0(1, (VAR_0, "s == \"%s\"\n", FUNC_1(VAR_5,
     &VAR_1->el_scratch)));


 if (VAR_6 > 0) {
  VAR_8 = VAR_2 + VAR_4 - 1;
  VAR_7 = VAR_8 - VAR_6;
  while (VAR_7 >= &VAR_2[VAR_3])
   *VAR_8-- = *VAR_7--;
  VAR_2[VAR_4] = '\0';
 }

 FUNC_0(1, (VAR_0,
  "re_insert() after insert: %d at %d max %d, d == \"%s\"\n",
  VAR_6, VAR_3, VAR_4, FUNC_1(VAR_2, &VAR_1->el_scratch)));
 FUNC_0(1, (VAR_0, "s == \"%s\"\n", FUNC_1(VAR_5,
  &VAR_1->el_scratch)));


 for (VAR_7 = VAR_2 + VAR_3; (VAR_7 < VAR_2 + VAR_4) && (VAR_6 > 0); VAR_6--)
  *VAR_7++ = *VAR_5++;
}
