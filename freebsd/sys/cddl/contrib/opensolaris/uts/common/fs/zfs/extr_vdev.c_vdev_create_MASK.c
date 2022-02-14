
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vdev_state; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(vdev_t *VAR_4, uint64_t VAR_5, boolean_t VAR_6)
{
 int VAR_7;






 VAR_7 = FUNC_3(VAR_4);

 if (VAR_7 || VAR_4->vdev_state != VAR_3) {
  FUNC_0(VAR_4);
  return (VAR_7 ? VAR_7 : VAR_0);
 }




 if ((VAR_7 = FUNC_1(VAR_4)) != 0 ||
     (VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6 ?
     VAR_2 : VAR_1)) != 0) {
  FUNC_0(VAR_4);
  return (VAR_7);
 }

 return (0);
}
