
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deleted; int key; } ;
typedef TYPE_1__ dbm_table_t ;
typedef int apr_dbm_t ;
typedef int abts_case ;


 int FUNC_0 (int *,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_1, apr_dbm_t *VAR_2, dbm_table_t *VAR_3)
{
    unsigned int VAR_4;
    int VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_5 = FUNC_1(VAR_2, VAR_3[VAR_4].key);
        if (VAR_3[VAR_4].deleted) {
            FUNC_0(VAR_1, VAR_5 == 0);
        } else {
            FUNC_0(VAR_1, VAR_5 != 0);
        }
    }
}
