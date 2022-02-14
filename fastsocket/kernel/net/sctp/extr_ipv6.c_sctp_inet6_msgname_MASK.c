
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_family; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(char *VAR_1, int *VAR_2)
{
 struct sockaddr_in6 *VAR_3;

 VAR_3 = (struct sockaddr_in6 *)VAR_1;
 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_flowinfo = 0;
 VAR_3->sin6_scope_id = 0;
 *VAR_2 = sizeof(struct sockaddr_in6);
}
