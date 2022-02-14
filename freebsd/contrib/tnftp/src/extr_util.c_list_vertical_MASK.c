
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char,int ) ;
 size_t FUNC_2 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;

void
FUNC_3(StringList *VAR_2)
{
 size_t VAR_3, VAR_4;
 size_t VAR_5, VAR_6;
 char *VAR_7;
 size_t VAR_8, VAR_9;

 VAR_9 = 0;

 for (VAR_3 = 0 ; VAR_3 < VAR_2->sl_cur ; VAR_3++) {
  VAR_8 = FUNC_2(VAR_2->sl_str[VAR_3]);
  if (VAR_8 > VAR_9)
   VAR_9 = VAR_8;
 }
 VAR_9 = (VAR_9 + 8) &~ 7;

 VAR_5 = VAR_1 / VAR_9;
 if (VAR_5 == 0)
  VAR_5 = 1;
 VAR_6 = (VAR_2->sl_cur + VAR_5 - 1) / VAR_5;
 for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   VAR_7 = VAR_2->sl_str[VAR_4 * VAR_6 + VAR_3];
   if (VAR_7)
    FUNC_0(VAR_7, VAR_0);
   if (VAR_4 * VAR_6 + VAR_3 + VAR_6 >= VAR_2->sl_cur) {
    FUNC_1('\n', VAR_0);
    break;
   }
   if (VAR_7) {
    VAR_8 = FUNC_2(VAR_7);
    while (VAR_8 < VAR_9) {
     VAR_8 = (VAR_8 + 8) &~ 7;
     (void)FUNC_1('\t', VAR_0);
    }
   }
  }
 }
}
