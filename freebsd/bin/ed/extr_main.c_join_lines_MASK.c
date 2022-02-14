
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct TYPE_4__* q_forw; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 long FUNC_0 (long,int ) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_4 (long,long) ;
 TYPE_1__* FUNC_5 (long) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_4 ;
 int * FUNC_8 (int ,long,long) ;
 int * FUNC_9 (char*) ;

int
FUNC_10(long VAR_5, long VAR_6)
{
 static char *VAR_7 = ((void*)0);
 static int VAR_8;

 char *VAR_9;
 int VAR_10 = 0;
 line_t *VAR_11, *VAR_12;

 VAR_12 = FUNC_5(FUNC_0(VAR_6, VAR_2));
 VAR_11 = FUNC_5(VAR_5);
 for (; VAR_11 != VAR_12; VAR_11 = VAR_11->q_forw) {
  if ((VAR_9 = FUNC_6(VAR_11)) == ((void*)0))
   return VAR_0;
  FUNC_1(VAR_7, VAR_8, VAR_10 + VAR_11->len, VAR_0);
  FUNC_7(VAR_7 + VAR_10, VAR_9, VAR_11->len);
  VAR_10 += VAR_11->len;
 }
 FUNC_1(VAR_7, VAR_8, VAR_10 + 2, VAR_0);
 FUNC_7(VAR_7 + VAR_10, "\n", 2);
 if (FUNC_4(VAR_5, VAR_6) < 0)
  return VAR_0;
 VAR_3 = VAR_5 - 1;
 FUNC_3();
 if (FUNC_9(VAR_7) == ((void*)0) ||
     FUNC_8(VAR_1, VAR_3, VAR_3) == ((void*)0)) {
  FUNC_2();
  return VAR_0;
 }
 VAR_4 = 1;
 FUNC_2();
 return 0;
}
