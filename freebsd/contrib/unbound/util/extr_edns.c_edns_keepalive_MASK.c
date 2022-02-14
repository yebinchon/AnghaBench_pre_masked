
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct regional {int dummy; } ;
struct edns_data {int opt_list; } ;
struct comm_point {scalar_t__ type; int tcp_keepalive; int tcp_timeout_msec; } ;
typedef int data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int,scalar_t__*,struct regional*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct edns_data* VAR_2, struct edns_data* VAR_3,
  struct comm_point* VAR_4, struct regional* VAR_5)
{
 if(VAR_4->type == VAR_1)
  return 1;






 if(VAR_4->tcp_keepalive ||
  FUNC_1(VAR_3->opt_list, VAR_0)) {
  int VAR_6 = VAR_4->tcp_timeout_msec / 100;
  uint8_t VAR_7[2];
  VAR_7[0] = (uint8_t)((VAR_6 >> 8) & 0xff);
  VAR_7[1] = (uint8_t)(VAR_6 & 0xff);
  if(!FUNC_0(&VAR_2->opt_list, VAR_0,
   sizeof(VAR_7), VAR_7, VAR_5))
   return 0;
  VAR_4->tcp_keepalive = 1;
 }
 return 1;
}
