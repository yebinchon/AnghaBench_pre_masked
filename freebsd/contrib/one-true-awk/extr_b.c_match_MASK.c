
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uschar ;
struct TYPE_5__ {int initstat; int** gototab; scalar_t__* out; scalar_t__ reset; } ;
typedef TYPE_1__ fa ;


 int FUNC_0 (TYPE_1__*,int,size_t) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(fa *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 uschar *VAR_4 = (uschar *) VAR_1;

 VAR_2 = VAR_0->reset ? FUNC_1(VAR_0,0) : VAR_0->initstat;
 if (VAR_0->out[VAR_2])
  return(1);
 do {

  if ((VAR_3 = VAR_0->gototab[VAR_2][*VAR_4]) != 0)
   VAR_2 = VAR_3;
  else
   VAR_2 = FUNC_0(VAR_0, VAR_2, *VAR_4);
  if (VAR_0->out[VAR_2])
   return(1);
 } while (*VAR_4++ != 0);
 return(0);
}
