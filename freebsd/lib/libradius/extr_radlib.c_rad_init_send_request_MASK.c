
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rad_handle {scalar_t__ type; int fd; int* out; scalar_t__ pass_pos; scalar_t__ eap_msg; int out_len; int srv; int num_servers; TYPE_2__* servers; scalar_t__ chap_pass; int bindto; } ;
struct TYPE_4__ {scalar_t__ is_dead; scalar_t__ next_probe; scalar_t__ dead_time; scalar_t__ num_tries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct rad_handle*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (struct rad_handle*,int ,int*,struct timeval*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(struct rad_handle *VAR_9, int *VAR_10, struct timeval *VAR_11)
{
 int VAR_12;
 time_t VAR_13;
 struct sockaddr_in VAR_14;

 if (VAR_9->type == VAR_5) {
  FUNC_2(VAR_9, "denied function call");
  return (-1);
 }

 if (VAR_9->fd == -1) {
  if ((VAR_9->fd = FUNC_6(VAR_2, VAR_7, VAR_1)) == -1) {
   FUNC_2(VAR_9, "Cannot create socket: %s", FUNC_7(VAR_8));
   return -1;
  }
  FUNC_4(&VAR_14, 0, sizeof VAR_14);
  VAR_14.sin_len = sizeof VAR_14;
  VAR_14.sin_family = VAR_0;
  VAR_14.sin_addr.s_addr = VAR_9->bindto;
  VAR_14.sin_port = FUNC_3(0);
  if (FUNC_0(VAR_9->fd, (const struct sockaddr *)&VAR_14,
      sizeof VAR_14) == -1) {
   FUNC_2(VAR_9, "bind: %s", FUNC_7(VAR_8));
   FUNC_1(VAR_9->fd);
   VAR_9->fd = -1;
   return -1;
  }
 }

 if (VAR_9->out[VAR_3] != VAR_6) {

  if (VAR_9->pass_pos || VAR_9->chap_pass) {
   FUNC_2(VAR_9, "User or Chap Password"
       " in accounting request");
   return -1;
  }
 } else {
  if (VAR_9->eap_msg == 0) {

   if (VAR_9->pass_pos == 0 && !VAR_9->chap_pass) {
    FUNC_2(VAR_9, "No User or Chap Password"
        " attributes given");
    return -1;
   }
   if (VAR_9->pass_pos != 0 && VAR_9->chap_pass) {
    FUNC_2(VAR_9, "Both User and Chap Password"
        " attributes given");
    return -1;
   }
  }
 }


 VAR_9->out[VAR_4] = VAR_9->out_len >> 8;
 VAR_9->out[VAR_4+1] = VAR_9->out_len;

 VAR_9->srv = 0;
 VAR_13 = FUNC_8(((void*)0));
 for (VAR_12 = 0; VAR_12 < VAR_9->num_servers; VAR_12++)
  VAR_9->servers[VAR_12].num_tries = 0;

 for (VAR_12 = 0; VAR_12 < VAR_9->num_servers; VAR_12++) {
  if (VAR_9->servers[VAR_12].is_dead == 0)
   break;
  if (VAR_9->servers[VAR_12].dead_time &&
      VAR_9->servers[VAR_12].next_probe <= VAR_13) {
       VAR_9->servers[VAR_12].is_dead = 0;
   break;
  }
  VAR_9->srv++;
 }


 if (VAR_9->srv == VAR_9->num_servers) {
  for (VAR_12 = 0; VAR_12 < VAR_9->num_servers; VAR_12++) {
       VAR_9->servers[VAR_12].is_dead = 0;
   VAR_9->servers[VAR_12].next_probe = 0;
  }
  VAR_9->srv = 0;
 }

 return FUNC_5(VAR_9, 0, VAR_10, VAR_11);
}
