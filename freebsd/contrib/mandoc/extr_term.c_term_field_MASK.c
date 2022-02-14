
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {size_t (* width ) (struct termp*,char) ;size_t viscol; TYPE_1__* tcol; int (* letter ) (struct termp*,int) ;int (* advance ) (struct termp*,size_t) ;} ;
struct TYPE_2__ {size_t col; int* buf; } ;




 size_t FUNC_0 (struct termp*,char) ;
 int FUNC_1 (struct termp*,size_t) ;
 int FUNC_2 (struct termp*,int) ;
 size_t FUNC_3 (struct termp*,char) ;
 size_t FUNC_4 (struct termp*,char) ;
 size_t FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(struct termp *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;

 VAR_6 = 0;
 for (VAR_5 = VAR_0->tcol->col; VAR_5 < VAR_2; VAR_5++) {






  switch (VAR_0->tcol->buf[VAR_5]) {
  case '\n':
  case 129:
   continue;
  case '\t':
   VAR_8 = FUNC_5(VAR_6);
   VAR_1 += VAR_8 - VAR_6;
   VAR_6 = VAR_8;
   continue;
  case ' ':
  case 128:
   VAR_7 = (*VAR_0->width)(VAR_0, ' ');
   VAR_1 += VAR_7;
   VAR_6 += VAR_7;
   continue;
  default:
   break;
  }






  if (VAR_1 > 0) {
   (*VAR_0->advance)(VAR_0, VAR_1);
   VAR_0->viscol += VAR_1;
   VAR_1 = 0;
  }



  (*VAR_0->letter)(VAR_0, VAR_0->tcol->buf[VAR_5]);
  if (VAR_0->tcol->buf[VAR_5] == '\b') {
   VAR_7 = (*VAR_0->width)(VAR_0, VAR_0->tcol->buf[VAR_5 - 1]);
   VAR_0->viscol -= VAR_7;
   VAR_6 -= VAR_7;
  } else {
   VAR_7 = (*VAR_0->width)(VAR_0, VAR_0->tcol->buf[VAR_5]);
   VAR_0->viscol += VAR_7;
   VAR_6 += VAR_7;
  }
 }
 VAR_0->tcol->col = VAR_2;
}
