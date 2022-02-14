
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_jailid; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
struct TYPE_5__ {int td_ucred; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(zfs_cmd_t *VAR_1)
{

 return (FUNC_0(VAR_0->td_ucred, VAR_1->zc_name,
     (int)VAR_1->zc_jailid));
}
