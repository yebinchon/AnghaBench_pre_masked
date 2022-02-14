
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_privsep_data {scalar_t__ priv_socket; scalar_t__ cmd_socket; struct wpa_driver_privsep_data* own_cmd_path; struct wpa_driver_privsep_data* own_socket_path; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wpa_driver_privsep_data*) ;
 int FUNC_3 (struct wpa_driver_privsep_data*) ;
 int FUNC_4 (struct wpa_driver_privsep_data*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct wpa_driver_privsep_data *VAR_2 = VAR_1;

 if (VAR_2->priv_socket >= 0) {
  FUNC_4(VAR_2, VAR_0);
  FUNC_1(VAR_2->priv_socket);
  FUNC_0(VAR_2->priv_socket);
 }

 if (VAR_2->own_socket_path) {
  FUNC_3(VAR_2->own_socket_path);
  FUNC_2(VAR_2->own_socket_path);
 }

 if (VAR_2->cmd_socket >= 0) {
  FUNC_1(VAR_2->cmd_socket);
  FUNC_0(VAR_2->cmd_socket);
 }

 if (VAR_2->own_cmd_path) {
  FUNC_3(VAR_2->own_cmd_path);
  FUNC_2(VAR_2->own_cmd_path);
 }

 FUNC_2(VAR_2);
}
