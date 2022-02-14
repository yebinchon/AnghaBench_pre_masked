
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int * bls_cb_arg; int (* bls_cb ) (TYPE_1__*,int ,int ,void*) ;struct TYPE_7__* ocs; } ;
typedef TYPE_1__ ocs_t ;
typedef int ocs_scsi_io_status_e ;
typedef int (* ocs_scsi_io_cb_t ) (TYPE_1__*,int ,int ,void*) ;
typedef int ocs_remote_node_t ;
typedef TYPE_1__ ocs_io_t ;
typedef int ocs_hw_io_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_io_t *VAR_2, ocs_remote_node_t *VAR_3, uint32_t VAR_4, int32_t VAR_5, uint32_t VAR_6, void *VAR_7)
{
 ocs_io_t *VAR_8 = VAR_7;
 ocs_t *VAR_9;
 ocs_scsi_io_status_e VAR_10;

 FUNC_1(VAR_8, -1);
 FUNC_1(VAR_8->ocs, -1);

 VAR_9 = VAR_8->ocs;


 if (VAR_5) {
  FUNC_0(VAR_8, "s=%#x x=%#x\n", VAR_5, VAR_6);
  VAR_10 = VAR_0;
 } else {
  VAR_10 = VAR_1;
 }

 if (VAR_8->bls_cb) {
  ocs_scsi_io_cb_t VAR_11 = VAR_8->bls_cb;
  void *VAR_12 = VAR_8->bls_cb_arg;

  VAR_8->bls_cb = ((void*)0);
  VAR_8->bls_cb_arg = ((void*)0);


  VAR_11(VAR_8, VAR_10, 0, VAR_12);
 }

 FUNC_2(VAR_9);
 return 0;
}
