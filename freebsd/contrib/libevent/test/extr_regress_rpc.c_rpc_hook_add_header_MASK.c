
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int output_headers; int input_headers; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, struct evhttp_request *VAR_2,
    struct evbuffer *VAR_3, void *VAR_4)
{
 const char *VAR_5 = VAR_4;
 if (FUNC_3("input", VAR_5) == 0)
  FUNC_1(VAR_2->input_headers, "X-Hook", VAR_5);
 else
  FUNC_1(VAR_2->output_headers, "X-Hook", VAR_5);

 FUNC_0(FUNC_2(VAR_1) != ((void*)0));

 return (VAR_0);
}
