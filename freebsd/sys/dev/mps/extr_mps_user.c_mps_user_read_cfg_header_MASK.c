
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mps_softc {int dummy; } ;
struct TYPE_6__ {int PageType; int PageNumber; scalar_t__ PageLength; scalar_t__ PageVersion; } ;
struct TYPE_5__ {TYPE_2__ Struct; } ;
struct mps_config_params {int status; int * callback; scalar_t__ length; int * buffer; int page_address; int action; TYPE_1__ hdr; } ;
struct TYPE_7__ {int PageType; int PageNumber; } ;
struct mps_cfg_page_req {int ioc_status; TYPE_4__ header; int page_address; } ;
typedef TYPE_2__ MPI2_CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mps_softc*,char*) ;
 int FUNC_4 (struct mps_softc*,struct mps_config_params*) ;

__attribute__((used)) static int
FUNC_5(struct mps_softc *VAR_4,
    struct mps_cfg_page_req *VAR_5)
{
 MPI2_CONFIG_PAGE_HEADER *VAR_6;
 struct mps_config_params VAR_7;
 int VAR_8;

 VAR_6 = &VAR_7.hdr.Struct;
 VAR_7.action = VAR_1;
 VAR_7.page_address = FUNC_2(VAR_5->page_address);
 VAR_6->PageVersion = 0;
 VAR_6->PageLength = 0;
 VAR_6->PageNumber = VAR_5->header.PageNumber;
 VAR_6->PageType = VAR_5->header.PageType;
 VAR_7.buffer = ((void*)0);
 VAR_7.length = 0;
 VAR_7.callback = ((void*)0);

 if ((VAR_8 = FUNC_4(VAR_4, &VAR_7)) != 0) {






  FUNC_3(VAR_4, "read_cfg_header timed out\n");
  return (VAR_0);
 }

 VAR_5->ioc_status = FUNC_1(VAR_7.status);
 if ((VAR_5->ioc_status & VAR_2) ==
     VAR_3) {
  FUNC_0(VAR_6, &VAR_5->header, sizeof(VAR_5->header));
 }

 return (0);
}
