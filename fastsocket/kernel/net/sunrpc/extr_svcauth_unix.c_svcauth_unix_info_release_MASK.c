
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {struct ip_map* xpt_auth_cache; } ;
struct ip_map {int h; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;

void
FUNC_1(struct svc_xprt *VAR_1)
{
 struct ip_map *VAR_2;

 VAR_2 = VAR_1->xpt_auth_cache;
 if (VAR_2 != ((void*)0))
  FUNC_0(&VAR_2->h, &VAR_0);
}
