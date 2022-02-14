
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_13__ {int pattern; int buffer; int size; int off; } ;
typedef TYPE_1__ qla_wr_flash_t ;
struct TYPE_14__ {int rd; int val; int reg; int direct; } ;
typedef TYPE_2__ qla_reg_val_t ;
struct TYPE_15__ {int rev_id; int subsys_dev_id; int subsys_ven_id; int dev_id; int ven_id; } ;
typedef TYPE_3__ qla_rd_pci_ids_t ;
struct TYPE_16__ {int data; int off; } ;
typedef TYPE_4__ qla_rd_flash_t ;
struct TYPE_17__ {int pci_dev; } ;
typedef TYPE_5__ qla_host_t ;
struct TYPE_18__ {int size; int off; } ;
typedef TYPE_6__ qla_erase_flash_t ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,int *) ;
 int FUNC_9 (TYPE_5__*,int ,int *,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int ,int ,int ) ;

int
FUNC_11(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5,
        struct thread *VAR_6)
{
        qla_host_t *VAR_7;
        int VAR_8 = 0;
        qla_reg_val_t *VAR_9;
        qla_rd_flash_t *VAR_10;
 qla_wr_flash_t *VAR_11;
 qla_rd_pci_ids_t *VAR_12;
 device_t VAR_13;

        if ((VAR_7 = (qla_host_t *)VAR_2->si_drv1) == ((void*)0))
                return VAR_0;

 VAR_13= VAR_7->pci_dev;

        switch(VAR_3) {

        case 131:

                VAR_9 = (qla_reg_val_t *)VAR_4;

                if (VAR_9->direct) {
                        if (VAR_9->rd) {
                                VAR_9->val = FUNC_0(VAR_7, VAR_9->reg);
                        } else {
                                FUNC_1(VAR_7, VAR_9->reg, VAR_9->val);
                        }
                } else {
                        if ((VAR_8 = FUNC_9(VAR_7, VAR_9->reg, &VAR_9->val,
                                VAR_9->rd)))
                                VAR_8 = VAR_0;
                }
                break;

        case 130:
                VAR_10 = (qla_rd_flash_t *)VAR_4;
                if ((VAR_8 = FUNC_8(VAR_7, VAR_10->off, &VAR_10->data)))
                        VAR_8 = VAR_0;
                break;

        case 128:
                VAR_11 = (qla_wr_flash_t *)VAR_4;
                if ((VAR_8 = FUNC_10(VAR_7, VAR_11->off, VAR_11->size,
     VAR_11->buffer, VAR_11->pattern)))
                        VAR_8 = VAR_0;
                break;


 case 132:
  if (FUNC_7(VAR_7, ((qla_erase_flash_t *)VAR_4)->off,
   ((qla_erase_flash_t *)VAR_4)->size))
   VAR_8 = VAR_0;
  break;

 case 129:
  VAR_12 = (qla_rd_pci_ids_t *)VAR_4;
  VAR_12->ven_id = FUNC_5(VAR_13);
  VAR_12->dev_id = FUNC_2(VAR_13);
  VAR_12->subsys_ven_id = FUNC_4(VAR_13);
  VAR_12->subsys_dev_id = FUNC_3(VAR_13);
  VAR_12->rev_id = FUNC_6(VAR_13, VAR_1, 1);
  break;

        default:
                break;
        }

        return VAR_8;
}
