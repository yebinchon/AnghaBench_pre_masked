
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_privsep_data {int priv_addr; int priv_socket; } ;
struct sockaddr {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int,int ,struct sockaddr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct wpa_driver_privsep_data *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->priv_socket, &VAR_3, sizeof(VAR_3), 0,
       (struct sockaddr *) &VAR_2->priv_addr,
       sizeof(VAR_2->priv_addr));
 if (VAR_4 < 0)
  FUNC_2(VAR_0, "sendto: %s", FUNC_1(VAR_1));
 return VAR_4 < 0 ? -1 : 0;
}
