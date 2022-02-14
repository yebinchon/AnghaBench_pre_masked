
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct sockaddr **VAR_2)
{

 FUNC_0(FUNC_1(VAR_1) != ((void*)0), ("raw_usockaddr: rp == NULL"));

 return (VAR_0);
}
