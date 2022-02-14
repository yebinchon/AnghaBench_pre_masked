
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ecore_filter_accept_flags {int update_rx_mode_config; int update_tx_mode_config; int tx_accept_filter; int rx_accept_filter; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_filter_accept_flags*,int) ;
 int FUNC_1 (struct ecore_dev*,int ,struct ecore_filter_accept_flags,int,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_4, uint8_t VAR_5)
{
 struct ecore_filter_accept_flags VAR_6;
 int VAR_7 = 0;
 struct ecore_dev *VAR_8;

 VAR_8 = &VAR_4->cdev;

 FUNC_0(&VAR_6, sizeof(struct ecore_filter_accept_flags));

 VAR_6.update_rx_mode_config = 1;
 VAR_6.rx_accept_filter = VAR_5;

 VAR_6.update_tx_mode_config = 1;
 VAR_6.tx_accept_filter = VAR_2 |
  VAR_1 | VAR_0;

 VAR_7 = FUNC_1(VAR_8, 0, VAR_6, 0, 0,
   VAR_3, ((void*)0));

 return (VAR_7);
}
