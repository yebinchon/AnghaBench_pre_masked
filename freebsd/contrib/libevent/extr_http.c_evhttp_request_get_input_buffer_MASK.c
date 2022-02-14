
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {struct evbuffer* input_buffer; } ;
struct evbuffer {int dummy; } ;



struct evbuffer *FUNC_0(struct evhttp_request *VAR_0)
{
 return (VAR_0->input_buffer);
}
