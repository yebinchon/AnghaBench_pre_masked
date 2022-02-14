
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_nparity; } ;
typedef TYPE_1__ vdev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_7 > VAR_6->vdev_nparity)
  FUNC_0(VAR_6, VAR_0, VAR_3,
      VAR_2);
 else if (VAR_8 + VAR_7 != 0)
  FUNC_0(VAR_6, VAR_0, VAR_4, VAR_1);
 else
  FUNC_0(VAR_6, VAR_0, VAR_5, VAR_1);
}
