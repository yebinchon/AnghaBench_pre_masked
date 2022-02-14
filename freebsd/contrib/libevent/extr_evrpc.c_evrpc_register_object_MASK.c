
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc {void* (* request_new ) (void*) ;void (* request_free ) (void*) ;int (* request_unmarshal ) (void*,struct evbuffer*) ;void* (* reply_new ) (void*) ;void (* reply_free ) (void*) ;int (* reply_complete ) (void*) ;void (* reply_marshal ) (struct evbuffer*,void*) ;void* reply_new_arg; void* request_new_arg; int * uri; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct evrpc*) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static struct evrpc *
FUNC_3(const char *VAR_0,
    void *(*VAR_1)(void*), void *VAR_2, void (*VAR_3)(void *),
    int (*VAR_4)(void *, struct evbuffer *),
    void *(*VAR_5)(void*), void *VAR_6, void (*VAR_7)(void *),
    int (*VAR_8)(void *),
    void (*VAR_9)(struct evbuffer *, void *))
{
 struct evrpc* VAR_10 = (struct evrpc *)FUNC_0(1, sizeof(struct evrpc));
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 VAR_10->uri = FUNC_2(VAR_0);
 if (VAR_10->uri == ((void*)0)) {
  FUNC_1(VAR_10);
  return (((void*)0));
 }
 VAR_10->request_new = VAR_1;
 VAR_10->request_new_arg = VAR_2;
 VAR_10->request_free = VAR_3;
 VAR_10->request_unmarshal = VAR_4;
 VAR_10->reply_new = VAR_5;
 VAR_10->reply_new_arg = VAR_6;
 VAR_10->reply_free = VAR_7;
 VAR_10->reply_complete = VAR_8;
 VAR_10->reply_marshal = VAR_9;
 return (VAR_10);
}
