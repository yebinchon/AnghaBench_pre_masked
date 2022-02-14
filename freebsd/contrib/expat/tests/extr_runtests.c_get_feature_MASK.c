
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum XML_Status { ____Placeholder_XML_Status } XML_Status ;
typedef enum XML_FeatureEnum { ____Placeholder_XML_FeatureEnum } XML_FeatureEnum ;
struct TYPE_3__ {scalar_t__ feature; long value; } ;
typedef TYPE_1__ XML_Feature ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum XML_Status
FUNC_1(enum XML_FeatureEnum VAR_3, long *VAR_4)
{
    const XML_Feature *VAR_5 = FUNC_0();

    if (VAR_5 == ((void*)0))
        return VAR_1;
    for (; VAR_5->feature != VAR_0; VAR_5++) {
        if (VAR_5->feature == VAR_3) {
            *VAR_4 = VAR_5->value;
            return VAR_2;
        }
    }
    return VAR_1;
}
