
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vdev_t ;
typedef int uint64_t ;
typedef int boolean_t ;
struct TYPE_2__ {int (* vdev_op_remap ) (int *,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
 vdev_t *VAR_6 = VAR_3;
 FUNC_1(VAR_6, VAR_4, VAR_5);
 boolean_t VAR_7 = VAR_0;
 VAR_2.vdev_op_remap(VAR_6, VAR_4, VAR_5,
     VAR_1, &VAR_7);
}
