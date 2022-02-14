
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_filter_ucast {int is_rx_filter; int type; int opcode; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_filter_ucast*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_filter_ucast*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_3)
{
 struct ecore_filter_ucast VAR_4;
 struct ecore_dev *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4, sizeof(struct ecore_filter_ucast));

 VAR_4.opcode = VAR_1;
 VAR_4.type = VAR_0;
 VAR_4.is_rx_filter = 1;

 VAR_5 = &VAR_3->cdev;

 VAR_6 = FUNC_1(VAR_5, &VAR_4, VAR_2, ((void*)0));

 return (VAR_6);
}
