
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tx_tag; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_4)
{
        if (FUNC_1(((void*)0),
                1, 0,
                VAR_0,
                VAR_0,
                ((void*)0), ((void*)0),
                VAR_2,
                VAR_1,
                VAR_3,
                0,
                ((void*)0),
                ((void*)0),
                &VAR_4->tx_tag)) {

                FUNC_0(VAR_4, "tx_tag alloc failed\n");
                return (-1);
        }

 return (0);
}
