
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_1__* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
struct TYPE_2__ {int* zero; int* one; } ;
typedef TYPE_1__ TESTOptional ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_1 (void)
{
    struct test_case VAR_6[] = {
 { ((void*)0), 2,
   "\x30\x00",
   "optional 0" },
 { ((void*)0), 7,
   "\x30\x05\xa0\x03\x02\x01\x00",
   "optional 1" },
 { ((void*)0), 7,
   "\x30\x05\xa1\x03\x02\x01\x01",
   "optional 2" },
 { ((void*)0), 12,
   "\x30\x0a\xa0\x03\x02\x01\x00\xa1\x03\x02\x01\x01",
   "optional 3" }
    };

    int VAR_7 = 0, VAR_8 = sizeof(VAR_6) / sizeof(*VAR_6);
    TESTOptional VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 1;

    VAR_9 = ((void*)0);
    VAR_9 = ((void*)0);
    VAR_6[0].val = &VAR_9;

    VAR_10 = &VAR_13;
    VAR_10 = ((void*)0);
    VAR_6[1].val = &VAR_10;

    VAR_11 = ((void*)0);
    VAR_11 = &VAR_14;
    VAR_6[2].val = &VAR_11;

    VAR_12 = &VAR_13;
    VAR_12 = &VAR_14;
    VAR_6[3].val = &VAR_12;

    VAR_7 += FUNC_0 (VAR_6, VAR_8, sizeof(TESTOptional),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);

    return VAR_7;
}
