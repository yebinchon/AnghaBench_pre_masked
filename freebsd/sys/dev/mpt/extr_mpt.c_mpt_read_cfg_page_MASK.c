
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_10__ {int req_pbuf; int IOCStatus; scalar_t__ req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_11__ {int Action; int PageType; int PageAddress; int PageNumber; int PageLength; int PageVersion; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_12__ {int PageType; int PageNumber; int PageLength; int PageVersion; } ;
typedef TYPE_3__ CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (TYPE_3__*,int *,size_t) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int,size_t,int,int) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

int
FUNC_6(struct mpt_softc *VAR_3, int VAR_4, uint32_t VAR_5,
    CONFIG_PAGE_HEADER *VAR_6, size_t VAR_7, int VAR_8,
    int VAR_9)
{
 request_t *VAR_10;
 cfgparms_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_3, VAR_8);
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_3, "mpt_read_cfg_page: Get request failed!\n");
  return (-1);
 }

 VAR_11.Action = VAR_4;
 VAR_11.PageVersion = VAR_6->PageVersion;
 VAR_11.PageLength = VAR_6->PageLength;
 VAR_11.PageNumber = VAR_6->PageNumber;
 VAR_11.PageType = VAR_6->PageType & VAR_0;
 VAR_11.PageAddress = VAR_5;
 VAR_12 = FUNC_4(VAR_3, VAR_10, &VAR_11,
      VAR_10->req_pbuf + FUNC_0(VAR_3),
      VAR_7, VAR_8, VAR_9);
 if (VAR_12 != 0) {
  FUNC_5(VAR_3, "read_cfg_page(%d) timed out\n", VAR_4);
  return (-1);
 }

 if ((VAR_10->IOCStatus & VAR_1) != VAR_2) {
  FUNC_5(VAR_3, "mpt_read_cfg_page: Config Info Status %x\n",
   VAR_10->IOCStatus);
  FUNC_2(VAR_3, VAR_10);
  return (-1);
 }
 FUNC_1(VAR_6, ((uint8_t *)VAR_10->req_vbuf)+FUNC_0(VAR_3), VAR_7);
 FUNC_2(VAR_3, VAR_10);
 return (0);
}
