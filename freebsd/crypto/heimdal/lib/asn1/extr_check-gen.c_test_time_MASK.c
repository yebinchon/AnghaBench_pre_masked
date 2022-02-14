
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; int* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
typedef int KerberosTime ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_1 (void)
{
    struct test_case VAR_6[] = {
 { ((void*)0), 17,
   "\x18\x0f\x31\x39\x37\x30\x30\x31\x30\x31\x30\x31\x31\x38\x33\x31"
   "\x5a",
   "time 1" },
 { ((void*)0), 17,
   "\x18\x0f\x32\x30\x30\x39\x30\x35\x32\x34\x30\x32\x30\x32\x34\x30"
   "\x5a"
   "time 2" }
    };

    int VAR_7 = sizeof(VAR_6) / sizeof(*VAR_6);
    KerberosTime VAR_8[] = {
 4711,
 1243130560
    };

    VAR_6[0].val = &VAR_8[0];
    VAR_6[1].val = &VAR_8[1];

    return FUNC_0 (VAR_6, VAR_7, sizeof(KerberosTime),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);
}
