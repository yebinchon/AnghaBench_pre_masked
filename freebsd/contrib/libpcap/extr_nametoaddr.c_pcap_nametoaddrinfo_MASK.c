
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_1 (struct addrinfo*,int ,int) ;

struct addrinfo *
FUNC_2(const char *VAR_3)
{
 struct addrinfo VAR_4, *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ai_family = VAR_1;
 VAR_4.ai_socktype = VAR_2;
 VAR_4.ai_protocol = VAR_0;
 VAR_6 = FUNC_0(VAR_3, ((void*)0), &VAR_4, &VAR_5);
 if (VAR_6)
  return ((void*)0);
 else
  return VAR_5;
}
