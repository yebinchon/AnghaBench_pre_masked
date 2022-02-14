
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(bool* VAR_1)
{
    FUNC_1(VAR_1);
    VAR_0--;
    if(VAR_0 < 0)
        FUNC_0("popped too many times in skeleton.");
}
