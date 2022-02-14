
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prop_descriptor {TYPE_1__* pg; int mutex; scalar_t__ index; } ;
struct TYPE_2__ {int shift; int events; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct prop_descriptor *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_1->index = 0;
 VAR_1->pg[0].shift = VAR_2;
 FUNC_0(&VAR_1->mutex);
 VAR_3 = FUNC_2(&VAR_1->pg[0].events, 0);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_2(&VAR_1->pg[1].events, 0);
 if (VAR_3)
  FUNC_1(&VAR_1->pg[0].events);

out:
 return VAR_3;
}
