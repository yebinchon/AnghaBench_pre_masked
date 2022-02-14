
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pattern_t ;
struct TYPE_5__ {int len; struct TYPE_5__* q_forw; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 char* VAR_1 ;
 long VAR_2 ;
 TYPE_1__* FUNC_2 (long) ;
 int * FUNC_3 () ;
 char* FUNC_4 (TYPE_1__*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,char*,int ,int *,int ) ;
 long VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

int
FUNC_7(int VAR_6)
{
 pattern_t *VAR_7;
 line_t *VAR_8;
 long VAR_9;
 char *VAR_10;
 char VAR_11;

 if ((VAR_11 = *VAR_3) == ' ' || VAR_11 == '\n') {
  VAR_1 = "invalid pattern delimiter";
  return VAR_0;
 } else if ((VAR_7 = FUNC_3()) == ((void*)0))
  return VAR_0;
 else if (*VAR_3 == VAR_11)
  VAR_3++;
 FUNC_1();
 VAR_8 = FUNC_2(VAR_2);
 for (VAR_9 = VAR_2; VAR_9 <= VAR_5; VAR_9++, VAR_8 = VAR_8->q_forw) {
  if ((VAR_10 = FUNC_4(VAR_8)) == ((void*)0))
   return VAR_0;
  if (VAR_4)
   FUNC_0(VAR_10, VAR_8->len);
  if (!(FUNC_5(VAR_7, VAR_10, 0, ((void*)0), 0) == VAR_6) &&
      FUNC_6(VAR_8) < 0)
   return VAR_0;
 }
 return 0;
}
