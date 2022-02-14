
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nxtlist; } ;


 TYPE_1__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;

int FUNC_2(int VAR_2)
{

 return FUNC_0(VAR_1, VAR_2).nxtlist ||
        FUNC_0(VAR_0, VAR_2).nxtlist ||
        FUNC_1(VAR_2);
}
