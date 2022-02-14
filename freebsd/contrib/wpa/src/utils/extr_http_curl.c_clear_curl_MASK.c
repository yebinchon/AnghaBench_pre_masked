
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int * curl_hdr; int * curl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct http_ctx *VAR_0)
{
 if (VAR_0->curl) {
  FUNC_0(VAR_0->curl);
  VAR_0->curl = ((void*)0);
 }
 if (VAR_0->curl_hdr) {
  FUNC_1(VAR_0->curl_hdr);
  VAR_0->curl_hdr = ((void*)0);
 }
}
