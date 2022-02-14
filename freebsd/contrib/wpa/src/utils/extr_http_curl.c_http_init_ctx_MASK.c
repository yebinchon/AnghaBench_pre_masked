
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_node_ctx {int dummy; } ;
struct http_ctx {int ocsp; struct xml_node_ctx* xml; void* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct http_ctx* FUNC_1 (int) ;

struct http_ctx * FUNC_2(void *VAR_2, struct xml_node_ctx *VAR_3)
{
 struct http_ctx *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->ctx = VAR_2;
 VAR_4->xml = VAR_3;
 VAR_4->ocsp = VAR_1;

 FUNC_0(VAR_0);

 return VAR_4;
}
