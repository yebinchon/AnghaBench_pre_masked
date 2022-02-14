
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ sldns_lookup_table ;


 scalar_t__ FUNC_0 (char const*,int *) ;

sldns_lookup_table *
FUNC_1(sldns_lookup_table *VAR_0, const char *VAR_1)
{
        while (VAR_0->name != ((void*)0)) {
                if (FUNC_0(VAR_1, VAR_0->name) == 0)
                        return VAR_0;
                VAR_0++;
        }
        return ((void*)0);
}
