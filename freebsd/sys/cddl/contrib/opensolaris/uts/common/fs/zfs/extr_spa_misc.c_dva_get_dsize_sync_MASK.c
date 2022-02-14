
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vdev_deflate_ratio; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_8__ {scalar_t__ spa_deflate; } ;
typedef TYPE_2__ spa_t ;
typedef int dva_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int) ;

uint64_t
FUNC_6(spa_t *VAR_3, const dva_t *VAR_4)
{
 uint64_t VAR_5 = FUNC_1(VAR_4);
 uint64_t VAR_6 = VAR_5;

 FUNC_0(FUNC_4(VAR_3, VAR_1, VAR_0) != 0);

 if (VAR_5 != 0 && VAR_3->spa_deflate) {
  uint64_t VAR_7 = FUNC_2(VAR_4);
  vdev_t *VAR_8 = FUNC_5(VAR_3, VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_3(
       "dva_get_dsize_sync(): bad DVA %llu:%llu",
       (u_longlong_t)VAR_7, (u_longlong_t)VAR_5);
  }
  VAR_6 = (VAR_5 >> VAR_2) * VAR_8->vdev_deflate_ratio;
 }

 return (VAR_6);
}
