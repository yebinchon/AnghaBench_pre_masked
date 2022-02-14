
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsocket {scalar_t__ type; int state; TYPE_2__* cm_id; } ;
struct pollfd {int events; int revents; int fd; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int fd; } ;


 scalar_t__ VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rsocket*) ;
 int FUNC_1 (struct rsocket*,int,int (*) (struct rsocket*)) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct pollfd*,int,int ) ;
 scalar_t__ FUNC_3 (struct rsocket*) ;
 scalar_t__ FUNC_4 (struct rsocket*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct rsocket*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct rsocket*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct rsocket*,int,int (*) (struct rsocket*)) ;

__attribute__((used)) static int FUNC_8(struct rsocket *VAR_14, int VAR_15,
        int VAR_16, int (*VAR_17)(struct rsocket *VAR_18))
{
 struct pollfd VAR_19;
 short VAR_20;
 int VAR_21;

check_cq:
 if ((VAR_14->type == VAR_6) && ((VAR_14->state & VAR_9) ||
      (VAR_14->state == VAR_10) || (VAR_14->state & VAR_11))) {
  FUNC_7(VAR_14, VAR_16, VAR_17);

  VAR_20 = 0;
  if ((VAR_15 & VAR_3) && FUNC_4(VAR_14))
   VAR_20 |= VAR_3;
  if ((VAR_15 & VAR_4) && FUNC_3(VAR_14))
   VAR_20 |= VAR_4;
  if (!(VAR_14->state & VAR_9)) {
   if (VAR_14->state == VAR_10)
    VAR_20 |= VAR_2;
   else
    VAR_20 |= VAR_1;
  }

  return VAR_20;
 } else if (VAR_14->type == VAR_5) {
  FUNC_1(VAR_14, VAR_16, VAR_17);

  VAR_20 = 0;
  if ((VAR_15 & VAR_3) && FUNC_6(VAR_14))
   VAR_20 |= VAR_3;
  if ((VAR_15 & VAR_4) && FUNC_0(VAR_14))
   VAR_20 |= VAR_4;

  return VAR_20;
 }

 if (VAR_14->state == VAR_12) {
  VAR_19.fd = VAR_14->cm_id->channel->fd;
  VAR_19.events = VAR_15;
  VAR_19.revents = 0;
  FUNC_2(&VAR_19, 1, 0);
  return VAR_19.revents;
 }

 if (VAR_14->state & VAR_13) {
  VAR_21 = FUNC_5(VAR_14);
  if (VAR_21 && (VAR_7 == VAR_0)) {
   VAR_7 = 0;
  } else {
   goto check_cq;
  }
 }

 if (VAR_14->state == VAR_8) {
  VAR_20 = 0;
  if (VAR_15 & VAR_4)
   VAR_20 |= VAR_4;
  if (VAR_15 & VAR_3)
   VAR_20 |= VAR_3;
  VAR_20 |= VAR_1;
  return VAR_20;
 }

 return 0;
}
