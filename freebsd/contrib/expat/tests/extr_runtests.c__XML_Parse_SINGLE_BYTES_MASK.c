
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum XML_Status { ____Placeholder_XML_Status } XML_Status ;
typedef int XML_Parser ;


 int FUNC_0 (int ,char const*,int,int const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum XML_Status
FUNC_1(XML_Parser VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
    enum XML_Status VAR_6 = VAR_0;
    int VAR_7 = 0;

    if (VAR_4 == 0) {
        return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
    }

    for (; VAR_7 < VAR_4; VAR_7++) {
        const int VAR_8 = (VAR_7 == VAR_4 - 1) && VAR_5;
        const char VAR_9 = VAR_3[VAR_7];
        VAR_6 = FUNC_0(VAR_2, &VAR_9, sizeof(char), VAR_8);
        if (VAR_6 != VAR_1) {
            return VAR_6;
        }
    }
    return VAR_6;
}
