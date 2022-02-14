
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct addrinfo*,char*,int) ;

void
FUNC_2(struct addrinfo *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  char VAR_1[2048];
  FUNC_1(VAR_0, VAR_1, sizeof(VAR_1));
  FUNC_0("%s\n", VAR_1);
 } else
  FUNC_0("(null)\n");
}
