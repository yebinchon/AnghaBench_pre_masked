
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ status; int counter; } ;
typedef TYPE_1__ isc_once_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

isc_result_t
FUNC_3(isc_once_t *VAR_3, void(*VAR_4)(void)) {
 FUNC_1(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

 if (VAR_3->status == VAR_1) {

  if (FUNC_0(&VAR_3->counter) == 0) {
   if (VAR_3->status == VAR_1) {
    VAR_4();
    VAR_3->status = VAR_0;
   }
  } else {
   while (VAR_3->status == VAR_1) {





    FUNC_2(0);
   }
  }
 }

 return (VAR_2);
}
