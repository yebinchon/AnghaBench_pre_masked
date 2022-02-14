
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct mpt_page_memory {int map; int tag; int paddr; TYPE_3__* vaddr; } ;
struct mpt_ext_cfg_page_req {int ioc_status; int len; int page_address; } ;
struct TYPE_8__ {int IOCStatus; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int ExtPageLength; int ExtPageType; int PageAddress; int PageType; int PageNumber; scalar_t__ PageLength; int PageVersion; int Action; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_10__ {int ExtPageLength; int ExtPageType; int PageNumber; int PageVersion; } ;
typedef TYPE_3__ CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_6 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_11,
    struct mpt_ext_cfg_page_req *VAR_12, struct mpt_page_memory *VAR_13)
{
 CONFIG_EXTENDED_PAGE_HEADER *VAR_14;
 request_t *VAR_15;
 cfgparms_t VAR_16;
 int VAR_17;

 VAR_15 = FUNC_4(VAR_11, VAR_10);
 if (VAR_15 == ((void*)0)) {
  FUNC_6(VAR_11, "mpt_user_read_extcfg_page: Get request failed!\n");
  return (VAR_4);
 }

 VAR_14 = VAR_13->vaddr;
 VAR_16.Action = VAR_6;
 VAR_16.PageVersion = VAR_14->PageVersion;
 VAR_16.PageLength = 0;
 VAR_16.PageNumber = VAR_14->PageNumber;
 VAR_16.PageType = VAR_7;
 VAR_16.PageAddress = FUNC_2(VAR_12->page_address);
 VAR_16.ExtPageType = VAR_14->ExtPageType;
 VAR_16.ExtPageLength = VAR_14->ExtPageLength;
 FUNC_0(VAR_13->tag, VAR_13->map,
     VAR_2 | VAR_3);
 VAR_17 = FUNC_5(VAR_11, VAR_15, &VAR_16, VAR_13->paddr,
     FUNC_2(VAR_12->len), VAR_10, 5000);
 if (VAR_17 != 0) {
  FUNC_6(VAR_11, "mpt_user_read_extcfg_page timed out\n");
  return (VAR_5);
 }

 VAR_12->ioc_status = FUNC_1(VAR_15->IOCStatus);
 if ((VAR_15->IOCStatus & VAR_8) == VAR_9)
  FUNC_0(VAR_13->tag, VAR_13->map,
      VAR_0 | VAR_1);
 FUNC_3(VAR_11, VAR_15);
 return (0);
}
