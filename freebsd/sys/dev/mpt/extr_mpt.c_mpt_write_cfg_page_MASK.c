
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct mpt_softc {int dummy; } ;
struct TYPE_10__ {int IOCStatus; scalar_t__ req_pbuf; scalar_t__ req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_11__ {int Action; int PageType; int PageAddress; int PageNumber; int PageLength; int PageVersion; } ;
typedef TYPE_2__ cfgparms_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_12__ {int PageType; int PageNumber; int PageLength; int PageVersion; } ;
typedef TYPE_3__ CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (scalar_t__,TYPE_3__*,size_t) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,scalar_t__,size_t,int,int) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

int
FUNC_6(struct mpt_softc *VAR_6, int VAR_7, uint32_t VAR_8,
     CONFIG_PAGE_HEADER *VAR_9, size_t VAR_10, int VAR_11,
     int VAR_12)
{
 request_t *VAR_13;
 cfgparms_t VAR_14;
 u_int VAR_15;
 int VAR_16;

 VAR_15 = VAR_9->PageType & VAR_1;
 if (VAR_15 != VAR_0 &&
     VAR_15 != VAR_2) {
  FUNC_5(VAR_6, "page type 0x%x not changeable\n",
   VAR_9->PageType & VAR_3);
  return (-1);
 }
 VAR_13 = FUNC_3(VAR_6, VAR_11);
 if (VAR_13 == ((void*)0))
  return (-1);

 FUNC_1(((caddr_t)VAR_13->req_vbuf) + FUNC_0(VAR_6), VAR_9, VAR_10);






 VAR_14.Action = VAR_7;
 VAR_14.PageVersion = VAR_9->PageVersion;
 VAR_14.PageLength = VAR_9->PageLength;
 VAR_14.PageNumber = VAR_9->PageNumber;
 VAR_14.PageAddress = VAR_8;





 VAR_14.PageType = VAR_9->PageType;

 VAR_16 = FUNC_4(VAR_6, VAR_13, &VAR_14,
      VAR_13->req_pbuf + FUNC_0(VAR_6),
      VAR_10, VAR_11, VAR_12);
 if (VAR_16 != 0) {
  FUNC_5(VAR_6, "mpt_write_cfg_page timed out\n");
  return (-1);
 }

        if ((VAR_13->IOCStatus & VAR_4) != VAR_5) {
  FUNC_5(VAR_6, "mpt_write_cfg_page: Config Info Status %x\n",
   VAR_13->IOCStatus);
  FUNC_2(VAR_6, VAR_13);
  return (-1);
 }
 FUNC_2(VAR_6, VAR_13);
 return (0);
}
