
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int input_headers; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (void*,char*,void**,size_t*) ;
 int * FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (char const*,void*) ;

__attribute__((used)) static int
FUNC_7(void *VAR_1, struct evhttp_request *VAR_2,
    struct evbuffer *VAR_3, void *VAR_4)
{
 const char *VAR_5 = FUNC_2(VAR_2->input_headers, "X-Hook");
 void *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(FUNC_6(VAR_5, VAR_4) == 0);

 FUNC_3(VAR_2->input_headers, "X-Hook");
 FUNC_1(VAR_2->input_headers, "X-Pool-Hook", "ran");

 FUNC_0(FUNC_4(VAR_1, "meta", &VAR_6, &VAR_7) == 0);
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 == 5);

 FUNC_0(FUNC_5(VAR_1) != ((void*)0));

 return (VAR_0);
}
