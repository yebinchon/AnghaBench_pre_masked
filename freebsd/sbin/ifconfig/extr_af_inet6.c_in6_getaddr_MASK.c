
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; scalar_t__ sin6_family; int sin6_addr; } ;
struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sockaddr_in6*,int ) ;
 int FUNC_1 (struct addrinfo*,int) ;
 int FUNC_2 (int,char*,char const*) ;
 int VAR_3 ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (scalar_t__,char const*,int *) ;
 int VAR_4 ;
 struct sockaddr_in6** VAR_5 ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_6, int VAR_7)
{
 struct sockaddr_in6 *VAR_8 = VAR_5[VAR_7];
 struct addrinfo VAR_9, *VAR_10;
 int VAR_11 = -1;

 VAR_4 &= 1;

 VAR_8->sin6_len = sizeof(*VAR_8);
 if (VAR_7 != VAR_2)
  VAR_8->sin6_family = VAR_1;

 if (VAR_7 == VAR_0) {
  char *VAR_12 = ((void*)0);
  if((VAR_12 = FUNC_7(VAR_6, '/')) != ((void*)0)) {
   *VAR_12 = '\0';
   FUNC_5(VAR_12 + 1, VAR_2);
   VAR_3 = 1;
  }
 }

 if (VAR_8->sin6_family == VAR_1) {
  FUNC_1(&VAR_9, sizeof(struct addrinfo));
  VAR_9.ai_family = VAR_1;
  VAR_11 = FUNC_4(VAR_6, ((void*)0), &VAR_9, &VAR_10);
  if (VAR_11 != 0) {
   if (FUNC_6(VAR_1, VAR_6, &VAR_8->sin6_addr) != 1)
    FUNC_2(1, "%s: bad value", VAR_6);
  } else {
   FUNC_0(VAR_10->ai_addr, VAR_8, VAR_10->ai_addrlen);
   FUNC_3(VAR_10);
  }
 }
}
