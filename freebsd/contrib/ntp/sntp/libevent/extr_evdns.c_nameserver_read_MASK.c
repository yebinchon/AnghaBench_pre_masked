
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nameserver {int base; scalar_t__ timedout; int address; int socket; } ;
typedef int ss ;
typedef int packet ;
typedef int ev_socklen_t ;
typedef int addrbuf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr*,char*,int) ;
 scalar_t__ FUNC_3 (struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct nameserver*,int ) ;
 int FUNC_8 (int ,void*,int,int ,struct sockaddr*,int*) ;
 int FUNC_9 (int ,int *,int const) ;

__attribute__((used)) static void
FUNC_10(struct nameserver *VAR_1) {
 struct sockaddr_storage VAR_2;
 ev_socklen_t VAR_3 = sizeof(VAR_2);
 u8 VAR_4[1500];
 char VAR_5[128];
 FUNC_0(VAR_1->base);

 for (;;) {
  const int VAR_6 = FUNC_8(VAR_1->socket, (void*)VAR_4,
      sizeof(VAR_4), 0,
      (struct sockaddr*)&VAR_2, &VAR_3);
  if (VAR_6 < 0) {
   int VAR_7 = FUNC_5(VAR_1->socket);
   if (FUNC_1(VAR_7))
    return;
   FUNC_7(VAR_1,
       FUNC_4(VAR_7));
   return;
  }
  if (FUNC_3((struct sockaddr*)&VAR_2,
   (struct sockaddr*)&VAR_1->address, 0)) {
   FUNC_6(VAR_0, "Address mismatch on received "
       "DNS packet.  Apparent source was %s",
       FUNC_2(
        (struct sockaddr *)&VAR_2,
        VAR_5, sizeof(VAR_5)));
   return;
  }

  VAR_1->timedout = 0;
  FUNC_9(VAR_1->base, VAR_4, VAR_6);
 }
}
