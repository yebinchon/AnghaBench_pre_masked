
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct interface {int int_state; int int_if_flags; int int_index; } ;
struct group_req {int gr_group; int gr_interface; } ;
typedef int gr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct group_req*,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ,int ,struct group_req*,int) ;

__attribute__((used)) static void
FUNC_5(struct interface *VAR_7)
{
 struct group_req VAR_8;
 struct sockaddr_in *VAR_9;

 if (!FUNC_0(VAR_7->int_state)
     && (VAR_7->int_if_flags & VAR_1)
     && !(VAR_7->int_state & VAR_4)) {
  FUNC_3(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.gr_interface = VAR_7->int_index;
  VAR_9 = (struct sockaddr_in *)&VAR_8.gr_group;
  VAR_9->sin_family = VAR_0;



  VAR_9->sin_addr.s_addr = FUNC_2(VAR_2);
  if (FUNC_4(VAR_6, VAR_3, VAR_5,
          &VAR_8, sizeof(VAR_8)) < 0)
   FUNC_1("setsockopt(MCAST_JOIN_GROUP RIP)");
 }
}
