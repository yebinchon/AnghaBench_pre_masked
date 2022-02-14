
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * initiatorName; int * targetName; int * targetAddress; } ;
typedef TYPE_1__ isc_opt_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(isc_opt_t *VAR_1)
{
     FUNC_0(8);

     if(VAR_1->targetAddress != ((void*)0)) {
   FUNC_1(VAR_1->targetAddress, VAR_0);
   VAR_1->targetAddress = ((void*)0);
     }
     if(VAR_1->targetName != ((void*)0)) {
   FUNC_1(VAR_1->targetName, VAR_0);
   VAR_1->targetName = ((void*)0);
     }
     if(VAR_1->initiatorName != ((void*)0)) {
   FUNC_1(VAR_1->initiatorName, VAR_0);
   VAR_1->initiatorName = ((void*)0);
     }
}
