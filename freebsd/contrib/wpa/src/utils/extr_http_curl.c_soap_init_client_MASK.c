
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {void* curl_hdr; int curl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*) ;
 void* FUNC_1 (void*,char*) ;
 scalar_t__ FUNC_2 (struct http_ctx*,char const*,char const*,char const*,char const*,char const*,char const*) ;

int FUNC_3(struct http_ctx *VAR_1, const char *VAR_2,
       const char *VAR_3, const char *VAR_4,
       const char *VAR_5, const char *VAR_6,
       const char *VAR_7)
{
 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7) < 0)
  return -1;

 VAR_1->curl_hdr = FUNC_1(VAR_1->curl_hdr,
       "Content-Type: application/soap+xml");
 VAR_1->curl_hdr = FUNC_1(VAR_1->curl_hdr, "SOAPAction: ");
 VAR_1->curl_hdr = FUNC_1(VAR_1->curl_hdr, "Expect:");
 FUNC_0(VAR_1->curl, VAR_0, VAR_1->curl_hdr);

 return 0;
}
