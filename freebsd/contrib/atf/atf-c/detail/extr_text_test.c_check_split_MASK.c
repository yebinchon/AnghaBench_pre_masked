
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char const*,int *) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static
void
FUNC_9(const char *VAR_0, const char *VAR_1, const char *VAR_2[])
{
    atf_list_t VAR_3;
    const char **VAR_4;
    size_t VAR_5;

    FUNC_8("Splitting '%s' with delimiter '%s'\n", VAR_0, VAR_1);
    FUNC_2(FUNC_7(VAR_0, VAR_1, &VAR_3));

    FUNC_8("Expecting %zd words\n", FUNC_3(VAR_2));
    FUNC_0(FUNC_6(&VAR_3), FUNC_3(VAR_2));

    for (VAR_4 = VAR_2, VAR_5 = 0; *VAR_4 != ((void*)0); VAR_4++, VAR_5++) {
        FUNC_8("Word at position %zd should be '%s'\n", VAR_5, VAR_2[VAR_5]);
        FUNC_1((const char *)FUNC_5(&VAR_3, VAR_5), VAR_2[VAR_5]);
    }

    FUNC_4(&VAR_3);
}
