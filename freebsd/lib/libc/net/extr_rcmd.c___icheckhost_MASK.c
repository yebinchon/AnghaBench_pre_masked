
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ ai_family; int ai_addrlen; struct sockaddr const* ai_addr; struct sockaddr_in* ai_next; int ai_socktype; int sin_addr; int sin_family; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {int sin_len; scalar_t__ ai_family; int ai_addrlen; struct sockaddr const* ai_addr; struct addrinfo* ai_next; int ai_socktype; int sin_addr; int sin_family; } ;
typedef int socklen_t ;
typedef int sin ;
typedef int hints ;
typedef int h2 ;
typedef int h1 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sockaddr_in*) ;
 int FUNC_2 (char const*,char*,struct sockaddr_in*,struct sockaddr_in**) ;
 scalar_t__ FUNC_3 (struct sockaddr const*,int,char*,int,int *,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(const struct sockaddr *VAR_5, socklen_t VAR_6, const char *VAR_7)
{
 struct sockaddr_in VAR_8;
 struct sockaddr_in6 *VAR_9;
 struct addrinfo VAR_10, *VAR_11, *VAR_12;
 int VAR_13;
 char VAR_14[VAR_2], VAR_15[VAR_2];

 if (VAR_5->sa_family == VAR_1) {
  VAR_9 = (struct sockaddr_in6 *)VAR_5;
  if (FUNC_0(&VAR_9->sin6_addr)) {
   FUNC_5(&VAR_8, 0, sizeof(VAR_8));
   VAR_8.sin_family = VAR_0;
   VAR_8.sin_len = sizeof(struct sockaddr_in);
   FUNC_4(&VAR_8.sin_addr, &VAR_9->sin6_addr.s6_addr[12],
          sizeof(VAR_8.sin_addr));
   VAR_5 = (struct sockaddr *)&VAR_8;
   VAR_6 = VAR_8.sin_len;
  }
 }

 VAR_14[0] = '\0';
 if (FUNC_3(VAR_5, VAR_6, VAR_14, sizeof(VAR_14), ((void*)0), 0,
   VAR_3) != 0)
  return (0);


 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_family = VAR_5->sa_family;
 VAR_10.ai_socktype = VAR_4;
 VAR_11 = ((void*)0);
 VAR_13 = FUNC_2(VAR_7, "0", &VAR_10, &VAR_11);
 if (VAR_13)
  return (0);

 for (VAR_12 = VAR_11; VAR_12 ; VAR_12 = VAR_12->ai_next) {
  VAR_15[0] = '\0';
  if (FUNC_3(VAR_12->ai_addr, VAR_12->ai_addrlen, VAR_15, sizeof(VAR_15),
    ((void*)0), 0, VAR_3) != 0)
   continue;
  if (FUNC_6(VAR_14, VAR_15) == 0) {
   FUNC_1(VAR_11);
   return (1);
  }
 }


 FUNC_1(VAR_11);
 return (0);
}
