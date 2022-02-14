
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_1__* val; int * member_0; } ;
typedef int ku4 ;
typedef int ku3 ;
typedef int ku2 ;
typedef int ku1 ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
struct TYPE_3__ {int digitalSignature; int keyEncipherment; int decipherOnly; } ;
typedef TYPE_1__ KeyUsage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2 (void)
{
    struct test_case VAR_6[] = {
 { ((void*)0), 4,
   "\x03\x02\x07\x80",
   "bitstring 1"
 },
 { ((void*)0), 4,
   "\x03\x02\x05\xa0",
   "bitstring 2"
 },
 { ((void*)0), 5,
   "\x03\x03\x07\x00\x80",
   "bitstring 3"
 },
 { ((void*)0), 3,
   "\x03\x01\x00",
   "bitstring 4"
 }
    };

    int VAR_7 = sizeof(VAR_6) / sizeof(*VAR_6);
    KeyUsage VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_1(&VAR_8, 0, sizeof(VAR_8));
    VAR_8 = 1;
    VAR_6[0].val = &VAR_8;

    FUNC_1(&VAR_9, 0, sizeof(VAR_9));
    VAR_9 = 1;
    VAR_9 = 1;
    VAR_6[1].val = &VAR_9;

    FUNC_1(&VAR_10, 0, sizeof(VAR_10));
    VAR_10 = 1;
    VAR_6[2].val = &VAR_10;

    FUNC_1(&VAR_11, 0, sizeof(VAR_11));
    VAR_6[3].val = &VAR_11;


    return FUNC_0 (VAR_6, VAR_7, sizeof(KeyUsage),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);
}
