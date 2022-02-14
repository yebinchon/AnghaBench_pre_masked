
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_info {size_t orig_size; size_t n_added; size_t n_deleted; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_1(struct evbuffer *VAR_0,
    const struct evbuffer_cb_info *VAR_1,
    void *VAR_2)
{

 size_t VAR_3 = VAR_1->orig_size;
 size_t VAR_4 = VAR_3 + VAR_1->n_added - VAR_1->n_deleted;
 struct evbuffer *VAR_5 = VAR_2;
 FUNC_0(VAR_5, "%lu->%lu; ", (unsigned long)VAR_3,
       (unsigned long)VAR_4);
}
