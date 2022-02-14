
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 scalar_t__ FUNC_0 (int,int ,int,int*) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, uint8_t VAR_1)
{
    uint64_t VAR_2;

    if (FUNC_0(VAR_0,VAR_1, 1, &VAR_2) < 0)
        return -1;
    return(VAR_2 & 0xff);
}
