
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct peer {int flags; int cast_flags; int last_event; int num_events; scalar_t__ reach; scalar_t__ keyid; int status; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

u_short
FUNC_1(
 register struct peer *VAR_8
 )
{
 u_short VAR_9;

 VAR_9 = VAR_8->status;
 if (VAR_6 & VAR_8->flags)
  VAR_9 |= VAR_3;
 if (VAR_8->keyid)
  VAR_9 |= VAR_0;
 if (VAR_5 & VAR_8->flags)
  VAR_9 |= VAR_1;
 if (VAR_8->reach)
  VAR_9 |= VAR_4;
 if (VAR_7 & VAR_8->cast_flags)
  VAR_9 |= VAR_2;

 return FUNC_0(VAR_9, VAR_8->num_events, VAR_8->last_event);
}
