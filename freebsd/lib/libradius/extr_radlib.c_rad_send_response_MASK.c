
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rad_handle {scalar_t__ type; int* out; int out_len; scalar_t__* in; size_t srv; TYPE_1__* servers; int fd; } ;
struct TYPE_2__ {int addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rad_handle*,char*,...) ;
 int FUNC_1 (struct rad_handle*,int) ;
 int FUNC_2 (struct rad_handle*,int) ;
 int FUNC_3 (int ,int*,int,int ,struct sockaddr const*,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct rad_handle *VAR_5)
{
 int VAR_6;

 if (VAR_5->type != VAR_2) {
  FUNC_0(VAR_5, "denied function call");
  return (-1);
 }

 VAR_5->out[VAR_1] = VAR_5->out_len >> 8;
 VAR_5->out[VAR_1+1] = VAR_5->out_len;

 FUNC_1(VAR_5,
     (VAR_5->in[VAR_0] == VAR_3) ? 1 : 0);
 FUNC_2(VAR_5, 1);


 VAR_6 = FUNC_3(VAR_5->fd, VAR_5->out, VAR_5->out_len, 0,
     (const struct sockaddr *)&VAR_5->servers[VAR_5->srv].addr,
     sizeof VAR_5->servers[VAR_5->srv].addr);
 if (VAR_6 != VAR_5->out_len) {
  if (VAR_6 == -1)
   FUNC_0(VAR_5, "sendto: %s", FUNC_4(VAR_4));
  else
   FUNC_0(VAR_5, "sendto: short write");
  return -1;
 }

 return 0;
}
