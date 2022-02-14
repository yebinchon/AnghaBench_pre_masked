
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_base {int dummy; } ;
struct evrpc {int dummy; } ;


 struct evrpc* FUNC_0 (char const*,void* (*) (void*),void*,void (*) (void*),int (*) (void*,struct evbuffer*),void* (*) (void*),void*,void (*) (void*),int (*) (void*),void (*) (struct evbuffer*,void*)) ;
 int FUNC_1 (struct evrpc_base*,struct evrpc*,void (*) (struct evrpc_req_generic*,void*),void*) ;

int
FUNC_2(struct evrpc_base *VAR_0, const char *VAR_1,
    void (*VAR_2)(struct evrpc_req_generic *, void *), void *VAR_3,
    void *(*VAR_4)(void *), void *VAR_5, void (*VAR_6)(void *),
    int (*VAR_7)(void *, struct evbuffer *),
    void *(*VAR_8)(void *), void *VAR_9, void (*VAR_10)(void *),
    int (*VAR_11)(void *),
    void (*VAR_12)(struct evbuffer *, void *))
{
 struct evrpc* VAR_13 =
     FUNC_0(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_13 == ((void*)0))
  return (-1);
 FUNC_1(VAR_0, VAR_13,
     (void (*)(struct evrpc_req_generic*, void *))VAR_2, VAR_3);
 return (0);
}
