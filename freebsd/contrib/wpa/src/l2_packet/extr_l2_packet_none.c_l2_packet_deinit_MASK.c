
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2_packet_data {scalar_t__ fd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct l2_packet_data*) ;

void FUNC_2(struct l2_packet_data *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->fd >= 0) {
  FUNC_0(VAR_0->fd);

 }

 FUNC_1(VAR_0);
}
