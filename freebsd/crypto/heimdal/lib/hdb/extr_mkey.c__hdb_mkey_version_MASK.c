
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hdb_master_key ;
struct TYPE_4__ {int vno; } ;
struct TYPE_5__ {TYPE_1__ keytab; } ;



int
FUNC_0(hdb_master_key VAR_0)
{
    return VAR_0->keytab.vno;
}
