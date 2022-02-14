
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_req {int num_headers; char const** headers; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct http_req *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3 = FUNC_0(VAR_1);

    for (VAR_2 = 0; VAR_2 < VAR_0->num_headers; VAR_2++) {
 if (FUNC_1(VAR_1, VAR_0->headers[VAR_2], VAR_3) == 0) {
     return VAR_0->headers[VAR_2] + VAR_3 + 1;
 }
    }
    return ((void*)0);
}
