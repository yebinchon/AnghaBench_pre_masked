
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int * name; } ;
typedef TYPE_1__ sldns_lookup_table ;



sldns_lookup_table *
FUNC_0(sldns_lookup_table *VAR_0, int VAR_1)
{
        while (VAR_0->name != ((void*)0)) {
                if (VAR_0->id == VAR_1)
                        return VAR_0;
                VAR_0++;
        }
        return ((void*)0);
}
