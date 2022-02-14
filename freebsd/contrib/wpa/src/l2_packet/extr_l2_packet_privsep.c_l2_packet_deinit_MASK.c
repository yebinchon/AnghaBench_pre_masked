
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2_packet_data {scalar_t__ fd; struct l2_packet_data* own_socket_path; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct l2_packet_data*) ;
 int FUNC_3 (struct l2_packet_data*) ;
 int FUNC_4 (struct l2_packet_data*,int ,int *,int ) ;

void FUNC_5(struct l2_packet_data *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->fd >= 0) {
  FUNC_4(VAR_1, VAR_0, ((void*)0), 0);
  FUNC_1(VAR_1->fd);
  FUNC_0(VAR_1->fd);
 }

 if (VAR_1->own_socket_path) {
  FUNC_3(VAR_1->own_socket_path);
  FUNC_2(VAR_1->own_socket_path);
 }

 FUNC_2(VAR_1);
}
