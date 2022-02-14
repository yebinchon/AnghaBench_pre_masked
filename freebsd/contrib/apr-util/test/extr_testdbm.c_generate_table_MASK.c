
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dsize; void* dptr; } ;
struct TYPE_9__ {int dsize; void* dptr; } ;
struct TYPE_11__ {TYPE_2__ key; TYPE_1__ val; } ;
typedef TYPE_3__ dbm_table_t ;
struct TYPE_12__ {int data; } ;
typedef TYPE_4__ apr_uuid_t ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (void*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;

__attribute__((used)) static dbm_table_t *FUNC_5(void)
{
    unsigned int VAR_3;
    apr_uuid_t VAR_4;
    dbm_table_t *VAR_5 = FUNC_1(VAR_2, sizeof(*VAR_5) * VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_1/2; VAR_3++) {
        FUNC_4(&VAR_4);
        VAR_5[VAR_3].key.dptr = FUNC_2(VAR_2, VAR_4.data, sizeof(VAR_4.data));
        VAR_5[VAR_3].key.dsize = sizeof(VAR_4.data);
        VAR_5[VAR_3].val.dptr = FUNC_0(VAR_2, VAR_0);
        VAR_5[VAR_3].val.dsize = VAR_0;
        FUNC_3(VAR_5[VAR_3].val.dptr, &VAR_4);
    }

    for (; VAR_3 < VAR_1; VAR_3++) {
        FUNC_4(&VAR_4);
        VAR_5[VAR_3].val.dptr = FUNC_2(VAR_2, VAR_4.data, sizeof(VAR_4.data));
        VAR_5[VAR_3].val.dsize = sizeof(VAR_4.data);
        VAR_5[VAR_3].key.dptr = FUNC_0(VAR_2, VAR_0);
        VAR_5[VAR_3].key.dsize = VAR_0;
        FUNC_3(VAR_5[VAR_3].key.dptr, &VAR_4);
    }

    return VAR_5;
}
