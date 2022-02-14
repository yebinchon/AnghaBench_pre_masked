
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* q_back; struct TYPE_7__* q_forw; } ;
struct TYPE_6__ {int type; TYPE_4__* t; TYPE_4__* h; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;



 int FUNC_3 (TYPE_1__,TYPE_1__) ;

 long VAR_1 ;
 int FUNC_4 () ;
 long VAR_2 ;
 char* VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 TYPE_1__* VAR_9 ;

int
FUNC_6(void)
{
 long VAR_10;
 long VAR_11 = VAR_2;
 long VAR_12 = VAR_1;

 if (VAR_7 == -1 || VAR_6 == -1) {
  VAR_3 = "nothing to undo";
  return VAR_0;
 } else if (VAR_8)
  VAR_5 = 1;
 FUNC_5(0);
 FUNC_2();
 for (VAR_10 = VAR_8; VAR_10-- > 0;) {
  switch(VAR_9[VAR_10].type) {
  case 131:
   FUNC_0(VAR_9[VAR_10].h->q_back, VAR_9[VAR_10].t->q_forw);
   break;
  case 130:
   FUNC_0(VAR_9[VAR_10].h->q_back, VAR_9[VAR_10].h);
   FUNC_0(VAR_9[VAR_10].t, VAR_9[VAR_10].t->q_forw);
   break;
  case 129:
  case 128:
   FUNC_0(VAR_9[VAR_10 - 1].h, VAR_9[VAR_10].h->q_forw);
   FUNC_0(VAR_9[VAR_10].t->q_back, VAR_9[VAR_10 - 1].t);
   FUNC_0(VAR_9[VAR_10].h, VAR_9[VAR_10].t);
   VAR_10--;
   break;
  default:

   ;
  }
  VAR_9[VAR_10].type ^= 1;
 }

 for (VAR_10 = VAR_8; VAR_10-- > (VAR_8 + 1)/ 2;)
  FUNC_3(VAR_9[VAR_10], VAR_9[VAR_8 - 1 - VAR_10]);
 if (VAR_4)
  FUNC_4();
 VAR_2 = VAR_7, VAR_7 = VAR_11;
 VAR_1 = VAR_6, VAR_6 = VAR_12;
 FUNC_1();
 return 0;
}
