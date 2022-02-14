
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostap_driver_data {scalar_t__ ioctl_sock; scalar_t__ sock; int wps_ie; int generic_ie; int netlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hostap_driver_data*) ;
 int FUNC_2 (struct hostap_driver_data*,int ,int ) ;
 int FUNC_3 (struct hostap_driver_data*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct hostap_driver_data *VAR_3 = VAR_2;

 FUNC_4(VAR_3->netlink);
 (void) FUNC_3(VAR_3, 0);
 (void) FUNC_2(VAR_3, VAR_0, 0);
 (void) FUNC_2(VAR_3, VAR_1, 0);

 if (VAR_3->ioctl_sock >= 0)
  FUNC_0(VAR_3->ioctl_sock);

 if (VAR_3->sock >= 0)
  FUNC_0(VAR_3->sock);

 FUNC_5(VAR_3->generic_ie);
 FUNC_5(VAR_3->wps_ie);

 FUNC_1(VAR_3);
}
