
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int dummy; } ;
typedef int curl_infotype ;
typedef int CURL ;
 int VAR_0 ;
 int FUNC_0 (struct http_ctx*,char*,char*,size_t) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(CURL *VAR_1, curl_infotype VAR_2, char *VAR_3, size_t VAR_4,
    void *VAR_5)
{
 struct http_ctx *VAR_6 = VAR_5;
 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_6, "CURLINFO_TEXT", VAR_3, VAR_4);
  break;
 case 132:
  FUNC_0(VAR_6, "CURLINFO_HEADER_IN", VAR_3, VAR_4);
  break;
 case 131:
  FUNC_0(VAR_6, "CURLINFO_HEADER_OUT", VAR_3, VAR_4);
  break;
 case 135:
  FUNC_0(VAR_6, "CURLINFO_DATA_IN", VAR_3, VAR_4);
  break;
 case 134:
  FUNC_0(VAR_6, "CURLINFO_DATA_OUT", VAR_3, VAR_4);
  break;
 case 130:
  FUNC_1(VAR_0, "debug - CURLINFO_SSL_DATA_IN - %d",
      (int) VAR_4);
  break;
 case 129:
  FUNC_1(VAR_0, "debug - CURLINFO_SSL_DATA_OUT - %d",
      (int) VAR_4);
  break;
 case 133:
  FUNC_1(VAR_0, "debug - CURLINFO_END - %d",
      (int) VAR_4);
  break;
 }
 return 0;
}
