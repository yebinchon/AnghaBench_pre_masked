
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int z_id; TYPE_1__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
typedef int matchtype_t ;
typedef int dmu_tx_t ;
struct TYPE_5__ {scalar_t__ z_case; int z_os; scalar_t__ z_norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int *) ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(znode_t *VAR_3, const char *VAR_4, znode_t *VAR_5, dmu_tx_t *VAR_6,
    int VAR_7)
{
 int VAR_8;

 if (VAR_5->z_zfsvfs->z_norm) {
  matchtype_t VAR_9 = VAR_1;

  if (VAR_5->z_zfsvfs->z_case == VAR_2) {
   VAR_9 |= VAR_0;
  }

  VAR_8 = FUNC_1(VAR_5->z_zfsvfs->z_os, VAR_3->z_id,
      VAR_4, VAR_9, VAR_6);
 } else {
  VAR_8 = FUNC_0(VAR_5->z_zfsvfs->z_os, VAR_3->z_id, VAR_4, VAR_6);
 }

 return (VAR_8);
}
