
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ad_u {int dummy; } ad_u ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int imr_ifindex; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct ip_mreqn {int sin_len; TYPE_1__ sin_addr; int imr_ifindex; int sin_family; } ;
struct interface {int int_if_flags; int int_state; char* int_name; int int_addr; int int_index; int int_brdaddr; int int_dstaddr; } ;
typedef int rsin ;
typedef int naddr ;
typedef int mreqn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct interface*) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (char*,char*,char*,int ,int ) ;
 scalar_t__ VAR_8 ;
 struct interface* VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,union ad_u*,int,int,struct sockaddr*,int) ;
 int FUNC_7 (scalar_t__,int ,int ,struct sockaddr_in*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*,int ,int ,struct interface*,union ad_u*,int) ;

__attribute__((used)) static void
FUNC_11(union ad_u *VAR_10,
    int VAR_11,
    struct interface *VAR_12,
    naddr VAR_13,
    int VAR_14)
{
 struct sockaddr_in VAR_15;
 int VAR_16;
 const char *VAR_17;


 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.sin_addr.s_addr = VAR_13;
 VAR_15.sin_family = VAR_0;



 VAR_16 = VAR_6;

 switch (VAR_14) {
 case 0:
 default:
  VAR_17 = "Send";
  break;

 case 1:
  if (VAR_12->int_if_flags & VAR_1) {
   VAR_17 = "Send pt-to-pt";
   VAR_15.sin_addr.s_addr = VAR_12->int_dstaddr;
  } else {
   VAR_17 = "Send broadcast";
   VAR_15.sin_addr.s_addr = VAR_12->int_brdaddr;
  }
  break;

 case 2:
  VAR_17 = "Send multicast";
  if (VAR_12->int_state & VAR_5) {
   FUNC_9("abort multicast output via %s"
      " with duplicate address",
      VAR_12->int_name);
   return;
  }
  if (VAR_9 != VAR_12) {

   struct ip_mreqn VAR_18;

   FUNC_4(&VAR_18, 0, sizeof(struct ip_mreqn));
   VAR_18.imr_ifindex = VAR_12->int_index;
   if (0 > FUNC_7(VAR_8,
        VAR_2, VAR_3,
        &VAR_18,
        sizeof(VAR_18))) {
    FUNC_0("setsockopt(rdisc_sock,"
           "IP_MULTICAST_IF)");
    VAR_9 = ((void*)0);
    return;
   }
   VAR_9 = VAR_12;
  }
  VAR_16 = 0;
  break;
 }

 if (VAR_8 < 0)
  FUNC_1();

 FUNC_10(VAR_17, (VAR_12 ? VAR_12->int_addr : 0), VAR_15.sin_addr.s_addr, VAR_12,
      VAR_10, VAR_11);

 if (0 > FUNC_6(VAR_8, VAR_10, VAR_11, VAR_16,
         (struct sockaddr *)&VAR_15, sizeof(VAR_15))) {
  if (VAR_12 == ((void*)0) || !(VAR_12->int_state & VAR_4))
   FUNC_5("sendto(%s%s%s): %s",
          VAR_12 != ((void*)0) ? VAR_12->int_name : "",
          VAR_12 != ((void*)0) ? ", " : "",
          FUNC_3(VAR_15.sin_addr),
          FUNC_8(VAR_7));
  if (VAR_12 != ((void*)0))
   FUNC_2(VAR_12);
 }
}
