
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mps_softc {int dummy; } ;
struct TYPE_5__ {int ExtPageType; scalar_t__ ExtPageLength; int PageType; int PageNumber; int PageVersion; } ;
struct mps_ext_cfg_page_req {int ioc_status; TYPE_2__ header; int page_address; } ;
struct TYPE_6__ {int ExtPageType; scalar_t__ ExtPageLength; int PageType; int PageNumber; int PageVersion; } ;
struct TYPE_4__ {TYPE_3__ Ext; } ;
struct mps_config_params {int status; int * callback; scalar_t__ length; int * buffer; int page_address; int action; TYPE_1__ hdr; } ;
typedef TYPE_3__ MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mps_softc*,char*) ;
 int FUNC_3 (struct mps_softc*,struct mps_config_params*) ;

__attribute__((used)) static int
FUNC_4(struct mps_softc *VAR_5,
    struct mps_ext_cfg_page_req *VAR_6)
{
 MPI2_CONFIG_EXTENDED_PAGE_HEADER *VAR_7;
 struct mps_config_params VAR_8;
 int VAR_9;

 VAR_7 = &VAR_8.hdr.Ext;
 VAR_8.action = VAR_1;
 VAR_7->PageVersion = VAR_6->header.PageVersion;
 VAR_7->PageType = VAR_2;
 VAR_7->ExtPageLength = 0;
 VAR_7->PageNumber = VAR_6->header.PageNumber;
 VAR_7->ExtPageType = VAR_6->header.ExtPageType;
 VAR_8.page_address = FUNC_1(VAR_6->page_address);
 VAR_8.buffer = ((void*)0);
 VAR_8.length = 0;
 VAR_8.callback = ((void*)0);

 if ((VAR_9 = FUNC_3(VAR_5, &VAR_8)) != 0) {






  FUNC_2(VAR_5, "mps_user_read_extcfg_header timed out\n");
  return (VAR_0);
 }

 VAR_6->ioc_status = FUNC_0(VAR_8.status);
 if ((VAR_6->ioc_status & VAR_3) ==
     VAR_4) {
  VAR_6->header.PageVersion = VAR_7->PageVersion;
  VAR_6->header.PageNumber = VAR_7->PageNumber;
  VAR_6->header.PageType = VAR_7->PageType;
  VAR_6->header.ExtPageLength = VAR_7->ExtPageLength;
  VAR_6->header.ExtPageType = VAR_7->ExtPageType;
 }

 return (0);
}
