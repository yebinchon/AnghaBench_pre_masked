
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct http_server {scalar_t__ request_count; } ;
struct http_request {int fd; int * hread; struct sockaddr_in cli; struct http_server* srv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct http_request*) ;
 int * FUNC_1 (int,int ,struct http_request*,int ,int ) ;
 struct http_request* FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct http_request * FUNC_4(struct http_server *VAR_5, int VAR_6,
            struct sockaddr_in *VAR_7)
{
 struct http_request *VAR_8;

 if (VAR_5->request_count >= VAR_0) {
  FUNC_3(VAR_3, "HTTP: Too many concurrent requests");
  return ((void*)0);
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->srv = VAR_5;
 VAR_8->fd = VAR_6;
 VAR_8->cli = *VAR_7;

 VAR_8->hread = FUNC_1(VAR_8->fd, VAR_4, VAR_8,
         VAR_1,
         VAR_2);
 if (VAR_8->hread == ((void*)0)) {
  FUNC_0(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
