
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bufdomain {int bd_numdirtybuffers; int bd_lodirtybuffers; } ;
struct TYPE_3__ {int td_pflags; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 struct bufdomain* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int *,struct bufdomain*,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void (*) (void*),struct bufdomain*,int ,int *,int ,int ,char*,int) ;
 int VAR_16 ;
 int FUNC_6 () ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (scalar_t__*,int *,int ,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_11 () ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_12()
{
 struct bufdomain *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;




 FUNC_1(VAR_19, VAR_16, VAR_14,
     VAR_3 + 100);




 for (VAR_23 = 0 ; VAR_23 < VAR_11; VAR_23++) {
  int VAR_24;

  VAR_24 = FUNC_5((void (*)(void *))VAR_12,
      &VAR_10[VAR_23], VAR_13, ((void*)0), 0, 0, "bufspacedaemon-%d", VAR_23);
  if (VAR_24)
   FUNC_10("error %d spawning bufspace daemon", VAR_24);
 }




 VAR_14->td_pflags |= VAR_5 | VAR_4;
 FUNC_8(&VAR_8);
 for (;;) {
  VAR_6 = 0;
  FUNC_9(&VAR_8);

  FUNC_6();





  VAR_21 = VAR_7;
  VAR_7 = 0;





  for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
   VAR_20 = &VAR_10[VAR_23];
   if (VAR_21)
    VAR_22 = VAR_20->bd_numdirtybuffers / 2;
   else
    VAR_22 = VAR_20->bd_lodirtybuffers;
   while (VAR_20->bd_numdirtybuffers > VAR_22) {
    if (FUNC_3(((void*)0), VAR_20,
        VAR_20->bd_numdirtybuffers - VAR_22) == 0)
     break;
    FUNC_4(VAR_1);
   }
  }
  FUNC_8(&VAR_8);
  if (!FUNC_0(VAR_0, &VAR_9)) {





   VAR_6 = 0;





   FUNC_2();
   if (VAR_18 <= VAR_17)
    FUNC_11();
   FUNC_7(&VAR_6, &VAR_8, VAR_2, "psleep", VAR_15);
  } else {





   FUNC_7(&VAR_6, &VAR_8, VAR_2, "qsleep", VAR_15 / 10);
  }
 }
}
