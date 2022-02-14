
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listenaddr {char* rdomain; struct addrinfo* addrs; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; } ;
typedef int strport ;
typedef int socksize ;
typedef int socklen_t ;
typedef int ntop ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_12 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,int ,char*,int,char*,int,int) ;
 int FUNC_7 (int,int ,int ,int*,int*) ;
 scalar_t__ FUNC_8 (int,int ) ;
 int* VAR_13 ;
 int FUNC_9 (char*,char*,char*,char*,char*) ;
 size_t VAR_14 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static void
FUNC_18(struct listenaddr *VAR_15)
{
 int VAR_16, VAR_17;
 struct addrinfo *VAR_18;
 char VAR_19[VAR_5], VAR_20[VAR_6];
 int VAR_21;
 socklen_t VAR_22;

 for (VAR_18 = VAR_15->addrs; VAR_18; VAR_18 = VAR_18->ai_next) {
  if (VAR_18->ai_family != VAR_0 && VAR_18->ai_family != VAR_1)
   continue;
  if (VAR_14 >= VAR_4)
   FUNC_4("Too many listen sockets. "
       "Enlarge MAX_LISTEN_SOCKS");
  if ((VAR_16 = FUNC_6(VAR_18->ai_addr, VAR_18->ai_addrlen,
      VAR_19, sizeof(VAR_19), VAR_20, sizeof(VAR_20),
      VAR_7|VAR_8)) != 0) {
   FUNC_3("getnameinfo failed: %.100s",
       FUNC_15(VAR_16));
   continue;
  }

  VAR_17 = FUNC_14(VAR_18->ai_family, VAR_18->ai_socktype,
      VAR_18->ai_protocol);
  if (VAR_17 < 0) {

   FUNC_17("socket: %.100s", FUNC_16(VAR_12));
   continue;
  }
  if (FUNC_10(VAR_17) == -1) {
   FUNC_1(VAR_17);
   continue;
  }
  if (FUNC_5(VAR_17, VAR_3, VAR_2) == -1) {
   FUNC_17("socket: CLOEXEC: %s", FUNC_16(VAR_12));
   FUNC_1(VAR_17);
   continue;
  }

  FUNC_12(VAR_17);
  if (VAR_15->rdomain != ((void*)0) &&
      FUNC_11(VAR_17, VAR_15->rdomain) == -1) {
   FUNC_1(VAR_17);
   continue;
  }


  if (VAR_18->ai_family == VAR_1)
   FUNC_13(VAR_17);

  FUNC_2("Bind to port %s on %s.", VAR_20, VAR_19);

  VAR_22 = sizeof(VAR_21);
  FUNC_7(VAR_17, VAR_9, VAR_10, &VAR_21, &VAR_22);
  FUNC_2("Server TCP RWIN socket size: %d", VAR_21);


  if (FUNC_0(VAR_17, VAR_18->ai_addr, VAR_18->ai_addrlen) < 0) {
   FUNC_3("Bind to port %s on %s failed: %.200s.",
       VAR_20, VAR_19, FUNC_16(VAR_12));
   FUNC_1(VAR_17);
   continue;
  }
  VAR_13[VAR_14] = VAR_17;
  VAR_14++;


  if (FUNC_8(VAR_17, VAR_11) < 0)
   FUNC_4("listen on [%s]:%s: %.100s",
       VAR_19, VAR_20, FUNC_16(VAR_12));
  FUNC_9("Server listening on %s port %s%s%s.",
      VAR_19, VAR_20,
      VAR_15->rdomain == ((void*)0) ? "" : " rdomain ",
      VAR_15->rdomain == ((void*)0) ? "" : VAR_15->rdomain);
 }
}
