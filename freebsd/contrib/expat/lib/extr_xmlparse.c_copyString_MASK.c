
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* (* malloc_fcn ) (int) ;} ;
typedef TYPE_1__ XML_Memory_Handling_Suite ;
typedef scalar_t__ XML_Char ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_1 (int) ;

__attribute__((used)) static XML_Char *
FUNC_2(const XML_Char *VAR_0,
           const XML_Memory_Handling_Suite *VAR_1)
{
    int VAR_2 = 0;
    XML_Char *VAR_3;


    while (VAR_0[VAR_2] != 0) {
      VAR_2++;
    }

    VAR_2++;


    VAR_3 = VAR_1->malloc_fcn(VAR_2 * sizeof(XML_Char));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_0(VAR_3, VAR_0, VAR_2 * sizeof(XML_Char));
    return VAR_3;
}
