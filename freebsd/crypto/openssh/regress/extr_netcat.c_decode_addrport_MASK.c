
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_addrlen; int ai_addr; int ai_socktype; int ai_flags; int ai_family; } ;
typedef scalar_t__ socklen_t ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct sockaddr*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, const char *VAR_5, struct sockaddr *VAR_6,
    socklen_t VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct addrinfo VAR_11, *VAR_12;

 FUNC_0(&VAR_11, sizeof(VAR_11));
 VAR_11.ai_family = VAR_8 ? VAR_1 : VAR_2;
 VAR_11.ai_flags = VAR_9 ? VAR_0 : 0;
 VAR_11.ai_socktype = VAR_3;
 VAR_10 = FUNC_4(VAR_4, VAR_5, &VAR_11, &VAR_12);

 if (VAR_10 != 0) {
  if (!VAR_9) {
   FUNC_1(1, "getaddrinfo(\"%.64s\", \"%.64s\"): %s", VAR_4, VAR_5,
       FUNC_3(VAR_10));
  }
  return (-1);
 }
 if (VAR_7 < VAR_12->ai_addrlen) {
  FUNC_2(VAR_12);
  FUNC_1(1, "internal error: addrlen < res->ai_addrlen");
 }
 FUNC_5(VAR_6, VAR_12->ai_addr, VAR_12->ai_addrlen);
 FUNC_2(VAR_12);
 return (0);
}
