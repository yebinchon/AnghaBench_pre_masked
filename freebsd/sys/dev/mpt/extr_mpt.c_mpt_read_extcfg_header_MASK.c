
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_12__ {int IOCStatus; TYPE_4__* req_vbuf; } ;
typedef TYPE_2__ request_t ;
struct TYPE_13__ {int PageVersion; int PageNumber; int ExtPageType; scalar_t__ ExtPageLength; int PageAddress; int PageType; scalar_t__ PageLength; int Action; } ;
typedef TYPE_3__ cfgparms_t ;
struct TYPE_15__ {int ExtPageType; int ExtPageLength; int PageType; int PageNumber; int PageVersion; } ;
struct TYPE_11__ {int PageType; int PageNumber; int PageVersion; } ;
struct TYPE_14__ {int ExtPageType; int ExtPageLength; TYPE_1__ Header; } ;
typedef TYPE_4__ MSG_CONFIG_REPLY ;
typedef TYPE_5__ CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpt_softc*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (struct mpt_softc*,int) ;
 int FUNC_3 (struct mpt_softc*,TYPE_2__*,TYPE_3__*,int ,int ,int,int) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,int ,int,int ) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

int
FUNC_6(struct mpt_softc *VAR_8, int VAR_9, int VAR_10,
         uint32_t VAR_11, int VAR_12,
         CONFIG_EXTENDED_PAGE_HEADER *VAR_13,
         int VAR_14, int VAR_15)
{
 request_t *VAR_16;
 cfgparms_t VAR_17;
 MSG_CONFIG_REPLY *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_2(VAR_8, VAR_14);
 if (VAR_16 == ((void*)0)) {
  FUNC_5(VAR_8, "mpt_extread_cfg_header: Get request failed!\n");
  return (VAR_2);
 }

 VAR_17.Action = VAR_4;
 VAR_17.PageVersion = VAR_9;
 VAR_17.PageLength = 0;
 VAR_17.PageNumber = VAR_10;
 VAR_17.PageType = VAR_5;
 VAR_17.PageAddress = VAR_11;
 VAR_17.ExtPageType = VAR_12;
 VAR_17.ExtPageLength = 0;
 VAR_19 = FUNC_3(VAR_8, VAR_16, &VAR_17, 0, 0,
      VAR_14, VAR_15);
 if (VAR_19 != 0) {






  FUNC_5(VAR_8, "read_extcfg_header timed out\n");
  return (VAR_3);
 }

        switch (VAR_16->IOCStatus & VAR_6) {
 case 128:
  VAR_18 = VAR_16->req_vbuf;
  VAR_13->PageVersion = VAR_18->Header.PageVersion;
  VAR_13->PageNumber = VAR_18->Header.PageNumber;
  VAR_13->PageType = VAR_18->Header.PageType;
  VAR_13->ExtPageLength = FUNC_0(VAR_18->ExtPageLength);
  VAR_13->ExtPageType = VAR_18->ExtPageType;
  VAR_19 = 0;
  break;
 case 129:
  FUNC_4(VAR_8, VAR_7,
      "Invalid Page Type %d Number %d Addr 0x%0x\n",
      VAR_5, VAR_10, VAR_11);
  VAR_19 = VAR_0;
  break;
 default:
  FUNC_5(VAR_8, "mpt_read_extcfg_header: Config Info Status %x\n",
   VAR_16->IOCStatus);
  VAR_19 = VAR_1;
  break;
 }
 FUNC_1(VAR_8, VAR_16);
 return (VAR_19);
}
