
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mls_range {TYPE_3__* level; } ;
struct TYPE_5__ {TYPE_1__* level; } ;
struct context {TYPE_2__ range; } ;
struct TYPE_6__ {int cat; int sens; } ;
struct TYPE_4__ {int cat; int sens; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline int FUNC_1(struct context *VAR_0,
    struct mls_range *VAR_1)
{
 int VAR_2, VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_0->range.level[VAR_2].sens = VAR_1->level[VAR_2].sens;
  VAR_3 = FUNC_0(&VAR_0->range.level[VAR_2].cat,
     &VAR_1->level[VAR_2].cat);
  if (VAR_3)
   break;
 }

 return VAR_3;
}
