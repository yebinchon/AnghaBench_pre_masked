
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ revision; int node_id; int path; } ;
typedef TYPE_1__ path_order_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const path_order_t * const * VAR_0,
                   const path_order_t * const * VAR_1)
{
  const path_order_t * VAR_2 = *VAR_0;
  const path_order_t * VAR_3 = *VAR_1;


  int VAR_4 = FUNC_1(VAR_2->path, VAR_3->path);
  if (VAR_4)
    return VAR_4;


  VAR_4 = FUNC_0(&VAR_3->node_id, &VAR_2->node_id);
  if (VAR_4)
    return VAR_4;


  if (VAR_2->revision != VAR_3->revision)
    return VAR_2->revision < VAR_3->revision ? 1 : -1;

  return 0;
}
