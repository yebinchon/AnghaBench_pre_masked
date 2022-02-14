
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z_size; int z_id; TYPE_1__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
typedef int vnode_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;
typedef scalar_t__ offset_t ;
typedef int boolean_t ;
struct TYPE_4__ {int z_os; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(vnode_t *VAR_5, u_long VAR_6, offset_t *VAR_7)
{
 znode_t *VAR_8 = FUNC_2(VAR_5);
 uint64_t VAR_9 = (uint64_t)*VAR_7;
 uint64_t VAR_10;
 int VAR_11;
 boolean_t VAR_12;

 VAR_10 = VAR_8->z_size;
 if (VAR_9 >= VAR_10) {
  return (FUNC_1(VAR_2));
 }

 if (VAR_6 == VAR_4)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 VAR_11 = FUNC_3(VAR_8->z_zfsvfs->z_os, VAR_8->z_id, VAR_12, &VAR_9);

 if (VAR_11 == VAR_3)
  return (FUNC_1(VAR_2));
 if (VAR_9 > VAR_10) {
  FUNC_0(VAR_12);
  VAR_9 = VAR_10;
 }

 if (VAR_9 < *VAR_7)
  return (VAR_11);
 *VAR_7 = VAR_9;
 return (VAR_11);
}
