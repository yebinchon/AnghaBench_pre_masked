
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct dcast_data_s {int virt_depth; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static tree
FUNC_1 (tree VAR_1, void *VAR_2)
{
  struct dcast_data_s *VAR_3 = (struct dcast_data_s *) VAR_2;

  if (FUNC_0 (VAR_1))
    VAR_3->virt_depth--;

  return VAR_0;
}
