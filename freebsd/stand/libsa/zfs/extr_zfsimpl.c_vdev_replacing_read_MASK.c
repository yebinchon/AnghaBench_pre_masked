
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ v_state; int (* v_read ) (TYPE_1__*,int const*,void*,int ,size_t) ;int v_children; } ;
typedef TYPE_1__ vdev_t ;
typedef int off_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int const*,void*,int ,size_t) ;

__attribute__((used)) static int
FUNC_2(vdev_t *VAR_2, const blkptr_t *VAR_3, void *VAR_4,
    off_t VAR_5, size_t VAR_6)
{
 vdev_t *VAR_7;
 VAR_7 = FUNC_0(&VAR_2->v_children);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 if (VAR_7->v_state != VAR_1)
  return (VAR_0);
 return (VAR_7->v_read(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
}
