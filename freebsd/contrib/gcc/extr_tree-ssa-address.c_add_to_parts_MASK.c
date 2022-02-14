
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct mem_address {void* base; void* index; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int ,void*,void*,int ) ;
 int FUNC_2 (void*,void*) ;

__attribute__((used)) static void
FUNC_3 (struct mem_address *VAR_1, tree VAR_2)
{
  tree VAR_3;

  if (!VAR_1->index)
    {
      VAR_1->index = VAR_2;
      return;
    }

  if (!VAR_1->base)
    {
      VAR_1->base = VAR_2;
      return;
    }


  VAR_3 = FUNC_0 (VAR_1->base);
  VAR_1->base = FUNC_1 (VAR_0, VAR_3,
        VAR_1->base,
        FUNC_2 (VAR_3, VAR_2));
}
