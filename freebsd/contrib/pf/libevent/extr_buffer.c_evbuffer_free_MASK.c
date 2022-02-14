
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {struct evbuffer* orig_buffer; } ;


 int FUNC_0 (struct evbuffer*) ;

void
FUNC_1(struct evbuffer *VAR_0)
{
 if (VAR_0->orig_buffer != ((void*)0))
  FUNC_0(VAR_0->orig_buffer);
 FUNC_0(VAR_0);
}
