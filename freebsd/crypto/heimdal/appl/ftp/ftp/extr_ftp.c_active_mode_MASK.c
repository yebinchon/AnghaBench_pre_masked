
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
typedef int socklen_t ;
typedef int data_addr_ss ;
typedef int addr_str ;
struct TYPE_11__ {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,TYPE_2__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*,int*) ;
 int * FUNC_5 (int,int ,char*,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 TYPE_2__* VAR_8 ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int
FUNC_19 (void)
{
    int VAR_12 = 0;
    socklen_t VAR_13;
    int VAR_14;

noport:
    VAR_6->sa_family = VAR_8->sa_family;
    FUNC_12 (VAR_6, FUNC_10 (VAR_8),
     VAR_10 ? 0 : FUNC_11 (VAR_8));

    if (VAR_5 != -1)
 FUNC_1 (VAR_5);
    VAR_5 = FUNC_9 (VAR_6->sa_family, VAR_3, 0);
    if (VAR_5 < 0) {
 FUNC_17 ("socket");
 if (VAR_12)
     VAR_10 = 1;
 return (1);
    }
    if (!VAR_10)
 FUNC_14 (VAR_5, 1);
    if (FUNC_0 (VAR_5, VAR_6, FUNC_16 (VAR_6)) < 0) {
 FUNC_17 ("bind");
 goto bad;
    }
    if (VAR_9 & VAR_4)
 FUNC_13 (VAR_5);
    VAR_13 = sizeof (data_addr_ss);
    if (FUNC_4 (VAR_5, VAR_6, &VAR_13) < 0) {
 FUNC_17 ("getsockname");
 goto bad;
    }
    if (FUNC_6 (VAR_5, 1) < 0)
 FUNC_17 ("listen");
    if (VAR_10) {
 char VAR_15[256];
 int VAR_16;
 int VAR_17;

 if (FUNC_5 (VAR_6->sa_family, FUNC_10 (VAR_6),
         VAR_15, sizeof(VAR_15)) == ((void*)0))
     FUNC_3 (1, "inet_ntop failed");
 switch (VAR_6->sa_family) {
 case 129 :
     VAR_16 = 1;
     break;





 default :
     FUNC_3 (1, "bad address family %d", VAR_6->sa_family);
 }


 VAR_17 = VAR_11;
 if (VAR_7 == 0)
     VAR_11 = -1;

 VAR_14 = FUNC_2 ("EPRT |%d|%s|%d|",
     VAR_16, VAR_15,
     FUNC_8(FUNC_11 (VAR_6)));
 VAR_11 = VAR_17;

 if (VAR_14 == VAR_1) {
     struct sockaddr_in *VAR_18 = (struct sockaddr_in *)VAR_6;

     unsigned int VAR_19 = FUNC_7(VAR_18->sin_addr.s_addr);
     unsigned int VAR_20 = FUNC_8(VAR_18->sin_port);

     if (VAR_6->sa_family != 129) {
  FUNC_18 ("remote server doesn't support EPRT");
  goto bad;
     }

     VAR_14 = FUNC_2("PORT %d,%d,%d,%d,%d,%d",
        (VAR_19 >> 24) & 0xff,
        (VAR_19 >> 16) & 0xff,
        (VAR_19 >> 8) & 0xff,
        VAR_19 & 0xff,
        (VAR_20 >> 8) & 0xff,
        VAR_20 & 0xff);
     if (VAR_14 == VAR_1 && VAR_10 == -1) {
  VAR_10 = 0;
  VAR_12 = 1;
  goto noport;
     }
     return (VAR_14 != VAR_0);
 }
 return VAR_14 != VAR_0;
    }
    if (VAR_12)
 VAR_10 = 1;





    return (0);
bad:
    FUNC_1 (VAR_5);
    VAR_5 = -1;
    if (VAR_12)
 VAR_10 = 1;
    return (1);
}
