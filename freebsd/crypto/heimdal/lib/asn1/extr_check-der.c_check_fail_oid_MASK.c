
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; int * member_0; } ;
typedef int heim_oid ;
typedef int generic_decode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct test_case*,int,int,int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
    struct test_case VAR_1[] = {
 {((void*)0), 0, "", "empty input data"},
 {((void*)0), 2, "\x00\x80", "last byte continuation" },
 {((void*)0), 11, "\x00\x81\x80\x80\x80\x80\x80\x80\x80\x80\x00",
 "oid element overflow" }
    };
    int VAR_2 = sizeof(VAR_1) / sizeof(*VAR_1);

    return FUNC_0(VAR_1, VAR_2, sizeof(heim_oid),
          (generic_decode)VAR_0);
}
