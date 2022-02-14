
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; int * member_0; } ;
typedef int heim_bmp_string ;
typedef int generic_decode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct test_case*,int,int,int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
    struct test_case VAR_1[] = {
 {((void*)0), 1, "\x00", "odd (1) length bmpstring"},
 {((void*)0), 3, "\x00\x00\x00", "odd (3) length bmpstring"}
    };
    int VAR_2 = sizeof(VAR_1) / sizeof(*VAR_1);

    return FUNC_0(VAR_1, VAR_2, sizeof(heim_bmp_string),
          (generic_decode)VAR_0);
}
