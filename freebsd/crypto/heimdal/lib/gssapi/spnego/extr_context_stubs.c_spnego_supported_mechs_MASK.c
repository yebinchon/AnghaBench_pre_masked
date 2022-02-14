
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gss_OID_set ;
struct TYPE_7__ {size_t count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,TYPE_1__**) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_1__**) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__*,TYPE_1__**) ;

__attribute__((used)) static OM_uint32
FUNC_5(OM_uint32 *VAR_2, gss_OID_set *VAR_3)
{
    OM_uint32 VAR_4, VAR_5;
    gss_OID_set VAR_6;
    size_t VAR_7;

    VAR_4 = FUNC_2(VAR_2, &VAR_6);
    if (VAR_4 != VAR_1)
 return VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 != VAR_1) {
 FUNC_4(&VAR_5, &VAR_6);
 return VAR_4;
    }

    for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
 if (FUNC_3(&VAR_6->elements[VAR_7], VAR_0))
     continue;

 VAR_4 = FUNC_0(VAR_2, &VAR_6->elements[VAR_7], VAR_3);
 if (VAR_4) {
     FUNC_4(&VAR_5, &VAR_6);
     FUNC_4(&VAR_5, VAR_3);
     return VAR_4;
 }
    }
    FUNC_4(&VAR_5, &VAR_6);
    return VAR_4;
}
