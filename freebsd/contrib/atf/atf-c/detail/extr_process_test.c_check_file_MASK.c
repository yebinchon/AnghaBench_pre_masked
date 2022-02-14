
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum out_type { ____Placeholder_out_type } out_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;



__attribute__((used)) static
void
FUNC_2(const enum out_type VAR_1)
{
    switch (VAR_1) {
    case 128:
        FUNC_0(FUNC_1("stdout: msg", "stdout"));
        FUNC_0(!FUNC_1("stderr: msg", "stdout"));
        break;
    case 129:
        FUNC_0(FUNC_1("stderr: msg", "stderr"));
        FUNC_0(!FUNC_1("stdout: msg", "stderr"));
        break;
    default:
        VAR_0;
    }
}
