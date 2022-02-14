
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int pduq_t ;
struct TYPE_8__ {int isc; } ;
typedef TYPE_1__ isc_session_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*,int) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,int) ;

int
FUNC_8(isc_session_t *VAR_0)
{
     int VAR_1 = 0;
     pduq_t *VAR_2;

     FUNC_0(8);
     while((VAR_2 = FUNC_2(VAR_0)) != ((void*)0)) {
   FUNC_6(VAR_0->isc, VAR_2);
   VAR_1++;
     }
     while((VAR_2 = FUNC_3(VAR_0)) != ((void*)0)) {
   FUNC_6(VAR_0->isc, VAR_2);
   VAR_1++;
     }
     while((VAR_2 = FUNC_4(VAR_0, -1)) != ((void*)0)) {
   FUNC_6(VAR_0->isc, VAR_2);
   VAR_1++;
     }
     while((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
   FUNC_6(VAR_0->isc, VAR_2);
   VAR_1++;
     }
     while((VAR_2 = FUNC_5(VAR_0)) != ((void*)0)) {
   FUNC_6(VAR_0->isc, VAR_2);
   VAR_1++;
     }
     if(VAR_1 != 0)
   FUNC_7("%d pdus recovered, should have been ZERO!", VAR_1);
     return VAR_1;
}
