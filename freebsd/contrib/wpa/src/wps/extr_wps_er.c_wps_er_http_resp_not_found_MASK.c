
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct http_request {int dummy; } ;


 int FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (struct http_request*) ;
 int FUNC_2 (struct http_request*,struct wpabuf*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_5(struct http_request *VAR_0)
{
 struct wpabuf *VAR_1;
 VAR_1 = FUNC_3(200);
 if (VAR_1 == ((void*)0)) {
  FUNC_1(VAR_0);
  return;
 }

 FUNC_4(VAR_1,
         "HTTP/1.1 404 Not Found\r\n"
         "Server: unspecified, UPnP/1.0, unspecified\r\n"
         "Connection: close\r\n");
 FUNC_0(VAR_1);
 FUNC_4(VAR_1, "\r\n");
 FUNC_2(VAR_0, VAR_1);
}
