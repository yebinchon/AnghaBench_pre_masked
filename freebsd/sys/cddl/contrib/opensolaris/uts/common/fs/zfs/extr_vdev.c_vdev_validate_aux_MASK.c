
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int * FUNC_3 (TYPE_1__*,unsigned long long) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;

int
FUNC_6(vdev_t *VAR_6)
{
 nvlist_t *VAR_7;
 uint64_t VAR_8, VAR_9;
 uint64_t VAR_10;

 if (!FUNC_4(VAR_6))
  return (0);

 if ((VAR_7 = FUNC_3(VAR_6, -1ULL)) == ((void*)0)) {
  FUNC_5(VAR_6, VAR_0, VAR_2,
      VAR_1);
  return (-1);
 }

 if (FUNC_2(VAR_7, VAR_5, &VAR_9) != 0 ||
     !FUNC_0(VAR_9) ||
     FUNC_2(VAR_7, VAR_3, &VAR_8) != 0 ||
     VAR_8 != VAR_6->vdev_guid ||
     FUNC_2(VAR_7, VAR_4, &VAR_10) != 0) {
  FUNC_5(VAR_6, VAR_0, VAR_2,
      VAR_1);
  FUNC_1(VAR_7);
  return (-1);
 }





 FUNC_1(VAR_7);
 return (0);
}
