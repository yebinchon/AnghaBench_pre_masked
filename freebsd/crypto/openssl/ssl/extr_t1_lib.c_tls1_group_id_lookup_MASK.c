
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int TLS_GROUP_INFO ;


 int FUNC_0 (int const*) ;
 int const* VAR_0 ;

const TLS_GROUP_INFO *FUNC_1(uint16_t VAR_1)
{

    if (VAR_1 < 1 || VAR_1 > FUNC_0(VAR_0))
        return ((void*)0);
    return &VAR_0[VAR_1 - 1];
}
