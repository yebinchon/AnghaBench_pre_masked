
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
typedef int * htab_t ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int * FUNC_1 (int,int ,int ,int *) ;
 int VAR_1 ;
 void** FUNC_2 (int *,void*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_3 (tree VAR_3)
{
  static htab_t VAR_4 = ((void*)0);
  void **VAR_5;

  if (!VAR_4)
    VAR_4 = FUNC_1 (100, VAR_2, VAR_1, ((void*)0));

  VAR_5 = FUNC_2 (VAR_4, VAR_3, VAR_0);
  FUNC_0 (VAR_5);

  if (*VAR_5)
    return 1;

  *VAR_5 = VAR_3;
  return 0;
}
