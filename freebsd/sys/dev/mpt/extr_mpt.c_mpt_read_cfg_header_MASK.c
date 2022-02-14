
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_8__ {int IOCStatus; TYPE_3__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int PageNumber; int PageType; int PageAddress; scalar_t__ PageLength; scalar_t__ PageVersion; int Action; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_10__ {int Header; } ;
typedef TYPE_3__ MSG_CONFIG ;
typedef int CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct mpt_softc*,int) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int ,int ,int,int) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,int,int,int ) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

int
FUNC_6(struct mpt_softc *VAR_7, int VAR_8, int VAR_9,
      uint32_t VAR_10, CONFIG_PAGE_HEADER *VAR_11,
      int VAR_12, int VAR_13)
{
 request_t *VAR_14;
 cfgparms_t VAR_15;
 MSG_CONFIG *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_2(VAR_7, VAR_12);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_7, "mpt_read_cfg_header: Get request failed!\n");
  return (VAR_2);
 }

 VAR_15.Action = VAR_4;
 VAR_15.PageVersion = 0;
 VAR_15.PageLength = 0;
 VAR_15.PageNumber = VAR_9;
 VAR_15.PageType = VAR_8;
 VAR_15.PageAddress = VAR_10;
 VAR_17 = FUNC_3(VAR_7, VAR_14, &VAR_15, 0, 0,
      VAR_12, VAR_13);
 if (VAR_17 != 0) {






  FUNC_5(VAR_7, "read_cfg_header timed out\n");
  return (VAR_3);
 }

        switch (VAR_14->IOCStatus & VAR_5) {
 case 128:
  VAR_16 = VAR_14->req_vbuf;
  FUNC_0(&VAR_16->Header, VAR_11, sizeof(*VAR_11));
  VAR_17 = 0;
  break;
 case 129:
  FUNC_4(VAR_7, VAR_6,
      "Invalid Page Type %d Number %d Addr 0x%0x\n",
      VAR_8, VAR_9, VAR_10);
  VAR_17 = VAR_0;
  break;
 default:
  FUNC_5(VAR_7, "mpt_read_cfg_header: Config Info Status %x\n",
   VAR_14->IOCStatus);
  VAR_17 = VAR_1;
  break;
 }
 FUNC_1(VAR_7, VAR_14);
 return (VAR_17);
}
