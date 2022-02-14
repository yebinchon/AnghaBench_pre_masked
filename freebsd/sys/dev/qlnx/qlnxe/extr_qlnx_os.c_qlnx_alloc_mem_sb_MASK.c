
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u16 ;
struct status_block_e4 {int dummy; } ;
struct ecore_sb_info {int dummy; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_4__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 struct status_block_e4* FUNC_0 (struct ecore_dev*,int *,int) ;
 int FUNC_1 (struct ecore_dev*,struct status_block_e4*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct ecore_dev*,struct ecore_sb_info*,struct status_block_e4*,int ,int ) ;

int
FUNC_4(qlnx_host_t *VAR_1, struct ecore_sb_info *VAR_2, u16 VAR_3)
{
        struct status_block_e4 *VAR_4;
        bus_addr_t VAR_5;
        int VAR_6;
 uint32_t VAR_7;
 struct ecore_dev *VAR_8;

 VAR_8 = &VAR_1->cdev;

 VAR_7 = sizeof(*VAR_4);
 VAR_4 = FUNC_0(VAR_8, (&VAR_5), VAR_7);

        if (!VAR_4) {
                FUNC_2(VAR_1, "Status block allocation failed\n");
                return -VAR_0;
        }

        VAR_6 = FUNC_3(VAR_8, VAR_2, VAR_4, VAR_5, VAR_3);
        if (VAR_6) {
                FUNC_1(VAR_8, VAR_4, VAR_5, VAR_7);
        }

 return VAR_6;
}
