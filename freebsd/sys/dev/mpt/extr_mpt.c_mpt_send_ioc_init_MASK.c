
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_4__ {int MaxBuses; int MsgContext; void* ReplyFrameSize; void* HeaderVersion; void* MsgVersion; scalar_t__ MaxDevices; int Function; int WhoInit; } ;
typedef int MSG_IOC_INIT_REPLY ;
typedef TYPE_1__ MSG_IOC_INIT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct mpt_softc*,int,int *) ;
 int FUNC_4 (struct mpt_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_5, uint32_t VAR_6)
{
 int VAR_7 = 0;
 MSG_IOC_INIT VAR_8;
 MSG_IOC_INIT_REPLY VAR_9;

 FUNC_2(&VAR_8, 0, sizeof VAR_8);
 VAR_8.WhoInit = VAR_6;
 VAR_8.Function = VAR_0;
 VAR_8.MaxDevices = 0;
 VAR_8.MaxBuses = 16;

 VAR_8.MsgVersion = FUNC_0(VAR_2);
 VAR_8.HeaderVersion = FUNC_0(VAR_1);
 VAR_8.ReplyFrameSize = FUNC_0(VAR_4);
 VAR_8.MsgContext = FUNC_1(VAR_3);

 if ((VAR_7 = FUNC_4(VAR_5, sizeof VAR_8, &VAR_8)) != 0) {
  return(VAR_7);
 }

 VAR_7 = FUNC_3(VAR_5, sizeof VAR_9, &VAR_9);
 return (VAR_7);
}
