
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int virtualhosts; int * vhost_pattern; int sockets; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp*,int ) ;
 int * FUNC_2 (char const*) ;
 int VAR_0 ;

int
FUNC_3(struct evhttp* VAR_1, const char *VAR_2,
    struct evhttp* VAR_3)
{

 if (VAR_3->vhost_pattern != ((void*)0) ||
     FUNC_0(&VAR_3->sockets) != ((void*)0))
  return (-1);

 VAR_3->vhost_pattern = FUNC_2(VAR_2);
 if (VAR_3->vhost_pattern == ((void*)0))
  return (-1);

 FUNC_1(&VAR_1->virtualhosts, VAR_3, VAR_0);

 return (0);
}
