
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_10__ {scalar_t__ (* options ) () ;scalar_t__ (* st_rd ) () ;int (* end_rd ) () ;} ;
struct TYPE_9__ {scalar_t__ pad; scalar_t__ skip; } ;
typedef TYPE_1__ ARCHD ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_8__* VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ VAR_4 ;

void
FUNC_17(void)
{
 ARCHD *VAR_5;
 int VAR_6;
 ARCHD VAR_7;
 time_t VAR_8;

 VAR_5 = &VAR_7;







 if ((FUNC_1() < 0) || ((*VAR_1->options)() < 0) ||
     ((*VAR_1->st_rd)() < 0))
  return;

 if (VAR_4 && ((FUNC_16() < 0) || (FUNC_2() < 0)))
  return;

 VAR_8 = FUNC_15(((void*)0));




 while (FUNC_5(VAR_5) == 0) {




  if ((VAR_6 = FUNC_7(VAR_5)) < 0)
   break;

  if ((VAR_6 == 0) && (FUNC_10(VAR_5) == 0)) {



   if (FUNC_8(VAR_5) < 0)
    break;





   if ((VAR_6 = FUNC_4(VAR_5)) < 0)
    break;
   if (VAR_6 == 0)
    FUNC_3(VAR_5, VAR_8, VAR_3);
  }





  if (FUNC_9(VAR_5->skip + VAR_5->pad) == 1)
   break;
 }





 (void)(*VAR_1->end_rd)();
 (void)FUNC_11(VAR_0, &VAR_2, ((void*)0));
 FUNC_0();
 FUNC_6();
}
