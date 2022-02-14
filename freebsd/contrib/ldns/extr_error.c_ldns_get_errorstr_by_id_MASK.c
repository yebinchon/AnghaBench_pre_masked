
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ ldns_lookup_table ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

const char *
FUNC_1(ldns_status VAR_1)
{
        ldns_lookup_table *VAR_2;

        VAR_2 = FUNC_0(VAR_0, VAR_1);

        if (VAR_2) {
                return VAR_2->name;
        }
        return ((void*)0);
}
