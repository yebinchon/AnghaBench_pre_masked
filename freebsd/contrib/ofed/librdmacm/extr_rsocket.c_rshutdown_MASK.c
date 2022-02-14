
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int opts; int fd_flags; int state; TYPE_1__* cm_id; int ctrl_seqno; } ;
struct TYPE_2__ {int recv_cq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 struct rsocket* FUNC_2 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct rsocket*) ;
 int VAR_13 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,struct rsocket*,int ) ;
 int FUNC_6 (struct rsocket*,int ) ;
 int FUNC_7 (struct rsocket*,int ,int ) ;
 int VAR_14 ;
 int FUNC_8 (struct rsocket*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(int VAR_17, int VAR_18)
{
 struct rsocket *VAR_19;
 int VAR_20, VAR_21 = 0;

 VAR_19 = FUNC_2(&VAR_9, VAR_17);
 if (!VAR_19)
  return FUNC_0(VAR_0);
 if (VAR_19->opts & VAR_4)
  FUNC_5(&VAR_16, VAR_19, VAR_6);

 if (VAR_19->fd_flags & VAR_1)
  FUNC_8(VAR_19, 0);

 if (VAR_19->state & VAR_12) {
  if (VAR_18 == VAR_7) {
   VAR_20 = VAR_2;
   VAR_19->state &= ~(VAR_14 | VAR_15);
  } else if (VAR_18 == VAR_8) {
   VAR_19->state &= ~VAR_15;
   VAR_20 = (VAR_19->state & VAR_14) ?
    VAR_3 : VAR_2;
  } else {
   VAR_19->state &= ~VAR_14;
   if (VAR_19->state & VAR_15)
    goto out;
   VAR_20 = VAR_2;
  }
  if (!FUNC_3(VAR_19)) {
   VAR_21 = FUNC_7(VAR_19, 0, VAR_11);
   if (VAR_21)
    goto out;
  }

  if ((VAR_19->state & VAR_12) && FUNC_3(VAR_19)) {
   VAR_19->ctrl_seqno++;
   VAR_21 = FUNC_6(VAR_19, FUNC_4(VAR_5, VAR_20));
  }
 }

 if (VAR_19->state & VAR_12)
  FUNC_7(VAR_19, 0, VAR_10);

out:
 if ((VAR_19->fd_flags & VAR_1) && (VAR_19->state & VAR_12))
  FUNC_8(VAR_19, VAR_19->fd_flags);

 if (VAR_19->state & VAR_13) {

  FUNC_1(VAR_19->cm_id->recv_cq, 0);
  FUNC_9(VAR_19->cm_id);
 }

 return VAR_21;
}
