
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_6__ {int c_data; } ;
typedef TYPE_1__ cbor_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int,int ,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (xo_handle_t *VAR_2)
{
    cbor_private_t *VAR_3 = FUNC_3(((void*)0), sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
 return -1;

    FUNC_0(VAR_3, sizeof(*VAR_3));
    FUNC_2(&VAR_3->c_data);

    FUNC_4(VAR_2, VAR_3);

    FUNC_1(VAR_2, VAR_3, &VAR_3->c_data, VAR_1 | VAR_0, 0, ((void*)0));

    return 0;
}
