
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_req {scalar_t__ body_size; int * body; scalar_t__ num_headers; int * headers; int * response; } ;



__attribute__((used)) static void
FUNC_0(struct http_req *VAR_0)
{
    VAR_0->response = ((void*)0);
    VAR_0->headers = ((void*)0);
    VAR_0->num_headers = 0;
    VAR_0->body = ((void*)0);
    VAR_0->body_size = 0;
}
