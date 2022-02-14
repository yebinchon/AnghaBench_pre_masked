
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct testcase_t {TYPE_1__* setup; int (* fn ) (void*) ;} ;
typedef enum outcome { ____Placeholder_outcome } outcome ;
struct TYPE_2__ {scalar_t__ (* cleanup_fn ) (struct testcase_t const*,void*) ;void* (* setup_fn ) (struct testcase_t const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct testcase_t const*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct testcase_t const*,void*) ;

__attribute__((used)) static enum outcome
FUNC_3(const struct testcase_t *VAR_5)
{
 void *VAR_6 = ((void*)0);
 int VAR_7;
 if (VAR_5->setup) {
  VAR_6 = VAR_5->setup->setup_fn(VAR_5);
  if (!VAR_6)
   return VAR_0;
  else if (VAR_6 == (void*)VAR_3)
   return VAR_2;
 }

 VAR_4 = VAR_1;
 VAR_5->fn(VAR_6);
 VAR_7 = VAR_4;

 if (VAR_5->setup) {
  if (VAR_5->setup->cleanup_fn(VAR_5, VAR_6) == 0)
   VAR_7 = VAR_0;
 }

 return VAR_7;
}
