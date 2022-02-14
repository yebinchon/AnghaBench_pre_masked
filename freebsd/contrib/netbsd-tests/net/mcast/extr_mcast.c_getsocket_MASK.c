
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct sockaddr const* ai_addr; int ai_addrlen; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef int hints ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct addrinfo*,int) ;
 int FUNC_2 (int,struct addrinfo*) ;
 int FUNC_3 (int,struct sockaddr const*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct sockaddr const*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct addrinfo*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,struct sockaddr const*,int ) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_4, const char *VAR_5,
    int (*VAR_6)(int, const struct sockaddr *, socklen_t), socklen_t *VAR_7,
    bool VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 struct addrinfo VAR_12, *VAR_13, *VAR_14;
 const char *VAR_15 = "?";

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ai_family = VAR_0;
 VAR_12.ai_socktype = VAR_2;
 VAR_9 = FUNC_8(VAR_4, VAR_5, &VAR_12, &VAR_13);
 if (VAR_9)
  FUNC_0(VAR_1, "Can't resolve %s:%s (%s)", VAR_4, VAR_5,
      FUNC_7(VAR_9));

 VAR_10 = -1;
 for (VAR_14 = VAR_13; VAR_14; VAR_14 = VAR_14->ai_next) {
  VAR_10 = FUNC_10(VAR_14->ai_family, VAR_14->ai_socktype, VAR_14->ai_protocol);
  if (VAR_10 == -1) {
   VAR_11 = VAR_3;
   VAR_15 = "socket";
   continue;
  }
  if (FUNC_2(VAR_10, VAR_14) == -1) {
   VAR_15 = "allow v4 mapped";
   goto out;
  }
  if ((*VAR_6)(VAR_10, VAR_14->ai_addr, VAR_14->ai_addrlen) == -1) {
   VAR_15 = VAR_6 == FUNC_3 ? "bind" : "connect";
   goto out;
  }
  if ((VAR_6 == FUNC_3 || VAR_6 == FUNC_5) && FUNC_1(VAR_10, VAR_14, VAR_8) == -1) {
   VAR_15 = "join group";
   goto out;
  }
  *VAR_7 = VAR_14->ai_addrlen;
  break;
out:
  VAR_11 = VAR_3;
  FUNC_4(VAR_10);
  VAR_10 = -1;
  continue;
 }
 FUNC_6(VAR_13);
 if (VAR_10 == -1)
  FUNC_0(VAR_1, "%s (%s)", VAR_15, FUNC_11(VAR_11));
 return VAR_10;
}
