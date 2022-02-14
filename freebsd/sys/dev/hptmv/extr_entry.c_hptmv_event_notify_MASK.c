
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * sataEvents; int event_timer_connect; } ;
struct TYPE_7__ {int adapterId; TYPE_2__* IALData; } ;
typedef size_t MV_U8 ;
typedef size_t MV_U32 ;
typedef TYPE_1__ MV_SATA_ADAPTER ;
typedef int MV_EVENT_TYPE ;
typedef int MV_BOOLEAN ;
typedef TYPE_2__ IAL_ADAPTER_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,int) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,size_t,int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static MV_BOOLEAN
FUNC_5(MV_SATA_ADAPTER *VAR_9, MV_EVENT_TYPE VAR_10,
           MV_U32 VAR_11, MV_U32 VAR_12)
{
 IAL_ADAPTER_T *VAR_13 = VAR_9->IALData;

 switch (VAR_10)
 {
  case 128:
   {
    MV_U8 VAR_14 = VAR_12;

    if (VAR_11 == VAR_0)
    {
     VAR_13->sataEvents[VAR_14] = VAR_5;
     FUNC_0(("RR18xx [%d,%d]: device connected event received\n",
        VAR_9->adapterId, VAR_14));

     FUNC_2(&VAR_13->event_timer_connect, 10 * VAR_8, VAR_7, VAR_13);
    }
    else if (VAR_11 == VAR_1)
    {
     VAR_13->sataEvents[VAR_14] = VAR_6;
     FUNC_0(("RR18xx [%d,%d]: device disconnected event received \n",
        VAR_9->adapterId, VAR_14));
     FUNC_3(VAR_13, VAR_14, VAR_2);



     FUNC_4(VAR_13);
    }
    else
    {

     FUNC_1("RR18xx: illegal value for param1(%d) at "
        "connect/disconnect event, host=%d\n", VAR_11,
        VAR_9->adapterId );

    }
   }
   break;
  case 129:
   FUNC_0(("RR18xx: DEVICE error event received, pci cause "
       "reg=%x,  don't how to handle this\n", VAR_11));
   return VAR_4;
  default:
   FUNC_1("RR18xx[%d]: unknown event type (%d)\n",
      VAR_9->adapterId, VAR_10);
   return VAR_3;
 }
 return VAR_4;
}
