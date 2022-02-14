
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int flags; int * output_buffer; int * input_buffer; struct evhttp_request* output_headers; struct evhttp_request* input_headers; struct evhttp_request* host_cache; struct evhttp_request* response_code_line; int * uri_elems; struct evhttp_request* uri; struct evhttp_request* remote_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct evhttp_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct evhttp_request*) ;

void
FUNC_4(struct evhttp_request *VAR_2)
{
 if ((VAR_2->flags & VAR_0) != 0) {
  VAR_2->flags |= VAR_1;
  return;
 }

 if (VAR_2->remote_host != ((void*)0))
  FUNC_3(VAR_2->remote_host);
 if (VAR_2->uri != ((void*)0))
  FUNC_3(VAR_2->uri);
 if (VAR_2->uri_elems != ((void*)0))
  FUNC_2(VAR_2->uri_elems);
 if (VAR_2->response_code_line != ((void*)0))
  FUNC_3(VAR_2->response_code_line);
 if (VAR_2->host_cache != ((void*)0))
  FUNC_3(VAR_2->host_cache);

 FUNC_1(VAR_2->input_headers);
 FUNC_3(VAR_2->input_headers);

 FUNC_1(VAR_2->output_headers);
 FUNC_3(VAR_2->output_headers);

 if (VAR_2->input_buffer != ((void*)0))
  FUNC_0(VAR_2->input_buffer);

 if (VAR_2->output_buffer != ((void*)0))
  FUNC_0(VAR_2->output_buffer);

 FUNC_3(VAR_2);
}
