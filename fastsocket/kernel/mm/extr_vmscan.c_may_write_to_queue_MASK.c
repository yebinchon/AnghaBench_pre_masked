
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backing_dev_info {int dummy; } ;
struct TYPE_2__ {int flags; struct backing_dev_info* backing_dev_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct backing_dev_info*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct backing_dev_info *VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return 1;
 if (!FUNC_0(VAR_2))
  return 1;
 if (VAR_2 == VAR_1->backing_dev_info)
  return 1;
 return 0;
}
