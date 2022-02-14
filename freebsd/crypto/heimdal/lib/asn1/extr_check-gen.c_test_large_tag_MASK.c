
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_1__* val; int * member_0; } ;
typedef int lt1 ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
struct TYPE_3__ {int foo; int bar; } ;
typedef TYPE_1__ TESTLargeTag ;


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
 { ((void*)0), 15, "\x30\x0d\xbf\x7f\x03\x02\x01\x01\xbf\x81\x00\x03\x02\x01\x02", "large tag 1" }
    };

    int VAR_7 = sizeof(VAR_6) / sizeof(*VAR_6);
    TESTLargeTag VAR_8;

    FUNC_1(&VAR_8, 0, sizeof(VAR_8));
    VAR_8 = 1;
    VAR_8 = 2;

    VAR_6[0].val = &VAR_8;

    return FUNC_0 (VAR_6, VAR_7, sizeof(TESTLargeTag),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);
}
