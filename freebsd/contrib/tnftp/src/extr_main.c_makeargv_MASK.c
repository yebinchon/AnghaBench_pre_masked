
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sl_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_1 () ;
 int * VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(void)
{
 char *VAR_11;

 VAR_10 = VAR_5;
 VAR_0 = VAR_1;
 VAR_9 = 0;
 VAR_6->sl_cur = 0;
 for (VAR_7 = 0; ; VAR_7++) {
  VAR_11 = FUNC_1();
  FUNC_0(VAR_6, VAR_11);
  if (VAR_11 == ((void*)0))
   break;
 }

 if (VAR_4 == VAR_5) {
  VAR_2 = 0;
  VAR_3 = 0;
 } else if (VAR_4 != ((void*)0)) {
  VAR_2 = VAR_7;
  VAR_3 = FUNC_2(VAR_8[VAR_7-1]);
 }

}
