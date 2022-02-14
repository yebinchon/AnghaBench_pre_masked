
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_isdst; scalar_t__ __tm_gmtoff; scalar_t__ tm_gmtoff; } ;
typedef scalar_t__ apr_int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static apr_int32_t FUNC_0(struct tm *VAR_3)
{
    if (VAR_3->tm_isdst)
        return VAR_2 + 3600;

    return VAR_2;

}
