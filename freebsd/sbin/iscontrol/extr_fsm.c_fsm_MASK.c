
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int state_t ;
struct TYPE_12__ {int pgt; int port; int address; } ;
struct TYPE_13__ {int fd; int soc; int flags; TYPE_1__ target; TYPE_3__* op; } ;
typedef TYPE_2__ isess_t ;
struct TYPE_14__ {int targetPortalGroupTag; int port; int targetAddress; } ;
typedef TYPE_3__ isc_opt_t ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_2__*) ;

int
FUNC_10(isc_opt_t *VAR_4)
{
     state_t VAR_5;
     isess_t *VAR_6;

     if((VAR_6 = FUNC_0(1, sizeof(isess_t))) == ((void*)0)) {

   FUNC_2(VAR_3, "no memory!\n");
   return -1;
     }

     VAR_5 = 149;
     VAR_6->op = VAR_4;
     VAR_6->fd = -1;
     VAR_6->soc = -1;
     VAR_6->target.address = FUNC_6(VAR_4->targetAddress);
     VAR_6->target.port = VAR_4->port;
     VAR_6->target.pgt = VAR_4->targetPortalGroupTag;

     VAR_6->flags = VAR_1 | VAR_2;

     do {
   switch(VAR_5) {

   case 149:
        switch(FUNC_9(VAR_6)) {
        case 142: VAR_5 = 148; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 148:
        switch(FUNC_5(VAR_6)) {
        case 133: VAR_5 = 149; break;
        case 132: VAR_5 = 147; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 147:
        switch(FUNC_1(VAR_6)) {
        case 130: VAR_5 = 149; break;
        case 131: VAR_5 = 146; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 146:
        switch(FUNC_7(VAR_6)) {
        case 129: VAR_5 = 149; break;
        case 128: VAR_5 = 145; break;
        case 140: VAR_5 = 144; break;
        case 136: VAR_5 = 143; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 145:
        switch(FUNC_4(VAR_6)) {
        case 138: VAR_5 = 149; break;
        case 137: VAR_5 = 145; break;
        case 135: VAR_5 = 143; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 144:
        switch(FUNC_3(VAR_6)) {
        case 134: VAR_5 = 149; break;
        case 141: VAR_5 = 145; break;
        case 139: VAR_5 = 144; break;
        case 135: VAR_5 = 143; break;
        default: VAR_5 = 143; break;
        }
        break;

   case 143:

        FUNC_8(VAR_0, "terminated");
        return 0;
   }
     } while(1);
}
