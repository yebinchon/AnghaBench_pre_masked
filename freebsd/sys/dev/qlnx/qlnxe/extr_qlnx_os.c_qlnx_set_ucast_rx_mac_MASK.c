
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_filter_ucast {int opcode; int is_rx_filter; int * mac; scalar_t__ vport_to_add_to; int type; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef enum ecore_filter_opcode { ____Placeholder_ecore_filter_opcode } ecore_filter_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_filter_ucast*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_filter_ucast*,int ,int *) ;
 int FUNC_2 (int *,unsigned char*,int ) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_3,
 enum ecore_filter_opcode VAR_4,
 unsigned char VAR_5[VAR_2])
{
 struct ecore_filter_ucast VAR_6;
 struct ecore_dev *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_3->cdev;

 FUNC_0(&VAR_6, sizeof(struct ecore_filter_ucast));

        VAR_6.opcode = VAR_4;
        VAR_6.type = VAR_0;
        VAR_6.is_rx_filter = 1;
        VAR_6.vport_to_add_to = 0;
        FUNC_2(&VAR_6.mac[0], VAR_5, VAR_2);

 VAR_8 = FUNC_1(VAR_7, &VAR_6, VAR_1, ((void*)0));

        return (VAR_8);
}
