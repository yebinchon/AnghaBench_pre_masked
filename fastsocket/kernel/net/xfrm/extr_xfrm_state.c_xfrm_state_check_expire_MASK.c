
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; int dying; } ;
struct TYPE_5__ {scalar_t__ hard_byte_limit; scalar_t__ hard_packet_limit; scalar_t__ soft_byte_limit; scalar_t__ soft_packet_limit; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; scalar_t__ use_time; } ;
struct xfrm_state {TYPE_3__ km; TYPE_2__ lft; TYPE_1__ curlft; int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct xfrm_state*,int ,int ) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct xfrm_state *VAR_4)
{
 if (!VAR_4->curlft.use_time)
  VAR_4->curlft.use_time = FUNC_0();

 if (VAR_4->km.state != VAR_2)
  return -VAR_0;

 if (VAR_4->curlft.bytes >= VAR_4->lft.hard_byte_limit ||
     VAR_4->curlft.packets >= VAR_4->lft.hard_packet_limit) {
  VAR_4->km.state = VAR_1;
  FUNC_2(&VAR_4->timer, VAR_3);
  return -VAR_0;
 }

 if (!VAR_4->km.dying &&
     (VAR_4->curlft.bytes >= VAR_4->lft.soft_byte_limit ||
      VAR_4->curlft.packets >= VAR_4->lft.soft_packet_limit)) {
  VAR_4->km.dying = 1;
  FUNC_1(VAR_4, 0, 0);
 }
 return 0;
}
