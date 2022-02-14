
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mptsas_devinfo {int bus; int target_id; } ;
struct mpt_softc {int dummy; } ;
struct TYPE_8__ {int index; int IOCStatus; TYPE_2__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int* CommandFIS; int MsgContext; scalar_t__ DataLength; int ConnectionRate; scalar_t__ PassthroughFlags; int Bus; int TargetID; int Function; } ;
typedef TYPE_2__ SataPassthroughRequest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct mpt_softc*,int ) ;
 int FUNC_6 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_7 (struct mpt_softc*,TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_8 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct mpt_softc *VAR_5, struct mptsas_devinfo *VAR_6,
 int VAR_7)
{
 SataPassthroughRequest_t *VAR_8;
 request_t *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_5(VAR_5, 0);
 if (VAR_9 == ((void*)0))
  return;

 VAR_8 = VAR_9->req_vbuf;
 FUNC_0(VAR_8, sizeof(SataPassthroughRequest_t));
 VAR_8->Function = VAR_0;
 VAR_8->TargetID = VAR_6->target_id;
 VAR_8->Bus = VAR_6->bus;
 VAR_8->PassthroughFlags = 0;
 VAR_8->ConnectionRate = VAR_2;
 VAR_8->DataLength = 0;
 VAR_8->MsgContext = FUNC_1(VAR_9->index | VAR_4);
 VAR_8->CommandFIS[0] = 0x27;
 VAR_8->CommandFIS[1] = 0x80;
 VAR_8->CommandFIS[2] = 0xef;
 VAR_8->CommandFIS[3] = (VAR_7) ? 0x02 : 0x82;
 VAR_8->CommandFIS[7] = 0x40;
 VAR_8->CommandFIS[15] = 0x08;

 FUNC_3(VAR_5);
 FUNC_6(VAR_5, VAR_9);
 VAR_10 = FUNC_7(VAR_5, VAR_9, VAR_3, VAR_3, 0,
        10 * 1000);
 if (VAR_10) {
  FUNC_4(VAR_5, VAR_9);
  FUNC_8("error %d sending passthrough\n", VAR_10);
  return;
 }

 VAR_11 = FUNC_2(VAR_9->IOCStatus);
 if (VAR_11 != VAR_1) {
  FUNC_4(VAR_5, VAR_9);
  FUNC_8("IOCSTATUS %d\n", VAR_11);
  return;
 }

 FUNC_4(VAR_5, VAR_9);
}
