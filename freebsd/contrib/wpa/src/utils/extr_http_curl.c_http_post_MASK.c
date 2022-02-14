
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {char* last_err; char* curl_buf; size_t curl_buf_len; } ;
typedef char const curl_slist ;
typedef int ct ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,long*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char const*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (struct http_ctx*) ;
 int * FUNC_6 (struct http_ctx*,char const*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int FUNC_8 (int ,char*,...) ;

char * FUNC_9(struct http_ctx *VAR_8, const char *VAR_9, const char *VAR_10,
   const char *VAR_11, const char *VAR_12,
   const char *VAR_13,
   const char *VAR_14, const char *VAR_15,
   const char *VAR_16, const char *VAR_17,
   size_t *VAR_18)
{
 long VAR_19 = 0;
 CURLcode VAR_20;
 char *VAR_21;
 CURL *VAR_22;
 struct curl_slist *VAR_23 = ((void*)0);

 VAR_8->last_err = ((void*)0);
 FUNC_8(VAR_4, "curl: HTTP POST to %s", VAR_9);
 VAR_22 = FUNC_6(VAR_8, VAR_9, VAR_13, VAR_14, VAR_15,
          VAR_16, VAR_17);
 if (VAR_22 == ((void*)0))
  return ((void*)0);

 if (VAR_11) {
  char VAR_24[200];
  FUNC_7(VAR_24, sizeof(VAR_24), "Content-Type: %s", VAR_11);
  VAR_23 = FUNC_4(VAR_23, VAR_24);
 }
 if (VAR_12)
  VAR_23 = FUNC_4(VAR_23, VAR_12);
 FUNC_2(VAR_22, VAR_2, VAR_23);

 FUNC_2(VAR_22, VAR_3, VAR_10);
 FUNC_5(VAR_8);

 VAR_20 = FUNC_1(VAR_22);
 if (VAR_20 != VAR_0) {
  if (!VAR_8->last_err)
   VAR_8->last_err = FUNC_3(VAR_20);
  FUNC_8(VAR_5, "curl_easy_perform() failed: %s",
      VAR_8->last_err);
  FUNC_5(VAR_8);
  return ((void*)0);
 }

 FUNC_0(VAR_22, VAR_1, &VAR_19);
 FUNC_8(VAR_4, "curl: Server response code %ld", VAR_19);
 if (VAR_19 != 200) {
  VAR_8->last_err = "HTTP POST failed";
  FUNC_8(VAR_6, "HTTP POST failed - code %ld", VAR_19);
  FUNC_5(VAR_8);
  return ((void*)0);
 }

 if (VAR_8->curl_buf == ((void*)0))
  return ((void*)0);

 VAR_21 = VAR_8->curl_buf;
 if (VAR_18)
  *VAR_18 = VAR_8->curl_buf_len;
 VAR_8->curl_buf = ((void*)0);
 VAR_8->curl_buf_len = 0;

 FUNC_8(VAR_7, "Server response:\n%s", VAR_21);

 return VAR_21;
}
