
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct http_request {int dummy; } ;
typedef int len_buf ;
typedef enum http_reply_code { ____Placeholder_http_reply_code } http_reply_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,size_t*) ;
 char* VAR_2 ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct http_request*) ;
 int FUNC_3 (struct http_request*,struct wpabuf*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (char*,int,char*,int) ;
 unsigned int FUNC_7 (char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_8 (int ,char*) ;
 struct wpabuf* FUNC_9 (int) ;
 int FUNC_10 (struct wpabuf const*) ;
 int FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf*,char*,...) ;
 char* FUNC_13 (struct wpabuf*,int ) ;
 int FUNC_14 (struct wpabuf*,char const*,int) ;
 int FUNC_15 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_16(struct http_request *VAR_8,
          enum http_reply_code VAR_9,
          const char *VAR_10, int VAR_11,
          const struct wpabuf *VAR_12,
          const char *VAR_13)
{
 struct wpabuf *VAR_14;
 char *VAR_15;
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);

 if (VAR_12) {
  size_t VAR_18;
  VAR_15 = (char *) FUNC_0(FUNC_10(VAR_12),
         FUNC_11(VAR_12), &VAR_18);
 } else
  VAR_15 = ((void*)0);






 VAR_14 = FUNC_9(1000 + (VAR_15 ? FUNC_7(VAR_15) : 0U) +
      (VAR_11 > 0 ? VAR_11 * 2 : 0));
 if (VAR_14 == ((void*)0)) {
  FUNC_8(VAR_1, "WPS UPnP: Cannot allocate reply to "
      "POST");
  FUNC_4(VAR_15);
  FUNC_2(VAR_8);
  return;
 }






 if (VAR_9 == VAR_0) {
  FUNC_15(VAR_14,
          "HTTP/1.1 200 OK\r\n"
          "Content-Type: text/xml; "
          "charset=\"utf-8\"\r\n");
 } else {
  FUNC_12(VAR_14, "HTTP/1.1 %d Error\r\n", VAR_9);
 }
 FUNC_15(VAR_14, VAR_2);

 FUNC_15(VAR_14, "Content-Length: ");




 VAR_16 = FUNC_13(VAR_14, 0);
 FUNC_15(VAR_14, "        \r\n");

 FUNC_1(VAR_14);


 FUNC_15(VAR_14, "\r\n");

 VAR_17 = FUNC_13(VAR_14, 0);

 if (VAR_9 == VAR_0) {
  FUNC_15(VAR_14, VAR_6);
  FUNC_15(VAR_14, "<u:");
  FUNC_14(VAR_14, VAR_10, VAR_11);
  FUNC_15(VAR_14, "Response xmlns:u=\"");
  FUNC_15(VAR_14, VAR_7);
  FUNC_15(VAR_14, "\">\n");
  if (VAR_15 && VAR_13) {





   FUNC_12(VAR_14, "<%s>", VAR_13);
   FUNC_15(VAR_14, VAR_15);
   FUNC_12(VAR_14, "</%s>\n", VAR_13);
  }
  FUNC_15(VAR_14, "</u:");
  FUNC_14(VAR_14, VAR_10, VAR_11);
  FUNC_15(VAR_14, "Response>\n");
  FUNC_15(VAR_14, VAR_5);
 } else {

  FUNC_15(VAR_14, VAR_6);
  FUNC_15(VAR_14, VAR_4);
  FUNC_12(VAR_14, "<errorCode>%d</errorCode>\n", VAR_9);
  FUNC_15(VAR_14, VAR_3);
  FUNC_15(VAR_14, VAR_5);
 }
 FUNC_4(VAR_15);


 if (VAR_17 && VAR_16) {
  int VAR_19 = (char *) FUNC_13(VAR_14, 0) - VAR_17;
  char VAR_20[10];
  FUNC_6(VAR_20, sizeof(VAR_20), "%d", VAR_19);
  FUNC_5(VAR_16, VAR_20, FUNC_7(VAR_20));
 }

 FUNC_3(VAR_8, VAR_14);
}
