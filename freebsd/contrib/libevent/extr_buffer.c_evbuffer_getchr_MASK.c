
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {TYPE_1__ internal_; } ;
struct evbuffer_chain {size_t misalign; scalar_t__* buffer; } ;



__attribute__((used)) static inline int
FUNC_0(struct evbuffer_ptr *VAR_0)
{
 struct evbuffer_chain *VAR_1 = VAR_0->internal_.chain;
 size_t VAR_2 = VAR_0->internal_.pos_in_chain;

 if (VAR_1 == ((void*)0))
  return -1;

 return (unsigned char)VAR_1->buffer[VAR_1->misalign + VAR_2];
}
