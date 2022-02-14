
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct ocs_hw_io_s {int dummy; } ;
struct TYPE_12__ {int scsi_ini_cb_arg; int (* scsi_ini_cb ) (TYPE_1__*,int ,int *,int ,int ) ;int ref; struct TYPE_12__* io_to_abort; struct TYPE_12__* ocs; } ;
typedef TYPE_1__ ocs_t ;
typedef int ocs_scsi_io_status_e ;
typedef int ocs_remote_node_t ;
typedef TYPE_1__ ocs_io_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_9(struct ocs_hw_io_s *VAR_8, ocs_remote_node_t *VAR_9, uint32_t VAR_10, int32_t VAR_11,
 uint32_t VAR_12, void *VAR_13)
{
 ocs_io_t *VAR_14 = VAR_13;
 ocs_t *VAR_15;
 ocs_scsi_io_status_e VAR_16 = VAR_3;

 FUNC_0(VAR_14, -1);
 FUNC_0(FUNC_1(VAR_14), -1);
 FUNC_0(VAR_14->ocs, -1);
 FUNC_0(VAR_14->io_to_abort, -1);
 VAR_15 = VAR_14->ocs;

 FUNC_2(VAR_15, "status %d ext %d\n", VAR_11, VAR_12);


 FUNC_4(&VAR_14->io_to_abort->ref);

 FUNC_7(VAR_14);

 switch (VAR_11) {
 case 128:
  VAR_16 = VAR_3;
  break;
 case 129:
  if (VAR_12 == VAR_6) {
   VAR_16 = VAR_0;
  } else if (VAR_12 == VAR_7) {
   VAR_16 = VAR_4;
  } else if (VAR_12 == VAR_5) {
   VAR_16 = VAR_1;
  } else {
   FUNC_3(VAR_15, "Unhandled local reject 0x%x/0x%x\n", VAR_11, VAR_12);
   VAR_16 = VAR_2;
  }
  break;
 default:
  VAR_16 = VAR_2;
  break;
 }

 if (VAR_14->scsi_ini_cb) {
  (*VAR_14->scsi_ini_cb)(VAR_14, VAR_16, ((void*)0), 0, VAR_14->scsi_ini_cb_arg);
 } else {
  FUNC_6(VAR_14);
 }

 FUNC_5(VAR_15);
 return 0;
}
