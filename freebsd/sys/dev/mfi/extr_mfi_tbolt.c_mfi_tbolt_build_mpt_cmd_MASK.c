
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int RequestFlags; scalar_t__ SMID; } ;
union mfi_mpi2_request_descriptor {TYPE_1__ header; } ;
typedef scalar_t__ uint16_t ;
struct mfi_softc {int mfi_dev; } ;
struct mfi_command {scalar_t__ cm_extra_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union mfi_mpi2_request_descriptor*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct mfi_softc*,struct mfi_command*) ;
 union mfi_mpi2_request_descriptor* FUNC_3 (struct mfi_softc*,scalar_t__) ;

union mfi_mpi2_request_descriptor *
FUNC_4(struct mfi_softc *VAR_2, struct mfi_command *VAR_3)
{
 union mfi_mpi2_request_descriptor *VAR_4 = ((void*)0);
 uint16_t VAR_5;
 if (FUNC_2(VAR_2, VAR_3)) {
  FUNC_1(VAR_2->mfi_dev, "Couldn't build MFI pass thru "
      "cmd\n");
  return ((void*)0);
 }

 VAR_5 = VAR_3->cm_extra_frames;

 VAR_4 = FUNC_3(VAR_2, VAR_5 - 1);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_4, sizeof(*VAR_4));
 VAR_4->header.RequestFlags = (VAR_1 <<
     VAR_0);
 VAR_4->header.SMID = VAR_5;
 return VAR_4;
}
