
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mfi_mpi2_request_descriptor {int dummy; } mfi_mpi2_request_descriptor ;
typedef int uint8_t ;
typedef int uint16_t ;
struct mfi_softc {int mfi_max_fw_cmds; int * request_desc_pool; int mfi_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;

union mfi_mpi2_request_descriptor *
FUNC_2(struct mfi_softc *VAR_0, uint16_t VAR_1)
{
 uint8_t *VAR_2;

 if (VAR_1 >= VAR_0->mfi_max_fw_cmds) {
  FUNC_0(VAR_0->mfi_dev, "Invalid SMID (0x%x)request "
      "for descriptor\n", VAR_1);
  return ((void*)0);
 }
 VAR_2 = VAR_0->request_desc_pool + sizeof(union mfi_mpi2_request_descriptor)
     * VAR_1;
 FUNC_1(VAR_2, 0, sizeof(union mfi_mpi2_request_descriptor));
 return (union mfi_mpi2_request_descriptor *)VAR_2;
}
