
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter {int (* filter_func ) (struct filter*) ;struct filter* next; void* extra; int * argv; scalar_t__ argc; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct filter*,int ,int) ;

struct filter *FUNC_4 (struct filter *VAR_0,
      int (*VAR_1) (struct filter *),
      void *VAR_2)
{
 struct filter *VAR_3;


 VAR_3 = (struct filter *) FUNC_1 (sizeof (struct filter));
 if (!VAR_3)
  FUNC_2 (FUNC_0("flex_alloc failed in filter_create_int"));
 FUNC_3 (VAR_3, 0, sizeof (*VAR_3));
 VAR_3->next = ((void*)0);
 VAR_3->argc = 0;
 VAR_3->argv = ((void*)0);

 VAR_3->filter_func = VAR_1;
 VAR_3->extra = VAR_2;

 if (VAR_0 != ((void*)0)) {

  while (VAR_0->next)
   VAR_0 = VAR_0->next;
  VAR_0->next = VAR_3;
 }

 return VAR_3;
}
