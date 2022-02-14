
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int ocs_io_t ;
struct TYPE_3__ {int d_id; int rx_id; int ox_id; } ;
typedef TYPE_1__ fc_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ,int ,int ) ;

ocs_io_t *
FUNC_3(ocs_io_t *VAR_0, fc_header_t *VAR_1)
{
 uint16_t VAR_2 = FUNC_1(VAR_1->ox_id);
 uint16_t VAR_3 = FUNC_1(VAR_1->rx_id);
 uint32_t VAR_4 = FUNC_0(VAR_1->d_id);

 return FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);
}
