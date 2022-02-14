
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct interface {int int_state; int int_if_flags; int int_index; } ;
struct group_req {int gr_group; int gr_interface; } ;
typedef int gr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct group_req*,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,struct group_req*,int) ;
 scalar_t__ VAR_13 ;

void
FUNC_6(struct interface *VAR_14,
      int VAR_15)
{
 struct group_req VAR_16;
 struct sockaddr_in *VAR_17;

 FUNC_1(VAR_14 != ((void*)0));

 if (VAR_12 < 0) {



  if ((VAR_14->int_state & VAR_9) == VAR_9
      || !VAR_15)
   return;
  FUNC_2();
 }

 if (!(VAR_14->int_if_flags & VAR_1)) {
  VAR_14->int_state &= ~(VAR_5 | VAR_6);
  return;
 }

 FUNC_4(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.gr_interface = VAR_14->int_index;
 VAR_17 = (struct sockaddr_in *)&VAR_16.gr_group;
 VAR_17->sin_family = VAR_0;




 if (VAR_13
     || (VAR_14->int_state & VAR_7)
     || !VAR_15) {


  if (VAR_14->int_state & VAR_5) {
   VAR_17->sin_addr.s_addr = FUNC_3(VAR_2);
   if (FUNC_5(VAR_12, VAR_4,
           VAR_11,
           &VAR_16, sizeof(VAR_16)) < 0)
    FUNC_0("MCAST_LEAVE_GROUP ALLHOSTS");
   VAR_14->int_state &= ~VAR_5;
  }

 } else if (!(VAR_14->int_state & VAR_5)) {


  VAR_17->sin_addr.s_addr = FUNC_3(VAR_2);
  if (FUNC_5(VAR_12, VAR_4, VAR_10,
          &VAR_16, sizeof(VAR_16)) < 0) {
   FUNC_0("MCAST_JOIN_GROUP ALLHOSTS");
  } else {
   VAR_14->int_state |= VAR_5;
  }
 }

 if (!VAR_13
     || (VAR_14->int_state & VAR_8)
     || !VAR_15) {


  if (VAR_14->int_state & VAR_6) {
   VAR_17->sin_addr.s_addr = FUNC_3(VAR_3);
   if (FUNC_5(VAR_12, VAR_4,
           VAR_11,
           &VAR_16, sizeof(VAR_16)) < 0)
    FUNC_0("MCAST_LEAVE_GROUP ALLROUTERS");
   VAR_14->int_state &= ~VAR_6;
  }

 } else if (!(VAR_14->int_state & VAR_6)) {


  VAR_17->sin_addr.s_addr = FUNC_3(VAR_3);
  if (FUNC_5(VAR_12, VAR_4, VAR_10,
          &VAR_16, sizeof(VAR_16)) < 0) {
   FUNC_0("MCAST_JOIN_GROUP ALLROUTERS");
  } else {
   VAR_14->int_state |= VAR_6;
  }
 }
}
