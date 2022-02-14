
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 char* VAR_0 ;
 int FUNC_0 (struct wpabuf*,int) ;
 char* VAR_1 ;
 int FUNC_1 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_2(struct wpabuf *VAR_2, enum http_reply_code VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, "Content-Length: 0\r\n"
         "\r\n");
}
