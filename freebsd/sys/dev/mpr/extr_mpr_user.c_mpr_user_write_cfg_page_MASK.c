
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct mpr_softc {int dummy; } ;
struct TYPE_4__ {int PageType; int PageNumber; int PageLength; int PageVersion; } ;
struct TYPE_3__ {TYPE_2__ Struct; } ;
struct mpr_config_params {int status; int * callback; void* length; void* buffer; void* page_address; int action; TYPE_1__ hdr; } ;
struct mpr_cfg_page_req {int ioc_status; int len; int page_address; } ;
typedef TYPE_2__ MPI2_CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mpr_softc*,char*,...) ;
 int FUNC_3 (struct mpr_softc*,struct mpr_config_params*) ;

__attribute__((used)) static int
FUNC_4(struct mpr_softc *VAR_7,
    struct mpr_cfg_page_req *VAR_8, void *VAR_9)
{
 MPI2_CONFIG_PAGE_HEADER *VAR_10, *VAR_11;
 struct mpr_config_params VAR_12;
 u_int VAR_13;
 int VAR_14;

 VAR_10 = VAR_9;
 VAR_11 = &VAR_12.hdr.Struct;
 VAR_13 = VAR_10->PageType & VAR_4;
 if (VAR_13 != VAR_3 &&
     VAR_13 != VAR_5) {
  FUNC_2(VAR_7, "page type 0x%x not changeable\n",
   VAR_10->PageType & VAR_6);
  return (VAR_0);
 }






 VAR_11->PageVersion = VAR_10->PageVersion;
 VAR_11->PageLength = VAR_10->PageLength;
 VAR_11->PageNumber = VAR_10->PageNumber;
 VAR_11->PageType = VAR_10->PageType;
 VAR_12.action = VAR_2;
 VAR_12.page_address = FUNC_1(VAR_8->page_address);
 VAR_12.buffer = VAR_9;
 VAR_12.length = FUNC_1(VAR_8->len);
 VAR_12.callback = ((void*)0);

 if ((VAR_14 = FUNC_3(VAR_7, &VAR_12)) != 0) {
  FUNC_2(VAR_7, "mpr_write_cfg_page timed out\n");
  return (VAR_1);
 }

 VAR_8->ioc_status = FUNC_0(VAR_12.status);
 return (0);
}
