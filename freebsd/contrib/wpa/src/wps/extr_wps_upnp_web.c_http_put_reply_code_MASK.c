
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;







 int FUNC_0 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_1(struct wpabuf *VAR_0, enum http_reply_code VAR_1)
{
 FUNC_0(VAR_0, "HTTP/1.1 ");
 switch (VAR_1) {
 case 130:
  FUNC_0(VAR_0, "200 OK\r\n");
  break;
 case 132:
  FUNC_0(VAR_0, "400 Bad request\r\n");
  break;
 case 129:
  FUNC_0(VAR_0, "412 Precondition failed\r\n");
  break;
 case 128:
  FUNC_0(VAR_0, "501 Unimplemented\r\n");
  break;
 case 131:
 default:
  FUNC_0(VAR_0, "500 Internal server error\r\n");
  break;
 }
}
