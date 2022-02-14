
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XML_LChar ;
struct TYPE_3__ {int major; int minor; int micro; } ;
typedef TYPE_1__ XML_Expat_Version ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(const XML_LChar *VAR_5,
              XML_Expat_Version *VAR_6)
{
    while (*VAR_5 != 0x00) {
        if (*VAR_5 >= VAR_0 && *VAR_5 <= VAR_1)
            break;
        VAR_5++;
    }
    if (*VAR_5 == 0x00)
        return VAR_3;


    VAR_6->major = 0;
    while (*VAR_5 >= VAR_0 && *VAR_5 <= VAR_1) {
        VAR_6->major =
            10 * VAR_6->major + (*VAR_5++ - VAR_0);
    }
    if (*VAR_5++ != VAR_2)
        return VAR_3;


    VAR_6->minor = 0;
    while (*VAR_5 >= VAR_0 && *VAR_5 <= VAR_1) {
        VAR_6->minor =
            10 * VAR_6->minor + (*VAR_5++ - VAR_0);
    }
    if (*VAR_5++ != VAR_2)
        return VAR_3;


    VAR_6->micro = 0;
    while (*VAR_5 >= VAR_0 && *VAR_5 <= VAR_1) {
        VAR_6->micro =
            10 * VAR_6->micro + (*VAR_5++ - VAR_0);
    }
    if (*VAR_5 != 0x00)
        return VAR_3;
    return VAR_4;
}
