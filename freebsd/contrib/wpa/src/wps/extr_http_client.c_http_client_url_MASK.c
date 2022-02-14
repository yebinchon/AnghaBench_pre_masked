
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct http_client {int dummy; } ;


 struct http_client* FUNC_0 (struct sockaddr_in*,struct wpabuf*,size_t,void (*) (void*,struct http_client*,int),void*) ;
 char* FUNC_1 (char const*,struct sockaddr_in*,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 struct wpabuf* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,char*,char*,int ,int ) ;

struct http_client * FUNC_10(const char *VAR_0,
         struct wpabuf *VAR_1, size_t VAR_2,
         void (*VAR_3)(void *VAR_4,
      struct http_client *VAR_5,
      enum http_client_event VAR_6),
         void *VAR_7)
{
 struct sockaddr_in VAR_8;
 struct http_client *VAR_9;
 char *VAR_10, *VAR_11;
 struct wpabuf *VAR_12 = ((void*)0);

 if (FUNC_6(VAR_0, "http://", 7) != 0)
  return ((void*)0);
 VAR_10 = FUNC_1(VAR_0, &VAR_8, &VAR_11);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 if (VAR_1 == ((void*)0)) {
  VAR_12 = FUNC_7(FUNC_5(VAR_0) + 1000);
  if (VAR_12 == ((void*)0)) {
   FUNC_4(VAR_10);
   return ((void*)0);
  }
  VAR_1 = VAR_12;
  FUNC_9(VAR_1,
         "GET %s HTTP/1.1\r\n"
         "Cache-Control: no-cache\r\n"
         "Pragma: no-cache\r\n"
         "Accept: text/xml, application/xml\r\n"
         "User-Agent: wpa_supplicant\r\n"
         "Host: %s:%d\r\n"
         "\r\n",
         VAR_11, FUNC_2(VAR_8.sin_addr),
         FUNC_3(VAR_8.sin_port));
 }
 FUNC_4(VAR_10);

 VAR_9 = FUNC_0(&VAR_8, VAR_1, VAR_2, VAR_3, VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_12);
  return ((void*)0);
 }

 return VAR_9;
}
