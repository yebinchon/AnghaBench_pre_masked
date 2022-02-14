
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int * ai_canonname; int ai_addr; int ai_flags; } ;
struct TYPE_6__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct addrinfo) ;
 scalar_t__ FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int *,int ,char*,int ,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int FUNC_8 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_9(
 const char *VAR_4,
 sockaddr_u *VAR_5,
 char *VAR_6,
 int VAR_7
 )
{
 struct addrinfo VAR_8, *VAR_9 = ((void*)0);

 FUNC_2(VAR_8);
 VAR_8.ai_flags = VAR_1;
 if (FUNC_3(VAR_4, VAR_5)) {
  if (VAR_6 != ((void*)0))
   FUNC_6(&VAR_5->sa, FUNC_1(VAR_5), VAR_6,
        VAR_2, ((void*)0), 0, 0);
  return 1;
 } else if (FUNC_5(VAR_4, "ntp", &VAR_8, &VAR_9) == 0) {
  FUNC_0(sizeof(*VAR_5) >= VAR_9->ai_addrlen);
  FUNC_7(VAR_5, VAR_9->ai_addr, VAR_9->ai_addrlen);
  if (VAR_6 != ((void*)0)) {
   if (VAR_9->ai_canonname != ((void*)0))
    FUNC_8(VAR_6, VAR_9->ai_canonname,
     VAR_2);
   else
    FUNC_6(&VAR_5->sa, FUNC_1(VAR_5),
         VAR_6, VAR_2, ((void*)0),
         0, 0);
  }
  return 1;
 }
 FUNC_4(VAR_3, "***Can't find host %s\n", VAR_4);

 return 0;
}
