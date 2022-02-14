
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afswtch {int (* af_settunnel ) (int,struct addrinfo*,struct addrinfo*) ;int af_name; } ;
struct addrinfo {TYPE_1__* ai_addr; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int *,int *,struct addrinfo**) ;
 int FUNC_4 (int,struct addrinfo*,struct addrinfo*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, const char *VAR_1, int VAR_2, const struct afswtch *VAR_3)
{
 struct addrinfo *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_3->af_settunnel == ((void*)0)) {
  FUNC_5("address family %s does not support tunnel setup",
   VAR_3->af_name);
  return;
 }

 if ((VAR_6 = FUNC_3(VAR_0, ((void*)0), ((void*)0), &VAR_4)) != 0)
  FUNC_0(1, "error in parsing address string: %s",
      FUNC_2(VAR_6));

 if ((VAR_6 = FUNC_3(VAR_1, ((void*)0), ((void*)0), &VAR_5)) != 0)
  FUNC_0(1, "error in parsing address string: %s",
      FUNC_2(VAR_6));

 if (VAR_4->ai_addr->sa_family != VAR_5->ai_addr->sa_family)
  FUNC_0(1,
      "source and destination address families do not match");

 VAR_3->af_settunnel(VAR_2, VAR_4, VAR_5);

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
}
