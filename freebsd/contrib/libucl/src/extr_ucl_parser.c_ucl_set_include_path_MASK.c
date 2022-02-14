
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int * includepaths; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool
FUNC_2 (struct ucl_parser *VAR_0, ucl_object_t *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  return 0;
 }

 if (VAR_0->includepaths == ((void*)0)) {
  VAR_0->includepaths = FUNC_0 (VAR_1);
 }
 else {
  FUNC_1 (VAR_0->includepaths);
  VAR_0->includepaths = FUNC_0 (VAR_1);
 }

 if (VAR_0->includepaths == ((void*)0)) {
  return 0;
 }

 return 1;
}
