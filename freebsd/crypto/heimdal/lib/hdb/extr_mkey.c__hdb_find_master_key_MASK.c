
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_2__* hdb_master_key ;
struct TYPE_5__ {scalar_t__ vno; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__ keytab; } ;



hdb_master_key
FUNC_0(uint32_t *VAR_0, hdb_master_key VAR_1)
{
    hdb_master_key VAR_2 = ((void*)0);
    while(VAR_1) {
 if(VAR_2 == ((void*)0) && VAR_1->keytab.vno == 0)
     VAR_2 = VAR_1;
 if(VAR_0 == ((void*)0)) {
     if(VAR_2 == ((void*)0) || VAR_1->keytab.vno > VAR_2->keytab.vno)
  VAR_2 = VAR_1;
 } else if((uint32_t)VAR_1->keytab.vno == *VAR_0)
     return VAR_1;
 VAR_1 = VAR_1->next;
    }
    return VAR_2;
}
