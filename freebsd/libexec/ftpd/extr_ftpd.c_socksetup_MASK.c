
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int ai_flags; } ;
typedef int on ;
typedef int hints ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,int const*,int) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int *
FUNC_12(int VAR_12, char *VAR_13, const char *VAR_14)
{
 struct addrinfo VAR_15, *VAR_16, *VAR_17;
 int VAR_18, VAR_19, *VAR_20, *VAR_21;
 const int VAR_22 = 1;

 FUNC_7(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.ai_flags = VAR_1;
 VAR_15.ai_family = VAR_12;
 VAR_15.ai_socktype = VAR_8;
 VAR_18 = FUNC_5(VAR_13, VAR_14, &VAR_15, &VAR_16);
 if (VAR_18) {
  FUNC_11(VAR_6, "%s", FUNC_4(VAR_18));
  if (VAR_18 == VAR_2)
   FUNC_11(VAR_6, "%s", FUNC_10(VAR_11));
  return ((void*)0);
 }


 for (VAR_19 = 0, VAR_17 = VAR_16; VAR_17; VAR_17 = VAR_17->ai_next, VAR_19++)
  ;
 VAR_21 = FUNC_6((VAR_19 + 1) * sizeof(int));
 if (!VAR_21) {
  FUNC_3(VAR_16);
  FUNC_11(VAR_6, "couldn't allocate memory for sockets");
  return ((void*)0);
 }

 *VAR_21 = 0;
 VAR_20 = VAR_21 + 1;
 for (VAR_17 = VAR_16; VAR_17; VAR_17 = VAR_17->ai_next) {
  *VAR_20 = FUNC_9(VAR_17->ai_family, VAR_17->ai_socktype, VAR_17->ai_protocol);
  if (*VAR_20 < 0) {
   FUNC_11(VAR_5, "control socket: %m");
   continue;
  }
  if (FUNC_8(*VAR_20, VAR_9, VAR_10,
      &VAR_22, sizeof(VAR_22)) < 0)
   FUNC_11(VAR_7,
       "control setsockopt (SO_REUSEADDR): %m");
  if (VAR_17->ai_family == VAR_0) {
   if (FUNC_8(*VAR_20, VAR_3, VAR_4,
       &VAR_22, sizeof(VAR_22)) < 0)
    FUNC_11(VAR_7,
        "control setsockopt (IPV6_V6ONLY): %m");
  }
  if (FUNC_0(*VAR_20, VAR_17->ai_addr, VAR_17->ai_addrlen) < 0) {
   FUNC_11(VAR_5, "control bind: %m");
   FUNC_1(*VAR_20);
   continue;
  }
  (*VAR_21)++;
  VAR_20++;
 }

 if (VAR_16)
  FUNC_3(VAR_16);

 if (*VAR_21 == 0) {
  FUNC_11(VAR_6, "control socket: Couldn't bind to any socket");
  FUNC_2(VAR_21);
  return ((void*)0);
 }
 return(VAR_21);
}
