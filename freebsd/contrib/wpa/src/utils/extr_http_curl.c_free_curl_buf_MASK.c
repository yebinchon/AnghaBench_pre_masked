
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {scalar_t__ curl_buf_len; int * curl_buf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct http_ctx *VAR_0)
{
 FUNC_0(VAR_0->curl_buf);
 VAR_0->curl_buf = ((void*)0);
 VAR_0->curl_buf_len = 0;
}
