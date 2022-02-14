
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int rcrProd; } ;
typedef TYPE_1__ t_BmPortal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static __inline__ void FUNC_4(t_BmPortal *VAR_4, uint32_t VAR_5,uint8_t VAR_6)
{
    uint32_t VAR_7;

    FUNC_0(VAR_4, VAR_1, (uint8_t)(VAR_3 | (VAR_6 & VAR_2)));

    VAR_7 = ++VAR_4->rcrProd;
    if ((VAR_5 & VAR_0) ==
        VAR_0)
        FUNC_3(VAR_4, 1);
    FUNC_1(VAR_4);
    if ((VAR_5 & VAR_0) !=
        VAR_0)
        return;
    FUNC_2(VAR_4, VAR_7);
}
