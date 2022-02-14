
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_s {int verbose; int counter; } ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    struct print_s *VAR_4 = VAR_2;

    FUNC_1("cert: %d\n", VAR_4->counter++);
    FUNC_0(VAR_0, VAR_3, VAR_4->verbose);

    return 0;
}
