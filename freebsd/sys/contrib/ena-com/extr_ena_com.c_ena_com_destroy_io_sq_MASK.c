
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ena_com_io_sq {scalar_t__ direction; int idx; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct TYPE_4__ {int opcode; } ;
struct TYPE_3__ {int sq_identity; int sq_idx; } ;
struct ena_admin_aq_destroy_sq_cmd {TYPE_2__ aq_common_descriptor; TYPE_1__ sq; } ;
struct ena_admin_acq_entry {int dummy; } ;
struct ena_admin_acq_destroy_sq_resp_desc {int dummy; } ;
typedef int destroy_resp ;
typedef int destroy_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ena_admin_aq_destroy_sq_cmd*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_dev *VAR_7,
     struct ena_com_io_sq *VAR_8)
{
 struct ena_com_admin_queue *VAR_9 = &VAR_7->admin_queue;
 struct ena_admin_aq_destroy_sq_cmd VAR_10;
 struct ena_admin_acq_destroy_sq_resp_desc VAR_11;
 u8 VAR_12;
 int VAR_13;

 FUNC_2(&VAR_10, 0x0, sizeof(VAR_10));

 if (VAR_8->direction == VAR_5)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_1;

 VAR_10.sq.sq_identity |= (VAR_12 <<
  VAR_4) &
  VAR_3;

 VAR_10.sq.sq_idx = VAR_8->idx;
 VAR_10.aq_common_descriptor.opcode = VAR_0;

 VAR_13 = FUNC_0(VAR_9,
         (struct ena_admin_aq_entry *)&VAR_10,
         sizeof(VAR_10),
         (struct ena_admin_acq_entry *)&VAR_11,
         sizeof(VAR_11));

 if (FUNC_3(VAR_13 && (VAR_13 != VAR_6)))
  FUNC_1("failed to destroy io sq error: %d\n", VAR_13);

 return VAR_13;
}
