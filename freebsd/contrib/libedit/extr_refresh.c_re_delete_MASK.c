
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
    wchar_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 wchar_t *VAR_6, *VAR_7;

 if (VAR_5 <= 0)
  return;
 if (VAR_3 + VAR_5 >= VAR_4) {
  VAR_2[VAR_3] = '\0';
  return;
 }
 FUNC_0(1,
     (VAR_0, "re_delete() starting: %d at %d max %d, d == \"%s\"\n",
     VAR_5, VAR_3, VAR_4, FUNC_1(VAR_2, &VAR_1->el_scratch)));


 if (VAR_5 > 0) {
  VAR_7 = VAR_2 + VAR_3;
  VAR_6 = VAR_7 + VAR_5;
  while (VAR_6 < &VAR_2[VAR_4])
   *VAR_7++ = *VAR_6++;
  VAR_2[VAR_4] = '\0';
 }
 FUNC_0(1,
     (VAR_0, "re_delete() after delete: %d at %d max %d, d == \"%s\"\n",
     VAR_5, VAR_3, VAR_4, FUNC_1(VAR_2, &VAR_1->el_scratch)));
}
