
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_11__ {int ExtPageType; int ExtPageLength; int PageType; int PageNumber; int PageVersion; } ;
struct mpt_ext_cfg_page_req {TYPE_2__ header; int ioc_status; int page_address; } ;
struct TYPE_12__ {int IOCStatus; TYPE_5__* req_vbuf; } ;
typedef TYPE_3__ request_t ;
struct TYPE_13__ {scalar_t__ ExtPageLength; int ExtPageType; int PageAddress; int PageType; int PageNumber; scalar_t__ PageLength; int PageVersion; int Action; } ;
typedef TYPE_4__ cfgparms_t ;
struct TYPE_10__ {int PageType; int PageNumber; int PageVersion; } ;
struct TYPE_14__ {int ExtPageType; int ExtPageLength; TYPE_1__ Header; } ;
typedef TYPE_5__ MSG_CONFIG_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpt_softc*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (struct mpt_softc*,int ) ;
 int FUNC_4 (struct mpt_softc*,TYPE_3__*,TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_5 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_7,
    struct mpt_ext_cfg_page_req *VAR_8)
{
 request_t *VAR_9;
 cfgparms_t VAR_10;
 MSG_CONFIG_REPLY *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_7, VAR_6);
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_7, "mpt_user_read_extcfg_header: Get request failed!\n");
  return (VAR_0);
 }

 VAR_10.Action = VAR_2;
 VAR_10.PageVersion = VAR_8->header.PageVersion;
 VAR_10.PageLength = 0;
 VAR_10.PageNumber = VAR_8->header.PageNumber;
 VAR_10.PageType = VAR_3;
 VAR_10.PageAddress = FUNC_1(VAR_8->page_address);
 VAR_10.ExtPageType = VAR_8->header.ExtPageType;
 VAR_10.ExtPageLength = 0;
 VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_10, 0, 0,
      VAR_6, 5000);
 if (VAR_12 != 0) {






  FUNC_5(VAR_7, "mpt_user_read_extcfg_header timed out\n");
  return (VAR_1);
 }

 VAR_8->ioc_status = FUNC_0(VAR_9->IOCStatus);
 if ((VAR_9->IOCStatus & VAR_4) == VAR_5) {
  VAR_11 = VAR_9->req_vbuf;
  VAR_8->header.PageVersion = VAR_11->Header.PageVersion;
  VAR_8->header.PageNumber = VAR_11->Header.PageNumber;
  VAR_8->header.PageType = VAR_11->Header.PageType;
  VAR_8->header.ExtPageLength = VAR_11->ExtPageLength;
  VAR_8->header.ExtPageType = VAR_11->ExtPageType;
 }
 FUNC_2(VAR_7, VAR_9);
 return (0);
}
