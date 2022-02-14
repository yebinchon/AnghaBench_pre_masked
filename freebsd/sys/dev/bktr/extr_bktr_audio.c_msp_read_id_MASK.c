
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bktr_ptr_t ;
struct TYPE_4__ {int msp_version_string; int msp_addr; } ;


 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;

void FUNC_2( bktr_ptr_t VAR_0 ){
    int VAR_1=0, VAR_2=0;
    VAR_1 = FUNC_0(VAR_0, VAR_0->msp_addr, 0x12, 0x001e);
    VAR_2 = FUNC_0(VAR_0, VAR_0->msp_addr, 0x12, 0x001f);

    FUNC_1(VAR_0->msp_version_string, "34%02d%c-%c%d",
      (VAR_2>>8)&0xff, (VAR_1&0xff)+'@', ((VAR_1>>8)&0xff)+'@', VAR_2&0x1f);

}
