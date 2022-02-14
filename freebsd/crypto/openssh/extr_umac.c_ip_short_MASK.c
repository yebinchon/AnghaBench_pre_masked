
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int u_char ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_3__ {int* ip_trans; scalar_t__ ip_keys; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(uhash_ctx_t VAR_0, UINT8 *VAR_1, u_char *VAR_2)
{
    UINT64 VAR_3;
    UINT64 *VAR_4 = (UINT64 *)VAR_1;

    VAR_3 = FUNC_1(0,VAR_0->ip_keys, VAR_4[0]);
    FUNC_0((UINT32 *)VAR_2+0, FUNC_2(VAR_3) ^ VAR_0->ip_trans[0]);
}
