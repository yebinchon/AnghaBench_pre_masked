
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct http_client {struct wpabuf body; int * hread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;

struct wpabuf * FUNC_3(struct http_client *VAR_0)
{
 if (VAR_0->hread == ((void*)0))
  return ((void*)0);
 FUNC_2(&VAR_0->body, FUNC_0(VAR_0->hread),
     FUNC_1(VAR_0->hread));
 return &VAR_0->body;
}
