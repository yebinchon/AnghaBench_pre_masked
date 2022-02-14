
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ cvmx_nand_status_t ;
struct TYPE_7__ {int fifteen; } ;
struct TYPE_6__ {int three; } ;
struct TYPE_8__ {TYPE_2__ bus_rel; TYPE_1__ chip_dis; } ;
typedef TYPE_3__ cvmx_nand_cmd_t ;
typedef int cmd ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static inline cvmx_nand_status_t FUNC_5(void)
{
    cvmx_nand_status_t VAR_2;
    cvmx_nand_cmd_t VAR_3;

    FUNC_0();


    FUNC_4(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.chip_dis.three = 3;
    VAR_2 = FUNC_2(VAR_3);
    if (VAR_2)
        FUNC_1(VAR_2);


    FUNC_4(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.bus_rel.fifteen = 15;
    VAR_2 = FUNC_2(VAR_3);
    if (VAR_2)
        FUNC_1(VAR_2);


    FUNC_3(VAR_1, 1);
    FUNC_1(VAR_0);
}
