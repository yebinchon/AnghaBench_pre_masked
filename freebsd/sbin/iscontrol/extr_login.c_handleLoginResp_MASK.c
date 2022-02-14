
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint ;
typedef int pdu_t ;
struct TYPE_8__ {int tsih; int NSG; scalar_t__ T; int CSG; int status; } ;
typedef TYPE_1__ login_rsp_t ;
struct TYPE_9__ {int tsih; int csg; TYPE_3__* op; } ;
typedef TYPE_2__ isess_t ;
struct TYPE_10__ {int * tgtChapDigest; } ;
typedef TYPE_3__ isc_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 char** VAR_4 ;
 char** VAR_5 ;

__attribute__((used)) static int
FUNC_7(isess_t *VAR_6, pdu_t *VAR_7)
{
     login_rsp_t *VAR_8 = (login_rsp_t *)VAR_7;
     uint VAR_9, VAR_10 = FUNC_3(VAR_8->status);

     FUNC_1(3);
     FUNC_0(4, "Tbit=%d csg=%d nsg=%d status=%x", VAR_8->T, VAR_8->CSG, VAR_8->NSG, VAR_10);

     VAR_9 = VAR_10 >> 8;
     if(VAR_10) {
   uint VAR_11 = VAR_10 & 0xff;

   switch(VAR_9) {
   case 1:
        switch(VAR_11) {

        case 1:
        case 2:
      VAR_10 = 0;
        }
        break;

   case 2:
        if(VAR_11 < VAR_0)
      FUNC_4("0x%04x: %s\n", VAR_10, VAR_4[VAR_11]);
        break;

   case 3:
        if(VAR_11 < VAR_1)
      FUNC_4("0x%04x: %s\n", VAR_10, VAR_5[VAR_11]);
        break;
   }
     }

     if(VAR_10 == 0) {
   FUNC_5(VAR_6, VAR_7);
   FUNC_6(VAR_6, 0);

   if(VAR_8->T) {
        isc_opt_t *VAR_12 = VAR_6->op;

        if(VAR_6->csg == VAR_3 && (VAR_12->tgtChapDigest != ((void*)0)))
      if(FUNC_2(VAR_6, VAR_7) != 0)
    return 1;
        VAR_6->csg = VAR_8->NSG;
        if(VAR_6->csg == VAR_2) {

      VAR_6->tsih = VAR_8->tsih;
      FUNC_0(2, "TSIH=%x", VAR_6->tsih);
        }
   }
     }

     return VAR_9;
}
