
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_server {scalar_t__ fd; int requests; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct http_server*) ;

void FUNC_4(struct http_server *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->fd >= 0) {
  FUNC_1(VAR_1->fd, VAR_0);
  FUNC_0(VAR_1->fd);
 }
 FUNC_2(VAR_1->requests);

 FUNC_3(VAR_1);
}
