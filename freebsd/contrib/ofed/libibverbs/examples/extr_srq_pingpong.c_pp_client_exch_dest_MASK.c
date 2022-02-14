
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong_dest {int lid; int qpn; int psn; int gid; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_3 ;
 int FUNC_15 (char*,int *) ;
 int FUNC_16 (int,char*,int) ;

__attribute__((used)) static struct pingpong_dest *FUNC_17(const char *VAR_4, int VAR_5,
       const struct pingpong_dest *VAR_6)
{
 struct addrinfo *VAR_7, *VAR_8;
 struct addrinfo VAR_9 = {
  .ai_family = VAR_0,
  .ai_socktype = VAR_2
 };
 char *VAR_10;
 char VAR_11[sizeof "0000:000000:000000:00000000000000000000000000000000"];
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = -1;
 struct pingpong_dest *VAR_16 = ((void*)0);
 char VAR_17[33];

 if (FUNC_0(&VAR_10, "%d", VAR_5) < 0)
  return ((void*)0);

 VAR_12 = FUNC_7(VAR_4, VAR_10, &VAR_9, &VAR_7);

 if (VAR_12 < 0) {
  FUNC_3(VAR_3, "%s for %s:%d\n", FUNC_6(VAR_12), VAR_4, VAR_5);
  FUNC_4(VAR_10);
  return ((void*)0);
 }

 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->ai_next) {
  VAR_15 = FUNC_12(VAR_8->ai_family, VAR_8->ai_socktype, VAR_8->ai_protocol);
  if (VAR_15 >= 0) {
   if (!FUNC_2(VAR_15, VAR_8->ai_addr, VAR_8->ai_addrlen))
    break;
   FUNC_1(VAR_15);
   VAR_15 = -1;
  }
 }

 FUNC_5(VAR_7);
 FUNC_4(VAR_10);

 if (VAR_15 < 0) {
  FUNC_3(VAR_3, "Couldn't connect to %s:%d\n", VAR_4, VAR_5);
  return ((void*)0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {
  FUNC_8(&VAR_6[VAR_14].gid, VAR_17);
  FUNC_13(VAR_11, "%04x:%06x:%06x:%s", VAR_6[VAR_14].lid,
     VAR_6[VAR_14].qpn, VAR_6[VAR_14].psn, VAR_17);
  if (FUNC_16(VAR_15, VAR_11, sizeof VAR_11) != sizeof VAR_11) {
   FUNC_3(VAR_3, "Couldn't send local address\n");
   goto out;
  }
 }

 VAR_16 = FUNC_9(VAR_1 * sizeof *VAR_16);
 if (!VAR_16)
  goto out;

 for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {
  VAR_12 = 0;
  while (VAR_12 < sizeof VAR_11) {
   VAR_13 = FUNC_11(VAR_15, VAR_11 + VAR_12, sizeof VAR_11 - VAR_12);
   if (VAR_13 < 0) {
    FUNC_10("client read");
    FUNC_3(VAR_3, "%d/%d: Couldn't read remote address [%d]\n",
     VAR_12, (int) sizeof VAR_11, VAR_14);
    goto out;
   }
   VAR_12 += VAR_13;
  }

  FUNC_14(VAR_11, "%x:%x:%x:%s", &VAR_16[VAR_14].lid, &VAR_16[VAR_14].qpn,
       &VAR_16[VAR_14].psn, VAR_17);
  FUNC_15(VAR_17, &VAR_16[VAR_14].gid);
 }

 if (FUNC_16(VAR_15, "done", sizeof "done") != sizeof "done") {
  FUNC_10("client write");
  goto out;
 }
out:
 FUNC_1(VAR_15);
 return VAR_16;
}
