
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next_data_empty; int bytes_hashed; scalar_t__ state; scalar_t__ data; } ;
typedef TYPE_1__ nh_ctx ;
typedef int UINT8 ;
typedef scalar_t__ UINT64 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(nh_ctx *VAR_1, UINT8 *VAR_2)







{
    int VAR_3, VAR_4;

    if (VAR_1->next_data_empty != 0) {
        VAR_3 = ((VAR_1->next_data_empty + (VAR_0 - 1)) &
                                                ~(VAR_0 - 1));
        FUNC_2(VAR_1->data + VAR_1->next_data_empty,
                                          VAR_3 - VAR_1->next_data_empty);
        FUNC_1(VAR_1, VAR_1->data, VAR_3);
        VAR_1->bytes_hashed += VAR_1->next_data_empty;
    } else if (VAR_1->bytes_hashed == 0) {
 VAR_3 = VAR_0;
        FUNC_2(VAR_1->data, VAR_0);
        FUNC_1(VAR_1, VAR_1->data, VAR_3);
    }

    VAR_4 = (VAR_1->bytes_hashed << 3);
    ((UINT64 *)VAR_2)[0] = ((UINT64 *)VAR_1->state)[0] + VAR_4;
    FUNC_0(VAR_1);
}
