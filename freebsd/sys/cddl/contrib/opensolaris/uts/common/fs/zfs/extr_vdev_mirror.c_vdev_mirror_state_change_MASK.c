
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; } ;
typedef TYPE_1__ vdev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(vdev_t *VAR_8, int VAR_9, int VAR_10)
{
 if (VAR_9 == VAR_8->vdev_children) {
  if (FUNC_0(VAR_8)) {
   FUNC_1(VAR_8, VAR_0, VAR_7,
       VAR_1);
  } else {
   FUNC_1(VAR_8, VAR_0, VAR_4,
       VAR_3);
  }
 } else if (VAR_10 + VAR_9 != 0) {
  FUNC_1(VAR_8, VAR_0, VAR_5, VAR_2);
 } else {
  FUNC_1(VAR_8, VAR_0, VAR_6, VAR_2);
 }
}
