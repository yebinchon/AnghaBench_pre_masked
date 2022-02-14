
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_validate_ctx ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(hx509_context VAR_4, hx509_cert VAR_5, int VAR_6)
{
    const char *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_2(VAR_5);
    if (VAR_7)
 FUNC_9("    friendly name: %s\n", VAR_7);
    FUNC_9("    private key: %s\n",
    FUNC_0(VAR_5) ? "yes" : "no");

    VAR_8 = FUNC_3(VAR_4, VAR_5, ((void*)0));
    if (VAR_8)
 FUNC_1(1, "failed to print cert");

    if (VAR_6) {
 hx509_validate_ctx VAR_9;

 FUNC_7(VAR_4, &VAR_9);
 FUNC_8(VAR_9, VAR_2, VAR_3);
 FUNC_5(VAR_9, VAR_0);
 FUNC_5(VAR_9, VAR_1);

 FUNC_4(VAR_4, VAR_9, VAR_5);

 FUNC_6(VAR_9);
    }
}
