
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct sockaddr_storage {scalar_t__ ss_family; scalar_t__ ai_family; int ai_addrlen; struct sockaddr* ai_addr; struct sockaddr_storage* ai_next; int ai_socktype; int ai_flags; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ss_family; scalar_t__ ai_family; int ai_addrlen; struct sockaddr* ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_flags; } ;
typedef int socklen_t ;
typedef int ntop2 ;
typedef int name ;
typedef int hints ;
typedef int from ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_7 ;
 int FUNC_2 (struct sockaddr_storage*) ;
 scalar_t__ FUNC_3 (char*,int *,struct sockaddr_storage*,struct sockaddr_storage**) ;
 scalar_t__ FUNC_4 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int*) ;
 int FUNC_6 (struct sockaddr_storage*,int*) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sockaddr_storage*,int ,int) ;
 int FUNC_10 (struct ssh*) ;
 char* FUNC_11 (struct ssh*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static char *
FUNC_15(struct ssh *VAR_8)
{
 struct sockaddr_storage VAR_9;
 socklen_t VAR_10;
 struct addrinfo VAR_11, *VAR_12, *VAR_13;
 char VAR_14[VAR_2], VAR_15[VAR_2];
 const char *VAR_16 = FUNC_11(VAR_8);


 VAR_10 = sizeof(VAR_9);
 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 if (FUNC_5(FUNC_10(VAR_8),
     (struct sockaddr *)&VAR_9, &VAR_10) < 0) {
  FUNC_0("getpeername failed: %.100s", FUNC_14(VAR_7));
  return FUNC_13(VAR_16);
 }

 FUNC_6(&VAR_9, &VAR_10);
 if (VAR_9.ss_family == VAR_0)
  VAR_10 = sizeof(struct sockaddr_in6);

 FUNC_1("Trying to reverse map address %.100s.", VAR_16);

 if (FUNC_4((struct sockaddr *)&VAR_9, VAR_10, VAR_14, sizeof(VAR_14),
     ((void*)0), 0, VAR_3) != 0) {

  return FUNC_13(VAR_16);
 }






 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.ai_socktype = VAR_5;
 VAR_11.ai_flags = VAR_1;
 if (FUNC_3(VAR_14, ((void*)0), &VAR_11, &VAR_12) == 0) {
  FUNC_7("Nasty PTR record \"%s\" is set up for %s, ignoring",
      VAR_14, VAR_16);
  FUNC_2(VAR_12);
  return FUNC_13(VAR_16);
 }


 FUNC_8(VAR_14);
 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.ai_family = VAR_9.ss_family;
 VAR_11.ai_socktype = VAR_6;
 if (FUNC_3(VAR_14, ((void*)0), &VAR_11, &VAR_13) != 0) {
  FUNC_7("reverse mapping checking getaddrinfo for %.700s "
      "[%s] failed.", VAR_14, VAR_16);
  return FUNC_13(VAR_16);
 }

 for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->ai_next) {
  if (FUNC_4(VAR_12->ai_addr, VAR_12->ai_addrlen, VAR_15,
      sizeof(VAR_15), ((void*)0), 0, VAR_4) == 0 &&
      (FUNC_12(VAR_16, VAR_15) == 0))
    break;
 }
 FUNC_2(VAR_13);

 if (VAR_12 == ((void*)0)) {

  FUNC_7("Address %.100s maps to %.600s, but this does not "
      "map back to the address.", VAR_16, VAR_14);
  return FUNC_13(VAR_16);
 }
 return FUNC_13(VAR_14);
}
