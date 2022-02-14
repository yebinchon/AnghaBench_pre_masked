
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int val ;
struct TYPE_8__ {int dptr; int dsize; } ;
struct TYPE_9__ {TYPE_1__ val; int deleted; int key; } ;
typedef TYPE_2__ dbm_table_t ;
typedef int apr_status_t ;
typedef int apr_dbm_t ;
struct TYPE_10__ {int dsize; int dptr; } ;
typedef TYPE_3__ apr_datum_t ;
typedef int abts_case ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,int ,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_5(abts_case *VAR_2, apr_dbm_t *VAR_3, dbm_table_t *VAR_4)
{
    apr_status_t VAR_5;
    unsigned int VAR_6;
    apr_datum_t VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        FUNC_4(&VAR_7, 0, sizeof(VAR_7));
        VAR_5 = FUNC_1(VAR_3, VAR_4[VAR_6].key, &VAR_7);
        if (!VAR_4[VAR_6].deleted) {
            FUNC_0(VAR_2, VAR_0, VAR_5);
            FUNC_0(VAR_2, VAR_4[VAR_6].val.dsize, VAR_7.dsize);
            FUNC_0(VAR_2, 0, FUNC_3(VAR_4[VAR_6].val.dptr, VAR_7.dptr, VAR_7.dsize));
            FUNC_2(VAR_3, VAR_7);
        } else {
            FUNC_0(VAR_2, 0, VAR_7.dsize);
        }
    }
}
