
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {size_t (* width ) (struct termp*,char) ;TYPE_1__* tcol; } ;
struct TYPE_2__ {size_t col; size_t lastcol; int* buf; } ;





 int FUNC_0 () ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct termp*,char) ;
 size_t FUNC_3 (struct termp*,char) ;
 size_t FUNC_4 (struct termp*,char) ;
 size_t FUNC_5 (struct termp*,char) ;
 size_t FUNC_6 (size_t) ;

__attribute__((used)) static void
FUNC_7(struct termp *VAR_0, size_t *VAR_1, size_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;
 int VAR_8;

 *VAR_1 = *VAR_2 = VAR_5 = 0;
 VAR_7 = VAR_8 = 0;
 for (VAR_4 = VAR_0->tcol->col; VAR_4 < VAR_0->tcol->lastcol; VAR_4++) {
  switch (VAR_0->tcol->buf[VAR_4]) {
  case '\b':
   FUNC_1(VAR_4 > 0);
   VAR_5 -= (*VAR_0->width)(VAR_0, VAR_0->tcol->buf[VAR_4 - 1]);
   continue;

  case '\t':
  case ' ':
  case 130:
   switch (VAR_0->tcol->buf[VAR_4]) {
   case '\t':
    VAR_6 = FUNC_6(VAR_5);
    break;
   case ' ':
    VAR_6 = VAR_5 + (*VAR_0->width)(VAR_0, ' ');
    break;
   case 130:
    VAR_6 = VAR_5;
    break;
   default:
    FUNC_0();
   }

   if (VAR_7 || VAR_6 > VAR_3)
    break;
   if (VAR_8) {
    *VAR_1 = VAR_4;
    *VAR_2 = VAR_5;
    VAR_8 = 0;
   }
   VAR_5 = VAR_6;
   continue;

  case '\n':
   VAR_7 = 1;
   continue;

  case 129:
   VAR_8 = 1;






   VAR_0->tcol->buf[VAR_4] = '-';
   VAR_5 += (*VAR_0->width)(VAR_0, '-');
   if (VAR_5 > VAR_3) {
    VAR_4++;
    break;
   }
   *VAR_1 = VAR_4 + 1;
   *VAR_2 = VAR_5;
   continue;

  case 128:
   VAR_0->tcol->buf[VAR_4] = ' ';

  default:
   VAR_8 = 1;
   VAR_5 += (*VAR_0->width)(VAR_0, VAR_0->tcol->buf[VAR_4]);
   if (VAR_5 > VAR_3 && *VAR_1 > 0)
    return;
   continue;
  }
  break;
 }







 if (VAR_8 && (VAR_5 <= VAR_3 || *VAR_1 == 0)) {
  *VAR_1 = VAR_4;
  *VAR_2 = VAR_5;
 }
}
