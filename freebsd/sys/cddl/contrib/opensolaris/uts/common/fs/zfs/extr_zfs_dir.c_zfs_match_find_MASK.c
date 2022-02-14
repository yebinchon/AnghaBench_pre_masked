
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_6__ {int z_os; scalar_t__ z_norm; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint64_t ;
typedef int matchtype_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char const*,int,int,int *) ;
 int FUNC_2 (int ,int ,char const*,int,int,int *,int ,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfsvfs_t *VAR_0, znode_t *VAR_1, const char *VAR_2,
    matchtype_t VAR_3, uint64_t *VAR_4)
{
 int VAR_5;

 if (VAR_0->z_norm) {





  VAR_5 = FUNC_2(VAR_0->z_os, VAR_1->z_id, VAR_2, 8, 1,
      VAR_4, VAR_3, ((void*)0), 0, ((void*)0));
 } else {
  VAR_5 = FUNC_1(VAR_0->z_os, VAR_1->z_id, VAR_2, 8, 1, VAR_4);
 }
 *VAR_4 = FUNC_0(*VAR_4);

 return (VAR_5);
}
