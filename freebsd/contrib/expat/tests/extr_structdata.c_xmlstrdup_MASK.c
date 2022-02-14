
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XML_Char ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static XML_Char *
FUNC_4(const XML_Char *VAR_0)
{
    size_t VAR_1 = (FUNC_3(VAR_0) + 1) * sizeof(XML_Char);
    XML_Char *VAR_2 = FUNC_1(VAR_1);

    FUNC_0(VAR_2 != ((void*)0));
    FUNC_2(VAR_2, VAR_0, VAR_1);
    return VAR_2;
}
