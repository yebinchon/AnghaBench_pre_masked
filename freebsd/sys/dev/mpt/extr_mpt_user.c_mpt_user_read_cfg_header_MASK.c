
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_12__ {int PageType; int PageNumber; } ;
struct mpt_cfg_page_req {TYPE_8__ header; int ioc_status; int page_address; } ;
struct TYPE_9__ {int IOCStatus; TYPE_3__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_10__ {int PageAddress; int PageType; int PageNumber; scalar_t__ PageLength; scalar_t__ PageVersion; int Action; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_11__ {int Header; } ;
typedef TYPE_3__ MSG_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_8__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_6 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_6,
    struct mpt_cfg_page_req *VAR_7)
{
 request_t *VAR_8;
 cfgparms_t VAR_9;
 MSG_CONFIG *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_4(VAR_6, VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_6, "mpt_user_read_cfg_header: Get request failed!\n");
  return (VAR_0);
 }

 VAR_9.Action = VAR_2;
 VAR_9.PageVersion = 0;
 VAR_9.PageLength = 0;
 VAR_9.PageNumber = VAR_7->header.PageNumber;
 VAR_9.PageType = VAR_7->header.PageType;
 VAR_9.PageAddress = FUNC_2(VAR_7->page_address);
 VAR_11 = FUNC_5(VAR_6, VAR_8, &VAR_9, 0, 0,
      VAR_5, 5000);
 if (VAR_11 != 0) {






  FUNC_6(VAR_6, "read_cfg_header timed out\n");
  return (VAR_1);
 }

 VAR_7->ioc_status = FUNC_1(VAR_8->IOCStatus);
 if ((VAR_8->IOCStatus & VAR_3) == VAR_4) {
  VAR_10 = VAR_8->req_vbuf;
  FUNC_0(&VAR_10->Header, &VAR_7->header,
      sizeof(VAR_7->header));
 }
 FUNC_3(VAR_6, VAR_8);
 return (0);
}
