
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iter_priv {int a; } ;
typedef int socklen_t ;


 int * FUNC_0 (int *,struct sockaddr_storage*,int ) ;

__attribute__((used)) static int
FUNC_1(struct iter_priv* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2)
{
 return FUNC_0(&VAR_0->a, VAR_1, VAR_2) != ((void*)0);
}
