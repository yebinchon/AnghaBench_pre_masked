
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvme_completion {int status; } ;
struct mpr_softc {int dummy; } ;
struct mpr_command {scalar_t__ cm_sense; scalar_t__ cm_reply; } ;
struct TYPE_2__ {int ErrorResponseCount; } ;
typedef TYPE_1__ Mpi26NVMeEncapsulatedErrorReply_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mpr_command*) ;

__attribute__((used)) static u8
FUNC_2(struct mpr_softc *VAR_1, struct mpr_command *VAR_2)
{
 Mpi26NVMeEncapsulatedErrorReply_t *VAR_3;
 struct nvme_completion *VAR_4 = ((void*)0);
 u8 VAR_5 = VAR_0;

 VAR_3 =(Mpi26NVMeEncapsulatedErrorReply_t *)VAR_2->cm_reply;
 if (FUNC_0(VAR_3->ErrorResponseCount)){
  VAR_4 = (struct nvme_completion *)VAR_2->cm_sense;
  VAR_5 = FUNC_1(
      VAR_4->status, VAR_2);
 }
 return VAR_5;
}
