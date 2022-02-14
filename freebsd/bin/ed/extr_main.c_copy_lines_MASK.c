
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* t; } ;
typedef TYPE_1__ undo_t ;
struct TYPE_9__ {struct TYPE_9__* q_forw; } ;
typedef TYPE_2__ line_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (int ,int,int) ;
 int VAR_5 ;

int
FUNC_6(long VAR_6)
{
 line_t *VAR_7, *VAR_8 = FUNC_4(VAR_3);
 undo_t *VAR_9 = ((void*)0);
 long VAR_10 = VAR_5 - VAR_3 + 1;
 long VAR_11 = 0;

 VAR_2 = VAR_6;
 if (VAR_3 <= VAR_6 && VAR_6 < VAR_5) {
  VAR_10 = VAR_6 - VAR_3 + 1;
  VAR_11 = VAR_5 - VAR_6;
 }
 for (; VAR_10 > 0; VAR_10=VAR_11, VAR_11=0, VAR_8 = FUNC_4(VAR_2 + 1))
  for (; VAR_10-- > 0; VAR_8 = VAR_8->q_forw) {
   FUNC_1();
   if ((VAR_7 = FUNC_3(VAR_8)) == ((void*)0)) {
    FUNC_0();
    return VAR_0;
   }
   FUNC_2(VAR_7);
   if (VAR_9)
    VAR_9->t = VAR_7;
   else if ((VAR_9 = FUNC_5(VAR_1, VAR_2,
       VAR_2)) == ((void*)0)) {
    FUNC_0();
    return VAR_0;
   }
   VAR_4 = 1;
   FUNC_0();
  }
 return 0;
}
