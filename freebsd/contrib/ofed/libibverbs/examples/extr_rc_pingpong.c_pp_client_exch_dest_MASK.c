
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong_dest {int lid; int qpn; int psn; int gid; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct addrinfo*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_8 (int *,char*) ;
 struct pingpong_dest* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*,char*,int,int,int,char*) ;
 int FUNC_14 (char*,char*,int*,int*,int*,char*) ;
 int VAR_2 ;
 int FUNC_15 (char*,int *) ;
 int FUNC_16 (int,char*,int) ;

__attribute__((used)) static struct pingpong_dest *FUNC_17(const char *VAR_3, int VAR_4,
       const struct pingpong_dest *VAR_5)
{
 struct addrinfo *VAR_6, *VAR_7;
 struct addrinfo VAR_8 = {
  .ai_family = VAR_0,
  .ai_socktype = VAR_1
 };
 char *VAR_9;
 char VAR_10[sizeof "0000:000000:000000:00000000000000000000000000000000"];
 int VAR_11;
 int VAR_12 = -1;
 struct pingpong_dest *VAR_13 = ((void*)0);
 char VAR_14[33];

 if (FUNC_0(&VAR_9, "%d", VAR_4) < 0)
  return ((void*)0);

 VAR_11 = FUNC_7(VAR_3, VAR_9, &VAR_8, &VAR_6);

 if (VAR_11 < 0) {
  FUNC_3(VAR_2, "%s for %s:%d\n", FUNC_6(VAR_11), VAR_3, VAR_4);
  FUNC_4(VAR_9);
  return ((void*)0);
 }

 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->ai_next) {
  VAR_12 = FUNC_12(VAR_7->ai_family, VAR_7->ai_socktype, VAR_7->ai_protocol);
  if (VAR_12 >= 0) {
   if (!FUNC_2(VAR_12, VAR_7->ai_addr, VAR_7->ai_addrlen))
    break;
   FUNC_1(VAR_12);
   VAR_12 = -1;
  }
 }

 FUNC_5(VAR_6);
 FUNC_4(VAR_9);

 if (VAR_12 < 0) {
  FUNC_3(VAR_2, "Couldn't connect to %s:%d\n", VAR_3, VAR_4);
  return ((void*)0);
 }

 FUNC_8(&VAR_5->gid, VAR_14);
 FUNC_13(VAR_10, "%04x:%06x:%06x:%s", VAR_5->lid, VAR_5->qpn,
       VAR_5->psn, VAR_14);
 if (FUNC_16(VAR_12, VAR_10, sizeof VAR_10) != sizeof VAR_10) {
  FUNC_3(VAR_2, "Couldn't send local address\n");
  goto out;
 }

 if (FUNC_11(VAR_12, VAR_10, sizeof VAR_10) != sizeof VAR_10 ||
     FUNC_16(VAR_12, "done", sizeof "done") != sizeof "done") {
  FUNC_10("client read/write");
  FUNC_3(VAR_2, "Couldn't read/write remote address\n");
  goto out;
 }

 VAR_13 = FUNC_9(sizeof *VAR_13);
 if (!VAR_13)
  goto out;

 FUNC_14(VAR_10, "%x:%x:%x:%s", &VAR_13->lid, &VAR_13->qpn,
      &VAR_13->psn, VAR_14);
 FUNC_15(VAR_14, &VAR_13->gid);

out:
 FUNC_1(VAR_12);
 return VAR_13;
}
