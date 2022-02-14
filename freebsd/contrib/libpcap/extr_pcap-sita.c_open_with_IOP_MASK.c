
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* ip; int fd; int find_fd; scalar_t__ first_time; TYPE_4__* serv_addr; } ;
typedef TYPE_2__ unit_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_7__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(unit_t *VAR_6, int VAR_7) {
 int VAR_8;
 char *VAR_9;

 if (VAR_6->serv_addr == ((void*)0)) {
  VAR_6->serv_addr = FUNC_4(sizeof(struct sockaddr_in));


  if (VAR_6->serv_addr == ((void*)0)) {
   FUNC_1(VAR_5, "malloc() request for u->serv_addr failed, value of errno is: %d\n", VAR_4);
   return 0;
  }

 }
 VAR_9 = VAR_6->ip;

 FUNC_5((char *)VAR_6->serv_addr, 0, sizeof(struct sockaddr_in));
 VAR_6->serv_addr->sin_family = VAR_0;
 VAR_6->serv_addr->sin_addr.s_addr = FUNC_3(VAR_9);
 VAR_6->serv_addr->sin_port = FUNC_2(VAR_1);

 if ((VAR_8 = FUNC_6(VAR_0, VAR_3, 0)) < 0) {
  FUNC_1(VAR_5, "pcap can't open a socket for connecting to IOP at %s\n", VAR_9);
  return 0;
 }
 if (FUNC_0(VAR_8, (struct sockaddr *)VAR_6->serv_addr, sizeof(struct sockaddr_in)) < 0) {
  FUNC_1(VAR_5, "pcap can't connect to IOP at %s\n", VAR_9);
  return 0;
 }
 if (VAR_7 == VAR_2) VAR_6->fd = VAR_8;
 else VAR_6->find_fd = VAR_8;
 VAR_6->first_time = 0;
 return VAR_8;
}
