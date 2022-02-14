
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uschar ;
struct TYPE_5__ {int initstat; int** gototab; int curstat; int** posns; scalar_t__* out; scalar_t__ reset; } ;
typedef TYPE_1__ fa ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int,size_t) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int*) ;

int FUNC_5(fa *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;
 uschar *VAR_7 = (uschar *) VAR_4;
 uschar *VAR_8;
 int VAR_9, VAR_10;


 if (VAR_3->reset) {
  VAR_3->initstat = VAR_5 = FUNC_2(VAR_3,1);
 } else {
  VAR_5 = VAR_3->initstat;
 }
 VAR_1 = (char *) VAR_7;
 VAR_2 = -1;
 do {
  VAR_8 = VAR_7;
  do {
   if (VAR_3->out[VAR_5])
    VAR_2 = VAR_8-VAR_7;

   if ((VAR_6 = VAR_3->gototab[VAR_5][*VAR_8]) != 0)
    VAR_5 = VAR_6;
   else
    VAR_5 = FUNC_1(VAR_3, VAR_5, *VAR_8);
   if (VAR_5 == 1) {
    if (VAR_2 >= 0) {
     VAR_1 = (char *) VAR_7;
     return(1);
    }
    else
     goto nextin;
   }
  } while (*VAR_8++ != 0);
  if (VAR_3->out[VAR_5])
   VAR_2 = VAR_8-VAR_7-1;
  if (VAR_2 >= 0) {
   VAR_1 = (char *) VAR_7;
   return(1);
  }
 nextin:
  VAR_5 = 2;
  if (VAR_3->reset) {
   for (VAR_9 = 2; VAR_9 <= VAR_3->curstat; VAR_9++)
    FUNC_4(VAR_3->posns[VAR_9]);
   VAR_10 = *VAR_3->posns[0];
   if ((VAR_3->posns[2] = (int *) FUNC_0(VAR_10+1, sizeof(int))) == ((void*)0))
    FUNC_3("out of space in pmatch");
   for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++)
    (VAR_3->posns[2])[VAR_9] = (VAR_3->posns[0])[VAR_9];
   VAR_3->initstat = VAR_3->curstat = 2;
   VAR_3->out[2] = VAR_3->out[0];
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    VAR_3->gototab[2][VAR_9] = 0;
  }
 } while (*VAR_7++ != 0);
 return (0);
}
