
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deleted; int key; } ;
typedef TYPE_1__ dbm_table_t ;
typedef int apr_status_t ;
typedef int apr_dbm_t ;
typedef int abts_case ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_3, apr_dbm_t *VAR_4, dbm_table_t *VAR_5)
{
    apr_status_t VAR_6;
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

        if (VAR_7 & 1)
            continue;
        VAR_6 = FUNC_1(VAR_4, VAR_5[VAR_7].key);
        FUNC_0(VAR_3, VAR_0, VAR_6);
        VAR_5[VAR_7].deleted = VAR_2;
    }
}
