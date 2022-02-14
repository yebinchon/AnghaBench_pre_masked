
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ decision; int reqId; int lastId; scalar_t__ methodState; scalar_t__ selectedMethod; scalar_t__ reqMethod; scalar_t__ reauthInit; scalar_t__ rxResp; scalar_t__ rxSuccess; scalar_t__ rxReq; scalar_t__ allowNotifications; scalar_t__ rxFailure; scalar_t__ workaround; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int VAR_18 ;
 int FUNC_1 (struct eap_sm*) ;
 scalar_t__ FUNC_2 (struct eap_sm*) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int,int) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_19)
{
 int VAR_20 = FUNC_1(VAR_19);






 if (VAR_19->rxSuccess && VAR_19->decision != VAR_0 &&
     (VAR_19->reqId == VAR_19->lastId ||
      FUNC_3(VAR_19, VAR_19->reqId, VAR_19->lastId)))
  FUNC_0(VAR_3, VAR_18);
 else if (VAR_19->workaround && VAR_19->lastId == -1 && VAR_19->rxSuccess &&
   !VAR_19->rxFailure && !VAR_19->rxReq && FUNC_2(VAR_19))
  FUNC_0(VAR_3, VAR_18);
 else if (VAR_19->workaround && VAR_19->lastId == -1 && VAR_19->rxFailure &&
   !VAR_19->rxReq && VAR_19->methodState != VAR_12 &&
   FUNC_2(VAR_19))
  FUNC_0(VAR_3, VAR_8);
 else if (VAR_19->workaround && VAR_19->rxSuccess && !VAR_19->rxFailure &&
   !VAR_19->rxReq && VAR_19->methodState != VAR_12 &&
   FUNC_2(VAR_19))
  FUNC_0(VAR_3, VAR_18);
 else if (VAR_19->methodState != VAR_12 &&
   ((VAR_19->rxFailure &&
     VAR_19->decision != VAR_1) ||
    (VAR_19->rxSuccess && VAR_19->decision == VAR_0 &&
     (VAR_19->selectedMethod != VAR_5 ||
      VAR_19->methodState != VAR_14))) &&
   (VAR_19->reqId == VAR_19->lastId ||
    FUNC_3(VAR_19, VAR_19->reqId, VAR_19->lastId)))
  FUNC_0(VAR_3, VAR_8);
 else if (VAR_19->rxReq && VAR_20)
  FUNC_0(VAR_3, VAR_16);
 else if (VAR_19->rxReq && !VAR_20 &&
   VAR_19->reqMethod == VAR_7 &&
   VAR_19->allowNotifications)
  FUNC_0(VAR_3, VAR_15);
 else if (VAR_19->rxReq && !VAR_20 &&
   VAR_19->selectedMethod == VAR_6 &&
   VAR_19->reqMethod == VAR_4)
  FUNC_0(VAR_3, VAR_10);
 else if (VAR_19->rxReq && !VAR_20 &&
   VAR_19->selectedMethod == VAR_6 &&
   VAR_19->reqMethod != VAR_4 &&
   VAR_19->reqMethod != VAR_7)
  FUNC_0(VAR_3, VAR_9);
 else if (VAR_19->rxReq && !VAR_20 &&
   VAR_19->reqMethod == VAR_19->selectedMethod &&
   VAR_19->methodState != VAR_13)
  FUNC_0(VAR_3, VAR_11);
 else if (VAR_19->selectedMethod == VAR_5 &&
   (VAR_19->rxSuccess || VAR_19->rxResp))
  FUNC_0(VAR_3, VAR_11);
 else if (VAR_19->reauthInit)
  FUNC_0(VAR_3, VAR_17);
 else
  FUNC_0(VAR_3, VAR_2);
}
