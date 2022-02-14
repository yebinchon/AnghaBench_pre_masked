
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; int sin_len; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rip {int dummy; } ;
struct ip_mreqn {int imr_ifindex; } ;
struct interface {int int_rip_sock; int int_if_flags; int int_state; char* int_name; int int_index; } ;
typedef int osin ;
typedef int mreqn ;
typedef enum output_type { ____Placeholder_output_type } output_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;






 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (struct ip_mreqn*,int ,int) ;
 int FUNC_7 (char*,char const*,char*,char*,int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_10 ;
 struct interface* VAR_11 ;
 int FUNC_9 (int,struct rip*,int,int,struct sockaddr*,int) ;
 int FUNC_10 (int,int ,int ,struct ip_mreqn*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char const*,char*,struct sockaddr_in*,struct interface*,struct rip*,int) ;

int
FUNC_14(enum output_type VAR_12,
       struct sockaddr_in *VAR_13,
       struct interface *VAR_14,
       struct rip *VAR_15,
       int VAR_16)
{
 struct sockaddr_in VAR_17;
 int VAR_18;
 const char *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_2(VAR_14 != ((void*)0));
 VAR_17 = *VAR_13;
 if (VAR_17.sin_port == 0)
  VAR_17.sin_port = FUNC_4(VAR_8);





 VAR_21 = VAR_10;
 VAR_18 = 0;

 switch (VAR_12) {
 case 129:
  VAR_19 = "Answer Query";
  if (VAR_21 < 0)
   VAR_21 = VAR_14->int_rip_sock;
  break;
 case 128:
  VAR_19 = "Send";
  if (VAR_21 < 0)
   VAR_21 = VAR_14->int_rip_sock;
  VAR_18 = VAR_7;
  break;
 case 131:
  if (VAR_14->int_if_flags & VAR_1) {
   VAR_19 = "Send";
  } else {
   VAR_19 = "Send bcast";
  }
  VAR_18 = VAR_7;
  break;
 case 130:
  if ((VAR_14->int_if_flags & (VAR_1|VAR_0)) ==
      VAR_1) {
   VAR_19 = "Send pt-to-pt";
  } else if (VAR_14->int_state & VAR_6) {
   FUNC_12("abort multicast output via %s"
      " with duplicate address",
      VAR_14->int_name);
   return 0;
  } else {
   VAR_19 = "Send mcast";
   if (VAR_11 != VAR_14) {
    struct ip_mreqn VAR_23;

    FUNC_6(&VAR_23, 0, sizeof(struct ip_mreqn));
    VAR_23.imr_ifindex = VAR_14->int_index;
    if (0 > FUNC_10(VAR_10,
         VAR_3,
         VAR_4,
         &VAR_23,
         sizeof(VAR_23))) {
     VAR_22 = VAR_9;
     FUNC_0("setsockopt(rip_sock, "
            "IP_MULTICAST_IF)");
     VAR_9 = VAR_22;
     VAR_14 = ((void*)0);
     return -1;
    }
    VAR_11 = VAR_14;
   }
   VAR_17.sin_addr.s_addr = FUNC_3(VAR_2);
  }
  break;

 case 133:
 case 132:
 default:



  return -1;
 }

 FUNC_13(VAR_19, "to", &VAR_17, VAR_14, VAR_15, VAR_16);

 VAR_20 = FUNC_9(VAR_21, VAR_15, VAR_16, VAR_18,
       (struct sockaddr *)&VAR_17, sizeof(VAR_17));
 if (VAR_20 < 0
     && (VAR_14 == ((void*)0) || !(VAR_14->int_state & VAR_5))) {
  VAR_22 = VAR_9;
  FUNC_7("%s sendto(%s%s%s.%d): %s", VAR_19,
         VAR_14 != ((void*)0) ? VAR_14->int_name : "",
         VAR_14 != ((void*)0) ? ", " : "",
         FUNC_5(VAR_17.sin_addr),
         FUNC_8(VAR_17.sin_port),
         FUNC_11(VAR_9));
  VAR_9 = VAR_22;
 }

 return VAR_20;
}
