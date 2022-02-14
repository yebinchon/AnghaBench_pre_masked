
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ SMID; } ;
union mfi_mpi2_request_descriptor {TYPE_1__ header; } ;
typedef scalar_t__ uint16_t ;
struct mfi_softc {int dummy; } ;
struct mfi_command {int dummy; } ;
struct mfi_cmd_tbolt {scalar_t__ index; } ;


 scalar_t__ FUNC_0 (struct mfi_softc*,struct mfi_command*,struct mfi_cmd_tbolt*) ;
 struct mfi_cmd_tbolt* FUNC_1 (struct mfi_softc*,struct mfi_command*) ;
 union mfi_mpi2_request_descriptor* FUNC_2 (struct mfi_softc*,scalar_t__) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_cmd_tbolt*,struct mfi_command*) ;

union mfi_mpi2_request_descriptor *
FUNC_4(struct mfi_softc *VAR_0, struct mfi_command *VAR_1)
{
 struct mfi_cmd_tbolt *VAR_2;
 union mfi_mpi2_request_descriptor *VAR_3 = ((void*)0);
 uint16_t VAR_4;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_4 = VAR_2->index;
 VAR_3 = FUNC_2(VAR_0, VAR_4-1);
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_0, VAR_2, VAR_1);
  return (((void*)0));
 }

 if (FUNC_0(VAR_0, VAR_1, VAR_2) != 0) {
  FUNC_3(VAR_0, VAR_2, VAR_1);
  return (((void*)0));
 }
 VAR_3->header.SMID = VAR_4;
 return VAR_3;
}
