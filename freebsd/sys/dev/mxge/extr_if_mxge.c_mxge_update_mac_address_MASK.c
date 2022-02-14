
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* mac_addr; } ;
typedef TYPE_1__ mxge_softc_t ;
struct TYPE_7__ {int data0; int data1; } ;
typedef TYPE_2__ mxge_cmd_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(mxge_softc_t *VAR_1)
{
 mxge_cmd_t VAR_2;
 uint8_t *VAR_3 = VAR_1->mac_addr;
 int VAR_4;


 VAR_2.data0 = ((VAR_3[0] << 24) | (VAR_3[1] << 16)
       | (VAR_3[2] << 8) | VAR_3[3]);

 VAR_2.data1 = ((VAR_3[4] << 8) | (VAR_3[5]));

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 return VAR_4;
}
