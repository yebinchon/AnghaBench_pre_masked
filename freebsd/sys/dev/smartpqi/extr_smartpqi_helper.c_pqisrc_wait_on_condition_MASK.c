
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int req_pending; } ;
typedef TYPE_1__ rcb_t ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(pqisrc_softstate_t *VAR_4, rcb_t *VAR_5){

 FUNC_1("IN\n");

 int VAR_6 = VAR_2;
 uint32_t VAR_7 = 0;

 while (VAR_5->req_pending == 1) {
  FUNC_3(500);





  FUNC_2(VAR_4);

  if (VAR_7++ == VAR_0) {
   FUNC_0("ERR: Requested cmd timed out !!!\n");
   VAR_6 = VAR_3;
   break;
  }

  if (FUNC_4(VAR_4)) {
   FUNC_0("Controller is Offline");
   VAR_6 = VAR_1;
   break;
  }

 }
 VAR_5->req_pending = 1;

 FUNC_1("OUT\n");

 return VAR_6;
}
