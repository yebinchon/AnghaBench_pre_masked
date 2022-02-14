
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int u_char ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_7__ {int msg_len; int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(uhash_ctx_t VAR_2, u_char *VAR_3)

{
    UINT64 VAR_4[VAR_1];
    UINT8 *VAR_5 = (UINT8 *)&VAR_4;

    if (VAR_2->msg_len > VAR_0) {
        if (VAR_2->msg_len % VAR_0) {
            FUNC_2(&VAR_2->hash, VAR_5);
            FUNC_3(VAR_2,(UINT32 *)VAR_5);
        }
        FUNC_0(VAR_2, VAR_3);
    } else {
        FUNC_2(&VAR_2->hash, VAR_5);
        FUNC_1(VAR_2,VAR_5, VAR_3);
    }
    FUNC_4(VAR_2);
    return (1);
}
