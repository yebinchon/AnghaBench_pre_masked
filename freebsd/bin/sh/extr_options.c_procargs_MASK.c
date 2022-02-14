
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** p; int reset; int nparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char** VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int ) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

void
FUNC_8(int VAR_12, char **VAR_13)
{
 int VAR_14;
 char *VAR_15;

 VAR_3 = VAR_13;
 if (VAR_12 > 0)
  VAR_3++;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
  VAR_8[VAR_14] = 2;
 VAR_9 = (FUNC_3() != FUNC_1() || FUNC_2() != FUNC_0());
 FUNC_5(1);
 if (*VAR_3 == ((void*)0) && VAR_7 == ((void*)0))
  VAR_10 = 1;
 if (VAR_5 != 0 && VAR_10 == 1 && FUNC_4(0) && FUNC_4(1)) {
  VAR_5 = 1;
  if (VAR_0 == 2)
   VAR_0 = 1;
 }
 if (VAR_6 == 2)
  VAR_6 = VAR_5;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
  if (VAR_8[VAR_14] == 2)
   VAR_8[VAR_14] = 0;
 VAR_2 = VAR_13[0];
 if (VAR_10 == 0 && VAR_7 == ((void*)0)) {
  VAR_15 = *VAR_3++;
  FUNC_7(VAR_15, 0);
  VAR_4 = VAR_2 = VAR_15;
 }

 if (VAR_3 && VAR_7 && *VAR_3)
  VAR_2 = *VAR_3++;

 VAR_11.p = VAR_3;
 VAR_11.reset = 1;

 while (*VAR_3) {
  VAR_11.nparam++;
  VAR_3++;
 }
 FUNC_6();
}
