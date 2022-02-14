
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes_hashed; int state; int * nh_key; } ;
typedef TYPE_1__ nh_ctx ;
typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int *,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(nh_ctx *VAR_0, const UINT8 *VAR_1, UINT32 VAR_2)





{
    UINT8 *VAR_3;

    VAR_3 = VAR_0->nh_key + VAR_0->bytes_hashed;
    FUNC_0(VAR_3, VAR_1, VAR_0->state, VAR_2);
}
