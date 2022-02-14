
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {size_t off; } ;
struct evbuffer {struct evbuffer_chain* first; } ;


 int FUNC_0 (struct evbuffer const*) ;
 int FUNC_1 (struct evbuffer const*) ;

size_t
FUNC_2(const struct evbuffer *VAR_0)
{
 struct evbuffer_chain *VAR_1;
 size_t VAR_2;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->first;
 VAR_2 = (VAR_1 != ((void*)0) ? VAR_1->off : 0);
 FUNC_1(VAR_0);

 return VAR_2;
}
