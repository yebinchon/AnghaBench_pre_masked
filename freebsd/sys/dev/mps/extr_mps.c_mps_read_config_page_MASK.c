
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mps_softc {int mps_flags; } ;
struct TYPE_13__ {scalar_t__ PageType; int PageVersion; scalar_t__ PageLength; int PageNumber; } ;
struct TYPE_14__ {int PageVersion; int PageNumber; int ExtPageLength; int ExtPageType; } ;
struct TYPE_8__ {TYPE_6__ Struct; TYPE_7__ Ext; } ;
struct mps_config_params {int * callback; int length; int * buffer; TYPE_1__ hdr; int page_address; int action; } ;
struct TYPE_10__ {int RequestFlags; } ;
struct TYPE_11__ {TYPE_3__ Default; } ;
struct mps_command {int cm_sglsize; int cm_flags; int (* cm_complete ) (struct mps_softc*,struct mps_command*) ;struct mps_config_params* cm_complete_data; TYPE_4__ cm_desc; int * cm_sge; int * cm_data; int cm_length; scalar_t__ cm_req; } ;
struct TYPE_9__ {scalar_t__ PageType; int PageVersion; scalar_t__ PageLength; int PageNumber; } ;
struct TYPE_12__ {int PageBufferSGE; TYPE_2__ Header; int ExtPageLength; int ExtPageType; int PageAddress; scalar_t__ ChainOffset; scalar_t__ SGLFlags; int Action; int Function; } ;
typedef int MPI2_SGE_IO_UNION ;
typedef TYPE_5__ MPI2_CONFIG_REQUEST ;
typedef TYPE_6__ MPI2_CONFIG_PAGE_HEADER ;
typedef TYPE_7__ MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mps_command* FUNC_0 (struct mps_softc*) ;
 int FUNC_1 (struct mps_softc*,struct mps_command*) ;
 int FUNC_2 (struct mps_softc*,int ,char*,int) ;
 int FUNC_3 (struct mps_softc*,struct mps_command*) ;
 int FUNC_4 (struct mps_softc*,struct mps_command*) ;
 int FUNC_5 (struct mps_softc*,struct mps_command**,int ,int ) ;

int
FUNC_6(struct mps_softc *VAR_9, struct mps_config_params *VAR_10)
{
 MPI2_CONFIG_REQUEST *VAR_11;
 struct mps_command *VAR_12;
 int VAR_13;

 if (VAR_9->mps_flags & VAR_8) {
  return (VAR_1);
 }

 VAR_12 = FUNC_0(VAR_9);
 if (VAR_12 == ((void*)0)) {
  return (VAR_1);
 }

 VAR_11 = (MPI2_CONFIG_REQUEST *)VAR_12->cm_req;
 VAR_11->Function = VAR_3;
 VAR_11->Action = VAR_10->action;
 VAR_11->SGLFlags = 0;
 VAR_11->ChainOffset = 0;
 VAR_11->PageAddress = VAR_10->page_address;
 if (VAR_10->hdr.Struct.PageType == VAR_2) {
  MPI2_CONFIG_EXTENDED_PAGE_HEADER *VAR_14;

  VAR_14 = &VAR_10->hdr.Ext;
  VAR_11->ExtPageType = VAR_14->ExtPageType;
  VAR_11->ExtPageLength = VAR_14->ExtPageLength;
  VAR_11->Header.PageType = VAR_2;
  VAR_11->Header.PageLength = 0;
  VAR_11->Header.PageNumber = VAR_14->PageNumber;
  VAR_11->Header.PageVersion = VAR_14->PageVersion;
 } else {
  MPI2_CONFIG_PAGE_HEADER *VAR_15;

  VAR_15 = &VAR_10->hdr.Struct;
  VAR_11->Header.PageType = VAR_15->PageType;
  VAR_11->Header.PageNumber = VAR_15->PageNumber;
  VAR_11->Header.PageLength = VAR_15->PageLength;
  VAR_11->Header.PageVersion = VAR_15->PageVersion;
 }

 VAR_12->cm_data = VAR_10->buffer;
 VAR_12->cm_length = VAR_10->length;
 if (VAR_12->cm_data != ((void*)0)) {
  VAR_12->cm_sge = &VAR_11->PageBufferSGE;
  VAR_12->cm_sglsize = sizeof(MPI2_SGE_IO_UNION);
  VAR_12->cm_flags = VAR_6 | VAR_5;
 } else
  VAR_12->cm_sge = ((void*)0);
 VAR_12->cm_desc.Default.RequestFlags = VAR_4;

 VAR_12->cm_complete_data = VAR_10;
 if (VAR_10->callback != ((void*)0)) {
  VAR_12->cm_complete = FUNC_1;
  return (FUNC_4(VAR_9, VAR_12));
 } else {
  VAR_13 = FUNC_5(VAR_9, &VAR_12, 0, VAR_0);
  if (VAR_13) {
   FUNC_2(VAR_9, VAR_7,
       "Error %d reading config page\n", VAR_13);
   if (VAR_12 != ((void*)0))
    FUNC_3(VAR_9, VAR_12);
   return (VAR_13);
  }
  FUNC_1(VAR_9, VAR_12);
 }

 return (0);
}
