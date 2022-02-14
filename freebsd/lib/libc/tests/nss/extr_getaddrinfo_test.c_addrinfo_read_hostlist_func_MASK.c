
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;


 int FUNC_0 (struct addrinfo*,int *) ;
 int FUNC_1 (struct addrinfo*,struct addrinfo*) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (char*,int *,int *,struct addrinfo**) ;
 int VAR_0 ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(struct addrinfo *VAR_1, char *VAR_2)
{
 struct addrinfo *VAR_3;
 int VAR_4;

 FUNC_5("resolving %s: ", VAR_2);
 VAR_4 = FUNC_3(VAR_2, ((void*)0), &VAR_0, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_5("found\n");

  VAR_4 = FUNC_0(VAR_3, ((void*)0));
  if (VAR_4 != 0) {
   FUNC_2(VAR_3);
   VAR_3 = ((void*)0);
   return (VAR_4);
  }

  FUNC_1(VAR_1, VAR_3);
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
 } else {
  FUNC_5("not found\n");

   FUNC_4(VAR_1, 0, sizeof(struct addrinfo));
 }
 return (0);
}
