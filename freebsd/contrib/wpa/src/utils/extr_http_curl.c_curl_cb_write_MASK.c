
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {char* curl_buf; size_t curl_buf_len; } ;


 int FUNC_0 (char*,void*,size_t) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2,
       void *VAR_3)
{
 struct http_ctx *VAR_4 = VAR_3;
 char *VAR_5;
 VAR_5 = FUNC_1(VAR_4->curl_buf, VAR_4->curl_buf_len + VAR_1 * VAR_2 + 1);
 if (VAR_5 == ((void*)0))
  return 0;
 VAR_4->curl_buf = VAR_5;
 FUNC_0(VAR_5 + VAR_4->curl_buf_len, VAR_0, VAR_1 * VAR_2);
 VAR_5[VAR_4->curl_buf_len + VAR_1 * VAR_2] = '\0';
 VAR_4->curl_buf_len += VAR_1 * VAR_2;
 return VAR_1 * VAR_2;
}
