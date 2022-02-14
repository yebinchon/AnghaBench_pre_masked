
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;
struct evhttp_request {scalar_t__ kind; struct evkeyvalq* output_headers; struct evkeyvalq* input_headers; } ;
typedef enum expect { ____Placeholder_expect } expect ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evhttp_request*,int,int) ;
 char* FUNC_1 (struct evkeyvalq*,char*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum expect FUNC_3(struct evhttp_request *VAR_4, int VAR_5)
{
 const char *VAR_6;
 struct evkeyvalq *VAR_7 = VAR_5 ? VAR_4->input_headers : VAR_4->output_headers;

 if (!(VAR_4->kind == VAR_1) || !FUNC_0(VAR_4, 1, 1))
  return VAR_2;

 VAR_6 = FUNC_1(VAR_7, "Expect");
 if (!VAR_6)
  return VAR_2;

 return !FUNC_2(VAR_6, "100-continue") ? VAR_0 : VAR_3;
}
