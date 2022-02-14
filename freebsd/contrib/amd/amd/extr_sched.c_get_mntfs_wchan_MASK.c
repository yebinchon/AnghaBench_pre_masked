
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* wchan_t ;
struct TYPE_9__ {TYPE_1__* mf_ops; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_8__ {TYPE_2__* (* get_wchan ) (TYPE_2__*) ;} ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

wchan_t
FUNC_1(mntfs *VAR_0)
{
  if (VAR_0 &&
      VAR_0->mf_ops &&
      VAR_0->mf_ops->get_wchan)
    return VAR_0->mf_ops->get_wchan(VAR_0);
  return VAR_0;
}
