
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t off; int buffer; } ;
struct bufferevent {struct evbuffer* input; } ;


 int FUNC_0 (struct evbuffer*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

size_t
FUNC_2(struct bufferevent *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct evbuffer *VAR_3 = VAR_0->input;

 if (VAR_3->off < VAR_2)
  VAR_2 = VAR_3->off;


 FUNC_1(VAR_1, VAR_3->buffer, VAR_2);

 if (VAR_2)
  FUNC_0(VAR_3, VAR_2);

 return (VAR_2);
}
