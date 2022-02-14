
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_9__ {int req_pbuf; int IOCStatus; scalar_t__ req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_10__ {int Action; int ExtPageLength; int ExtPageType; int PageAddress; int PageType; int PageNumber; scalar_t__ PageLength; int PageVersion; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_11__ {int ExtPageLength; int ExtPageType; int PageNumber; int PageVersion; } ;
typedef TYPE_3__ CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int,size_t,int,int) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

int
FUNC_6(struct mpt_softc *VAR_3, int VAR_4, uint32_t VAR_5,
       CONFIG_EXTENDED_PAGE_HEADER *VAR_6, void *VAR_7, size_t VAR_8,
       int VAR_9, int VAR_10)
{
 request_t *VAR_11;
 cfgparms_t VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_3, VAR_9);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_3, "mpt_read_extcfg_page: Get request failed!\n");
  return (-1);
 }

 VAR_12.Action = VAR_4;
 VAR_12.PageVersion = VAR_6->PageVersion;
 VAR_12.PageLength = 0;
 VAR_12.PageNumber = VAR_6->PageNumber;
 VAR_12.PageType = VAR_0;
 VAR_12.PageAddress = VAR_5;
 VAR_12.ExtPageType = VAR_6->ExtPageType;
 VAR_12.ExtPageLength = VAR_6->ExtPageLength;
 VAR_13 = FUNC_4(VAR_3, VAR_11, &VAR_12,
      VAR_11->req_pbuf + FUNC_0(VAR_3),
      VAR_8, VAR_9, VAR_10);
 if (VAR_13 != 0) {
  FUNC_5(VAR_3, "read_extcfg_page(%d) timed out\n", VAR_4);
  return (-1);
 }

 if ((VAR_11->IOCStatus & VAR_1) != VAR_2) {
  FUNC_5(VAR_3, "mpt_read_extcfg_page: Config Info Status %x\n",
   VAR_11->IOCStatus);
  FUNC_2(VAR_3, VAR_11);
  return (-1);
 }
 FUNC_1(VAR_7, ((uint8_t *)VAR_11->req_vbuf)+FUNC_0(VAR_3), VAR_8);
 FUNC_2(VAR_3, VAR_11);
 return (0);
}
