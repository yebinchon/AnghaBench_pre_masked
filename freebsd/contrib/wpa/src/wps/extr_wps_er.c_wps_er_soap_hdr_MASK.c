
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;


 unsigned char* FUNC_0 (int ,int ,size_t*) ;
 char* FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 struct wpabuf* FUNC_4 (int) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf*,char*,char const*,...) ;
 char* FUNC_8 (struct wpabuf*,int ) ;
 int FUNC_9 (struct wpabuf*,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_10(const struct wpabuf *VAR_2,
           const char *VAR_3, const char *VAR_4,
           const char *VAR_5,
           const struct sockaddr_in *VAR_6,
           char **VAR_7, char **VAR_8)
{
 unsigned char *VAR_9;
 size_t VAR_10;
 struct wpabuf *VAR_11;

 if (VAR_2) {
  VAR_9 = FUNC_0(FUNC_5(VAR_2), FUNC_6(VAR_2),
     &VAR_10);
  if (VAR_9 == ((void*)0))
   return ((void*)0);
 } else {
  VAR_9 = ((void*)0);
  VAR_10 = 0;
 }

 VAR_11 = FUNC_4(1000 + VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 FUNC_7(VAR_11,
        "POST %s HTTP/1.1\r\n"
        "Host: %s:%d\r\n"
        "Content-Type: text/xml; charset=\"utf-8\"\r\n"
        "Content-Length: ",
        VAR_5, FUNC_1(VAR_6->sin_addr), FUNC_2(VAR_6->sin_port));

 *VAR_7 = FUNC_8(VAR_11, 0);
 FUNC_7(VAR_11,
        "        \r\n"
        "SOAPACTION: \"%s#%s\"\r\n"
        "\r\n",
        VAR_1, VAR_3);

 *VAR_8 = FUNC_8(VAR_11, 0);

 FUNC_9(VAR_11, VAR_0);
 FUNC_7(VAR_11, "<u:%s xmlns:u=\"", VAR_3);
 FUNC_9(VAR_11, VAR_1);
 FUNC_9(VAR_11, "\">\n");
 if (VAR_9) {
  FUNC_7(VAR_11, "<%s>%s</%s>\n",
         VAR_4, (char *) VAR_9, VAR_4);
  FUNC_3(VAR_9);
 }

 return VAR_11;
}
