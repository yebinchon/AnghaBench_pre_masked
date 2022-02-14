
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int const) ;
 int VAR_0 ;

__attribute__((used)) static
atf_error_t
FUNC_4(const int VAR_1, const int VAR_2)
{
    atf_error_t VAR_3;

    if (VAR_1 != VAR_2) {
        if (FUNC_3(VAR_1, VAR_2) == -1) {
            VAR_3 = FUNC_0(VAR_0, "Could not allocate file descriptor");
        } else {
            FUNC_2(VAR_1);
            VAR_3 = FUNC_1();
        }
    } else
        VAR_3 = FUNC_1();

    return VAR_3;
}
