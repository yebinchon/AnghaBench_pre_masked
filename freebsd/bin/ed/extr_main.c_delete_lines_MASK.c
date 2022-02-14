
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int q_forw; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 long FUNC_0 (long,long) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 TYPE_1__* FUNC_4 (long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ,long,long) ;
 int FUNC_6 (int ,TYPE_1__*) ;

int
FUNC_7(long VAR_6, long VAR_7)
{
 line_t *VAR_8, *VAR_9;

 FUNC_3();
 if (FUNC_5(VAR_1, VAR_6, VAR_7) == ((void*)0)) {
  FUNC_2();
  return VAR_0;
 }
 VAR_8 = FUNC_4(FUNC_0(VAR_7, VAR_2));
 VAR_9 = FUNC_4(VAR_6 - 1);

 if (VAR_4)
  FUNC_6(VAR_9->q_forw, VAR_8);
 FUNC_1(VAR_9, VAR_8);
 VAR_2 -= VAR_7 - VAR_6 + 1;
 VAR_3 = VAR_6 - 1;
 VAR_5 = 1;
 FUNC_2();
 return 0;
}
