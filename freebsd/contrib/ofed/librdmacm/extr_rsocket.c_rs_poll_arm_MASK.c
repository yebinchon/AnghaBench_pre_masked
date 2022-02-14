
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rsocket {scalar_t__ type; scalar_t__ state; int epfd; TYPE_3__* cm_id; } ;
struct pollfd {scalar_t__ revents; int events; int fd; } ;
typedef int nfds_t ;
struct TYPE_6__ {TYPE_2__* channel; TYPE_1__* recv_cq_channel; } ;
struct TYPE_5__ {int fd; } ;
struct TYPE_4__ {int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct rsocket* FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct rsocket*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pollfd *VAR_5, struct pollfd *VAR_6, nfds_t VAR_7)
{
 struct rsocket *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_0(&VAR_2, VAR_6[VAR_9].fd);
  if (VAR_8) {
   VAR_6[VAR_9].revents = FUNC_1(VAR_8, VAR_6[VAR_9].events, 0, VAR_4);
   if (VAR_6[VAR_9].revents)
    return 1;

   if (VAR_8->type == VAR_1) {
    if (VAR_8->state >= VAR_3)
     VAR_5[VAR_9].fd = VAR_8->cm_id->recv_cq_channel->fd;
    else
     VAR_5[VAR_9].fd = VAR_8->cm_id->channel->fd;
   } else {
    VAR_5[VAR_9].fd = VAR_8->epfd;
   }
   VAR_5[VAR_9].events = VAR_0;
  } else {
   VAR_5[VAR_9].fd = VAR_6[VAR_9].fd;
   VAR_5[VAR_9].events = VAR_6[VAR_9].events;
  }
  VAR_5[VAR_9].revents = 0;
 }
 return 0;
}
