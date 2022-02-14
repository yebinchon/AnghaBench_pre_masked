
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct comm_point {int fd; scalar_t__ type; struct timeval* timeout; TYPE_1__* ev; scalar_t__ tcp_is_reading; int tcp_free; } ;
struct TYPE_2__ {int ev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,struct timeval*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int,int) ;

void
FUNC_9(struct comm_point* VAR_7, int VAR_8, int VAR_9)
{
 FUNC_8(VAR_3, "comm point start listening %d (%d msec)",
  VAR_7->fd==-1?VAR_8:VAR_7->fd, VAR_9);
 if(VAR_7->type == VAR_6 && !VAR_7->tcp_free) {

  return;
 }
 if(VAR_9 != -1 && VAR_9 != 0) {
  if(!VAR_7->timeout) {
   VAR_7->timeout = (struct timeval*)FUNC_3(sizeof(
    struct timeval));
   if(!VAR_7->timeout) {
    FUNC_2("cpsl: malloc failed. No net read.");
    return;
   }
  }
  FUNC_5(VAR_7->ev->ev, VAR_1);

  VAR_7->timeout->tv_sec = VAR_9/1000;
  VAR_7->timeout->tv_usec = (VAR_9%1000)*1000;

 }
 if(VAR_7->type == VAR_5 || VAR_7->type == VAR_4) {
  FUNC_6(VAR_7->ev->ev, VAR_0|VAR_2);
  if(VAR_7->tcp_is_reading)
   FUNC_5(VAR_7->ev->ev, VAR_0);
  else FUNC_5(VAR_7->ev->ev, VAR_2);
 }
 if(VAR_8 != -1) {
  if(VAR_7->fd != -1) {

   FUNC_0(VAR_7->fd);



  }
  VAR_7->fd = VAR_8;
  FUNC_7(VAR_7->ev->ev, VAR_7->fd);
 }
 if(FUNC_4(VAR_7->ev->ev, VAR_9==0?((void*)0):VAR_7->timeout) != 0) {
  FUNC_2("event_add failed. in cpsl.");
 }
}
