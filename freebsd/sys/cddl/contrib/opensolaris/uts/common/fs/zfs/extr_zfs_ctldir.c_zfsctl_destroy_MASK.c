
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* z_ctldir; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int sfs_node_t ;
struct TYPE_4__ {int * snapdir; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(zfsvfs_t *VAR_0)
{
 FUNC_0(VAR_0->z_ctldir->snapdir);
 FUNC_0((sfs_node_t *)VAR_0->z_ctldir);
 VAR_0->z_ctldir = ((void*)0);
}
