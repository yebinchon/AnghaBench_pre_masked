
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int argc; TYPE_1__** argv; } ;
struct TYPE_8__ {int argsoff; int * argv; TYPE_1__** args; } ;
struct TYPE_7__ {size_t len; int* bp; } ;
typedef int SCR ;
typedef TYPE_2__ EX_PRIVATE ;
typedef TYPE_3__ EXCMD ;
typedef int CHAR_T ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,char*,size_t,int ) ;
 int FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 size_t VAR_0 ;

int
FUNC_5(SCR *VAR_1, EXCMD *VAR_2, CHAR_T *VAR_3, size_t VAR_4)
{
 EX_PRIVATE *VAR_5;
 size_t VAR_6;
 int VAR_7, VAR_8;
 CHAR_T *VAR_9, *VAR_10;

 for (VAR_5 = FUNC_0(VAR_1); VAR_4 > 0; ++VAR_5->argsoff) {

  for (; VAR_4 > 0; --VAR_4, ++VAR_3) {
   VAR_7 = *VAR_3;
   if (!FUNC_4(VAR_7))
    break;
  }
  if (VAR_4 == 0)
   break;
  for (VAR_9 = VAR_3, VAR_6 = 0; VAR_4 > 0; ++VAR_3, --VAR_4, ++VAR_6) {
   VAR_7 = *VAR_3;
   if (FUNC_1(VAR_1, VAR_2, VAR_7) && VAR_4 > 1) {
    ++VAR_3;
    --VAR_4;
   } else if (FUNC_4(VAR_7))
    break;
  }
  FUNC_3(VAR_1, VAR_6);
  VAR_8 = VAR_5->argsoff;
  VAR_5->args[VAR_8]->len = VAR_6;
  for (VAR_10 = VAR_5->args[VAR_8]->bp; VAR_6 > 0; --VAR_6, *VAR_10++ = *VAR_9++)
   if (FUNC_1(VAR_1, VAR_2, *VAR_9))
    ++VAR_9;
  *VAR_10 = '\0';
 }
 VAR_2->argv = VAR_5->args;
 VAR_2->argc = VAR_5->argsoff;





 return (0);
}
