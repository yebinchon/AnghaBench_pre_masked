
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucl_object_t ;
struct ucl_emitter_functions {TYPE_1__* ud; } ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;
struct TYPE_2__ {size_t i; } ;
typedef TYPE_1__ UT_string ;


 int FUNC_0 (int const*,int,struct ucl_emitter_functions*,int *) ;
 int FUNC_1 (struct ucl_emitter_functions*) ;
 struct ucl_emitter_functions* FUNC_2 (void**) ;

unsigned char *
FUNC_3 (const ucl_object_t *VAR_0, enum ucl_emitter VAR_1,
  size_t *VAR_2)
{
 unsigned char *VAR_3 = ((void*)0);
 struct ucl_emitter_functions *VAR_4;
 UT_string *VAR_5;

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_2 ((void **)&VAR_3);

 if (VAR_4 != ((void*)0)) {
  VAR_5 = VAR_4->ud;
  FUNC_0 (VAR_0, VAR_1, VAR_4, ((void*)0));

  if (VAR_2 != ((void*)0)) {
   *VAR_2 = VAR_5->i;
  }

  FUNC_1 (VAR_4);
 }

 return VAR_3;
}
