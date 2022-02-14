
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,char,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3)
{
    device_t VAR_4;
    int VAR_5;
    int VAR_6;
    VAR_5 = (FUNC_4(VAR_2) + (VAR_3 - 1)) % 4;





    VAR_4 = FUNC_2(VAR_1);
    VAR_6 = FUNC_0(FUNC_2(VAR_4), VAR_1, VAR_5 + 1);
    if (FUNC_1(VAR_6) && VAR_0) {
 FUNC_3(VAR_1, "slot %d INT%c is routed to irq %d\n",
     FUNC_4(VAR_2), 'A' + VAR_3 - 1, VAR_6);
    }
    return(VAR_6);
}
