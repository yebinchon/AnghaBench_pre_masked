
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpr_softc {int buffer_dmat; } ;
struct TYPE_7__ {scalar_t__ PageType; int PageVersion; int PageLength; int PageNumber; } ;
struct TYPE_6__ {scalar_t__ PageType; int PageVersion; int PageNumber; int ExtPageLength; int ExtPageType; } ;
struct TYPE_8__ {TYPE_2__ Struct; TYPE_1__ Ext; } ;
struct mpr_config_params {int (* callback ) (struct mpr_softc*,struct mpr_config_params*) ;TYPE_3__ hdr; void* status; } ;
struct mpr_command {int cm_flags; scalar_t__ cm_reply; int cm_dmamap; int * cm_data; struct mpr_config_params* cm_complete_data; } ;
struct TYPE_9__ {scalar_t__ PageType; int PageVersion; int PageLength; int PageNumber; } ;
struct TYPE_10__ {TYPE_4__ Header; int ExtPageLength; int ExtPageType; void* IOCStatus; } ;
typedef TYPE_5__ MPI2_CONFIG_REPLY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpr_softc*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mpr_softc*,struct mpr_command*) ;
 int FUNC_4 (struct mpr_softc*,struct mpr_config_params*) ;

__attribute__((used)) static void
FUNC_5(struct mpr_softc *VAR_4, struct mpr_command *VAR_5)
{
 MPI2_CONFIG_REPLY *VAR_6;
 struct mpr_config_params *VAR_7;

 FUNC_0(VAR_4);
 VAR_7 = VAR_5->cm_complete_data;

 if (VAR_5->cm_data != ((void*)0)) {
  FUNC_1(VAR_4->buffer_dmat, VAR_5->cm_dmamap,
      VAR_0);
  FUNC_2(VAR_4->buffer_dmat, VAR_5->cm_dmamap);
 }





 if ((VAR_5->cm_flags & VAR_3) != 0) {
  VAR_7->status = VAR_2;
  goto done;
 }

 VAR_6 = (MPI2_CONFIG_REPLY *)VAR_5->cm_reply;
 if (VAR_6 == ((void*)0)) {
  VAR_7->status = VAR_2;
  goto done;
 }
 VAR_7->status = VAR_6->IOCStatus;
 if (VAR_7->hdr.Struct.PageType == VAR_1) {
  VAR_7->hdr.Ext.ExtPageType = VAR_6->ExtPageType;
  VAR_7->hdr.Ext.ExtPageLength = VAR_6->ExtPageLength;
  VAR_7->hdr.Ext.PageType = VAR_6->Header.PageType;
  VAR_7->hdr.Ext.PageNumber = VAR_6->Header.PageNumber;
  VAR_7->hdr.Ext.PageVersion = VAR_6->Header.PageVersion;
 } else {
  VAR_7->hdr.Struct.PageType = VAR_6->Header.PageType;
  VAR_7->hdr.Struct.PageNumber = VAR_6->Header.PageNumber;
  VAR_7->hdr.Struct.PageLength = VAR_6->Header.PageLength;
  VAR_7->hdr.Struct.PageVersion = VAR_6->Header.PageVersion;
 }

done:
 FUNC_3(VAR_4, VAR_5);
 if (VAR_7->callback != ((void*)0))
  VAR_7->callback(VAR_4, VAR_7);

 return;
}
