
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* tpa_p ;
struct TYPE_4__ {int* partition_to_tree_map; int uncompressed_num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline int
FUNC_2 (tpa_p VAR_1, int VAR_2)
{
  int VAR_3;

  VAR_3 = VAR_1->partition_to_tree_map[VAR_2];


  if (VAR_3 != VAR_0 && VAR_3 >= FUNC_1 (VAR_1))
    {
      FUNC_0 (VAR_1->uncompressed_num != -1);
      VAR_3 = VAR_0;
    }

  return VAR_3;
}
