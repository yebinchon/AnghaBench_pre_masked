
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct function {int * used_types_hash; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int ,int *) ;
 int VAR_1 ;
 void** FUNC_1 (int *,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (tree VAR_3, struct function *VAR_4)
{
  if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0))
    {
      void **VAR_5;

      if (VAR_4->used_types_hash == ((void*)0))
 VAR_4->used_types_hash = FUNC_0 (37, VAR_2,
       VAR_1, ((void*)0));
      VAR_5 = FUNC_1 (VAR_4->used_types_hash, VAR_3, VAR_0);
      if (*VAR_5 == ((void*)0))
 *VAR_5 = VAR_3;
    }
}
