
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_2__* val; int * member_0; } ;
struct TYPE_6__ {char* data; int length; } ;
typedef TYPE_1__ heim_any ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
typedef int c3 ;
typedef int c2 ;
typedef int c1 ;
struct TYPE_8__ {int ai; } ;
struct TYPE_7__ {int three; TYPE_4__* tagless; TYPE_1__* tagless2; } ;
typedef TYPE_2__ TESTAlloc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_4 (void)
{
    struct test_case VAR_6[] = {
 { ((void*)0), 14,
   "\x30\x0c\x30\x05\xa0\x03\x02\x01\x01\xa1\x03\x02\x01\x03",
   "alloc 1" },
 { ((void*)0), 7,
   "\x30\x05\xa1\x03\x02\x01\x03",
   "alloc 2" },
 { ((void*)0), 10,
   "\x30\x08\xa1\x03\x02\x01\x04\x02\x01\x05",
   "alloc 3" }
    };

    int VAR_7 = 0, VAR_8 = sizeof(VAR_6) / sizeof(*VAR_6);
    TESTAlloc VAR_9, VAR_10, VAR_11;
    heim_any VAR_12;

    FUNC_3(&VAR_9, 0, sizeof(VAR_9));
    VAR_9 = FUNC_0(1, sizeof(*VAR_9));
    VAR_9->ai = 1;
    VAR_9 = 3;
    VAR_6[0].val = &VAR_9;

    FUNC_3(&VAR_10, 0, sizeof(VAR_10));
    VAR_10 = ((void*)0);
    VAR_10 = 3;
    VAR_6[1].val = &VAR_10;

    FUNC_3(&VAR_11, 0, sizeof(VAR_11));
    VAR_11 = ((void*)0);
    VAR_11 = 4;
    VAR_11 = &VAR_12;
    VAR_12 = "\x02\x01\x05";
    VAR_12 = 3;
    VAR_6[2].val = &VAR_11;

    VAR_7 += FUNC_2 (VAR_6, VAR_8, sizeof(TESTAlloc),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);

    FUNC_1(VAR_9);

    return VAR_7;
}
