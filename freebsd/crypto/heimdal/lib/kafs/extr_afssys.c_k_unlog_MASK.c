
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ViceIoctl {int dummy; } ;
typedef int parms ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ViceIoctl*,int ) ;
 int FUNC_1 (struct ViceIoctl*,int ,int) ;

int
FUNC_2(void)
{
    struct ViceIoctl VAR_1;
    FUNC_1(&VAR_1, 0, sizeof(VAR_1));
    return FUNC_0(0, VAR_0, &VAR_1, 0);
}
