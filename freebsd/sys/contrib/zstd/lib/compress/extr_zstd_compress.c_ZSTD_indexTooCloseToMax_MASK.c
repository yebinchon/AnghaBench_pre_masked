
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ base; scalar_t__ nextSrc; } ;
typedef TYPE_1__ ZSTD_window_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(ZSTD_window_t VAR_2)
{
    return (size_t)(VAR_2.nextSrc - VAR_2.base) > (VAR_0 - VAR_1);
}
