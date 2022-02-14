
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_task_t ;
typedef int isc_result_t ;
struct TYPE_7__ {int * ev_sender; } ;
typedef TYPE_1__ isc_event_t ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

 int FUNC_5 (int) ;

 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int VAR_10 ;
 int FUNC_11 (int **,TYPE_1__**) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

isc_result_t
FUNC_12(void) {
 isc_event_t *VAR_17, *VAR_18;
 isc_task_t *VAR_19;
 HANDLE *VAR_20 = ((void*)0);

 FUNC_5(VAR_12 == FUNC_0());
 FUNC_4(&VAR_11);
 if (!VAR_14) {
  VAR_14 = VAR_5;




  for (VAR_17 = FUNC_1(VAR_13);
       VAR_17 != ((void*)0);
       VAR_17 = VAR_18) {
   VAR_18 = FUNC_2(VAR_17, VAR_9);
   FUNC_3(VAR_13, VAR_17, VAR_9);
   VAR_19 = VAR_17->ev_sender;
   VAR_17->ev_sender = ((void*)0);
   FUNC_11(&VAR_19, &VAR_17);
  }

 }

 FUNC_6(&VAR_11);






 while (!VAR_16) {
  VAR_8 = FUNC_7(VAR_6, VAR_10,
            VAR_0, VAR_1);



  if (FUNC_8(VAR_8, VAR_6)) {




   switch (FUNC_9(VAR_8)) {
   case 129:
    VAR_15 = VAR_5;
    break;

   case 128:
    VAR_16 = VAR_5;
    break;
   }
  }
  if (VAR_15) {
   VAR_15 = VAR_2;
   return (VAR_3);
  }

  if (VAR_16 && VAR_7)
   FUNC_10(-1);
 }

 return (VAR_4);
}
