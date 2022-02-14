
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct mpt_softc {int dummy; } ;
struct mpt_page_memory {int map; int tag; int paddr; TYPE_3__* vaddr; } ;
struct mpt_cfg_page_req {int ioc_status; int len; int page_address; } ;
struct TYPE_8__ {int IOCStatus; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int PageType; int PageAddress; int PageNumber; int PageLength; int PageVersion; int Action; } ;
typedef TYPE_2__ cfgparms_t ;
struct TYPE_10__ {int PageType; int PageNumber; int PageLength; int PageVersion; } ;
typedef TYPE_3__ CONFIG_PAGE_HEADER ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*,TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_6 (struct mpt_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_13,
    struct mpt_cfg_page_req *VAR_14, struct mpt_page_memory *VAR_15)
{
 CONFIG_PAGE_HEADER *VAR_16;
 request_t *VAR_17;
 cfgparms_t VAR_18;
 u_int VAR_19;
 int VAR_20;

 VAR_16 = VAR_15->vaddr;
 VAR_19 = VAR_16->PageType & VAR_9;
 if (VAR_19 != VAR_8 &&
     VAR_19 != VAR_10) {
  FUNC_6(VAR_13, "page type 0x%x not changeable\n",
   VAR_16->PageType & VAR_11);
  return (VAR_4);
 }
 VAR_17 = FUNC_4(VAR_13, VAR_12);
 if (VAR_17 == ((void*)0))
  return (VAR_5);

 FUNC_0(VAR_15->tag, VAR_15->map, VAR_2 |
     VAR_3);






 VAR_18.Action = VAR_7;
 VAR_18.PageVersion = VAR_16->PageVersion;
 VAR_18.PageLength = VAR_16->PageLength;
 VAR_18.PageNumber = VAR_16->PageNumber;
 VAR_18.PageAddress = FUNC_2(VAR_14->page_address);





 VAR_18.PageType = VAR_16->PageType;

 VAR_20 = FUNC_5(VAR_13, VAR_17, &VAR_18, VAR_15->paddr,
     FUNC_2(VAR_14->len), VAR_12, 5000);
 if (VAR_20 != 0) {
  FUNC_6(VAR_13, "mpt_write_cfg_page timed out\n");
  return (VAR_6);
 }

 VAR_14->ioc_status = FUNC_1(VAR_17->IOCStatus);
 FUNC_0(VAR_15->tag, VAR_15->map, VAR_0 |
     VAR_1);
 FUNC_3(VAR_13, VAR_17);
 return (0);
}
