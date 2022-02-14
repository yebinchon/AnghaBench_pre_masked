
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct dcast_data_s {void* offset; scalar_t__ repeated_base; scalar_t__ virt_depth; int subtype; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 void* VAR_1 ;
 void* FUNC_4 (int) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2, void *VAR_3)
{
  struct dcast_data_s *VAR_4 = (struct dcast_data_s *) VAR_3;

  if (FUNC_2 (VAR_2))
    VAR_4->virt_depth++;

  if (FUNC_3 (FUNC_1 (VAR_2), VAR_4->subtype))
    {
      if (VAR_4->virt_depth)
 {
   VAR_4->offset = FUNC_4 (-1);
   return VAR_4->offset;
 }
      if (VAR_4->offset)
 VAR_4->offset = FUNC_4 (-3);
      else
 VAR_4->offset = FUNC_0 (VAR_2);

      return VAR_4->repeated_base ? VAR_1 : VAR_4->offset;
    }

  return VAR_0;
}
