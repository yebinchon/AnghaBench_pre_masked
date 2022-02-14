
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_softc {int dummy; } ;
struct TYPE_4__ {int PageType; int PageNumber; int PageLength; int PageVersion; } ;
struct TYPE_3__ {TYPE_2__ Struct; } ;
struct mpr_config_params {int status; int * callback; void* length; void* buffer; void* page_address; int action; TYPE_1__ hdr; } ;
struct mpr_cfg_page_req {int ioc_status; int len; int page_address; } ;
typedef TYPE_2__ MPI2_CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mpr_softc*,char*) ;
 int FUNC_3 (struct mpr_softc*,struct mpr_config_params*) ;

__attribute__((used)) static int
FUNC_4(struct mpr_softc *VAR_3, struct mpr_cfg_page_req *VAR_4,
    void *VAR_5)
{
 MPI2_CONFIG_PAGE_HEADER *VAR_6, *VAR_7;
 struct mpr_config_params VAR_8;
 int VAR_9;

 VAR_6 = VAR_5;
 VAR_7 = &VAR_8.hdr.Struct;
 VAR_7->PageVersion = VAR_6->PageVersion;
 VAR_7->PageLength = VAR_6->PageLength;
 VAR_7->PageNumber = VAR_6->PageNumber;
 VAR_7->PageType = VAR_6->PageType & VAR_2;
 VAR_8.action = VAR_1;
 VAR_8.page_address = FUNC_1(VAR_4->page_address);
 VAR_8.buffer = VAR_5;
 VAR_8.length = FUNC_1(VAR_4->len);
 VAR_8.callback = ((void*)0);

 if ((VAR_9 = FUNC_3(VAR_3, &VAR_8)) != 0) {
  FUNC_2(VAR_3, "mpr_user_read_cfg_page timed out\n");
  return (VAR_0);
 }

 VAR_4->ioc_status = FUNC_0(VAR_8.status);
 return (0);
}
