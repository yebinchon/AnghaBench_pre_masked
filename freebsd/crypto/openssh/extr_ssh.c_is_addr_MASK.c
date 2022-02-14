
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_family; int ai_flags; int * ai_next; int ai_socktype; } ;
typedef int hints ;
struct TYPE_2__ {int address_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_6)
{
 char VAR_7[VAR_3];
 struct addrinfo VAR_8, *VAR_9;

 if (FUNC_3(VAR_6))
  return 1;

 FUNC_5(VAR_7, sizeof VAR_7, "%u", FUNC_0());
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_family = VAR_5.address_family == -1 ?
     VAR_0 : VAR_5.address_family;
 VAR_8.ai_socktype = VAR_4;
 VAR_8.ai_flags = VAR_1|VAR_2;
 if (FUNC_2(VAR_6, VAR_7, &VAR_8, &VAR_9) != 0)
  return 0;
 if (VAR_9 == ((void*)0) || VAR_9->ai_next != ((void*)0)) {
  FUNC_1(VAR_9);
  return 0;
 }
 FUNC_1(VAR_9);
 return 1;
}
