
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct http_server {int request_count; struct http_request* requests; int fd; } ;
struct http_request {struct http_request* next; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct http_request* FUNC_2 (struct http_server*,int,struct sockaddr_in*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_7(int VAR_2, void *VAR_3, void *VAR_4)
{
 struct sockaddr_in VAR_5;
 socklen_t VAR_6 = sizeof(VAR_5);
 struct http_server *VAR_7 = VAR_3;
 int VAR_8;
 struct http_request *VAR_9;

 VAR_8 = FUNC_0(VAR_7->fd, (struct sockaddr *) &VAR_5, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_6(VAR_0, "HTTP: Failed to accept new connection: "
      "%s", FUNC_5(VAR_1));
  return;
 }
 FUNC_6(VAR_0, "HTTP: Connection from %s:%d",
     FUNC_3(VAR_5.sin_addr), FUNC_4(VAR_5.sin_port));

 VAR_9 = FUNC_2(VAR_7, VAR_8, &VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_8);
  return;
 }

 VAR_9->next = VAR_7->requests;
 VAR_7->requests = VAR_9;
 VAR_7->request_count++;
}
