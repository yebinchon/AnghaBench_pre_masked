
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int val ;
typedef int trans_t ;
typedef int timeout ;
typedef int time_t ;
typedef int timeval ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef int pbuf ;
struct TYPE_5__ {char* address; int port; int pgt; } ;
struct TYPE_6__ {int flags; int soc; int reconnect_time; int reconnect_cnt1; TYPE_1__ target; TYPE_3__* op; int reconnect_cnt; int redirect_cnt; } ;
typedef TYPE_2__ isess_t ;
struct TYPE_7__ {int port; char* targetAddress; int sockbufsize; int targetPortalGroupTag; } ;
typedef TYPE_3__ isc_opt_t ;
typedef int hints ;






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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,char*,char*,...) ;
 int FUNC_3 (int) ;
 int VAR_18 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct addrinfo*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_9 (int,int ,int ,int*,int*) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int,char*,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (int) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static trans_t
FUNC_21(isess_t *VAR_20)
{
     isc_opt_t *VAR_21 = VAR_20->op;
     int VAR_22, VAR_23, VAR_24;
     struct addrinfo *VAR_25, *VAR_26, VAR_27;
     char VAR_28[10];

     FUNC_3(3);
     if(VAR_20->flags & (VAR_5|VAR_6)) {
   FUNC_19(VAR_2, "%s", (VAR_20->flags & VAR_5)
   ? "Reconnect": "Redirected");

   FUNC_2(1, "%s", (VAR_20->flags & VAR_5) ? "Reconnect": "Redirected");
   FUNC_13(VAR_20->soc, VAR_7);

   VAR_20->soc = -1;

   VAR_20->flags &= ~VAR_4;
   if(VAR_20->flags & VAR_6) {
        VAR_20->redirect_cnt++;
        VAR_20->flags |= VAR_5;
   } else
        FUNC_14(2);
   VAR_20->reconnect_cnt++;
     }

     FUNC_15(VAR_28, sizeof(VAR_28), "%d", VAR_21->port);
     FUNC_10(&VAR_27, 0, sizeof(VAR_27));
     VAR_27.ai_family = VAR_3;
     VAR_27.ai_socktype = VAR_8;
     FUNC_2(1, "targetAddress=%s port=%d", VAR_21->targetAddress, VAR_21->port);
     if((VAR_22 = FUNC_8(VAR_21->targetAddress, VAR_28, &VAR_27, &VAR_26)) != 0) {
          FUNC_4(VAR_19, "getaddrinfo(%s): %s\n", VAR_21->targetAddress, FUNC_7(VAR_22));
          return 0;
     }
     VAR_20->flags &= ~VAR_4;
     VAR_23 = 0;
     VAR_24 = -1;
     for(VAR_25 = VAR_26; VAR_25; VAR_25 = VAR_25->ai_next) {
   VAR_24 = FUNC_16(VAR_25->ai_family, VAR_25->ai_socktype, VAR_25->ai_protocol);
   if (VAR_24 == -1)
        continue;



   VAR_22 = 1;
   if(FUNC_12(VAR_24, VAR_9, VAR_12, &VAR_22, (socklen_t)sizeof(VAR_22)) < 0) {
        FUNC_4(VAR_19, "Cannot set socket SO_REUSEADDR %d: %s\n\n",
         VAR_18, FUNC_18(VAR_18));
   }

   if(FUNC_1(VAR_24, VAR_25->ai_addr, VAR_25->ai_addrlen) == 0)
        break;
   VAR_23 = VAR_18;
   FUNC_0(VAR_24);
   VAR_24 = -1;
     }
     FUNC_6(VAR_26);
     if(VAR_24 != -1) {
   VAR_20->soc = VAR_24;
   if(VAR_20->op->sockbufsize) {
        VAR_22 = VAR_20->op->sockbufsize * 1024;
        if((FUNC_12(VAR_20->soc, VAR_9, VAR_13, &VAR_22, sizeof(VAR_22)) < 0)
    || (FUNC_12(VAR_20->soc, VAR_9, VAR_10, &VAR_22, sizeof(VAR_22)) < 0)) {
      FUNC_4(VAR_19, "Cannot set socket sndbuf & rcvbuf to %d err=%d %s\n",
       VAR_22, VAR_18, FUNC_18(VAR_18));
      return 0;
        }
   }
   VAR_20->flags |= VAR_4;
   return VAR_15;
     }

     FUNC_4(VAR_19, "errno=%d\n", VAR_23);
     FUNC_11("connect");
     switch(VAR_23) {
     case 131:
     case 130:
     case 129:
     case 128:
   if((VAR_20->flags & VAR_6) == 0) {
        if(FUNC_17(VAR_21->targetAddress, VAR_20->target.address) != 0) {
      FUNC_19(VAR_2, "reconnecting to original target address");
      FUNC_5(VAR_21->targetAddress);
      VAR_21->targetAddress = VAR_20->target.address;
      VAR_21->port = VAR_20->target.port;
      VAR_21->targetPortalGroupTag = VAR_20->target.pgt;
      return VAR_15;
        }
   }
   FUNC_14(5);
   return VAR_15;
     default:
   return 0;
     }
}
