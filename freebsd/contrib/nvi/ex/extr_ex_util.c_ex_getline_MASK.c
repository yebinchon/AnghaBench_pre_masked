
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ibp; size_t ibp_len; } ;
typedef int SCR ;
typedef int FILE ;
typedef TYPE_1__ EX_PRIVATE ;


 int FUNC_0 (int *,char*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(SCR *VAR_3, FILE *VAR_4, size_t *VAR_5)
{
 EX_PRIVATE *VAR_6;
 size_t VAR_7;
 int VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_1(VAR_3);
 for (VAR_2 = 0, VAR_7 = 0, VAR_9 = VAR_6->ibp;;) {
  if (VAR_7 >= VAR_6->ibp_len) {
   FUNC_0(VAR_3, VAR_6->ibp, VAR_6->ibp_len, VAR_7 + 1);
   VAR_9 = VAR_6->ibp + VAR_7;
  }
  if ((VAR_8 = FUNC_4(VAR_4)) == VAR_1 && !FUNC_3(VAR_4)) {
   if (VAR_2 == VAR_0) {
    VAR_2 = 0;
    FUNC_2(VAR_4);
    continue;
   }
   return (1);
  }
  if (VAR_8 == VAR_1 || VAR_8 == '\n') {
   if (VAR_8 == VAR_1 && !VAR_7)
    return (1);
   *VAR_5 = VAR_7;
   return (0);
  }
  *VAR_9++ = VAR_8;
  ++VAR_7;
 }

}
