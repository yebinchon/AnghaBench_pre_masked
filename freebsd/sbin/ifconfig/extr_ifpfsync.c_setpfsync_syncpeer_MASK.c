
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct pfsyncreq {TYPE_1__ pfsyncr_syncpeer; } ;
struct afswtch {int dummy; } ;
struct addrinfo {TYPE_3__* ai_addr; int ai_socktype; scalar_t__ ai_family; } ;
typedef int hints ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {scalar_t__ ifr_data; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 TYPE_4__ VAR_4 ;
 int FUNC_6 (int,int ,scalar_t__) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;

void
FUNC_8(const char *VAR_5, int VAR_6, int VAR_7, const struct afswtch *VAR_8)
{
 struct pfsyncreq VAR_9;
 struct addrinfo VAR_10, *VAR_11;
 int VAR_12;

 FUNC_0((char *)&VAR_9, sizeof(struct pfsyncreq));
 VAR_4.ifr_data = (caddr_t)&VAR_9;

 if (FUNC_6(VAR_7, VAR_1, (caddr_t)&VAR_4) == -1)
  FUNC_1(1, "SIOCGETPFSYNC");

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_family = VAR_0;
 VAR_10.ai_socktype = VAR_3;

 if ((VAR_12 = FUNC_5(VAR_5, ((void*)0), &VAR_10, &VAR_11)) != 0)
  FUNC_2(1, "error in parsing address string: %s",
      FUNC_4(VAR_12));

 if (VAR_11->ai_addr->sa_family != VAR_0)
  FUNC_2(1, "only IPv4 addresses supported for the syncpeer");

 VAR_9.pfsyncr_syncpeer.s_addr = ((struct sockaddr_in *)
     VAR_11->ai_addr)->sin_addr.s_addr;

 if (FUNC_6(VAR_7, VAR_2, (caddr_t)&VAR_4) == -1)
  FUNC_1(1, "SIOCSETPFSYNC");
 FUNC_3(VAR_11);
}
