
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_3__* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
typedef int c2_2 ;
typedef int c2_1 ;
typedef int c1 ;
struct TYPE_6__ {char* data; int length; } ;
struct TYPE_7__ {int i1; int i2; TYPE_1__ asn1_ellipsis; } ;
struct TYPE_8__ {TYPE_2__ u; int element; } ;
typedef TYPE_3__ TESTChoice2 ;
typedef TYPE_3__ TESTChoice1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_2 (void)
{
    struct test_case VAR_14[] = {
 { ((void*)0), 5, "\xa1\x03\x02\x01\x01", "large choice 1" },
 { ((void*)0), 5, "\xa2\x03\x02\x01\x02", "large choice 2" }
    };

    int VAR_15 = 0, VAR_16 = sizeof(VAR_14) / sizeof(*VAR_14);
    TESTChoice1 VAR_17;
    TESTChoice1 VAR_18;
    TESTChoice2 VAR_19;

    FUNC_1(&VAR_17, 0, sizeof(VAR_17));
    VAR_17 = VAR_0;
    VAR_17 = 1;
    VAR_14[0].val = &VAR_17;

    FUNC_1(&VAR_18, 0, sizeof(VAR_18));
    VAR_18 = VAR_1;
    VAR_18 = 2;
    VAR_14[1].val = &VAR_18;

    VAR_15 += FUNC_0 (VAR_14, VAR_16, sizeof(TESTChoice1),
    (generic_encode)VAR_8,
    (generic_length)VAR_12,
    (generic_decode)VAR_6,
    (generic_free)VAR_10,
    VAR_3,
    (generic_copy)VAR_4);

    FUNC_1(&VAR_19, 0, sizeof(VAR_19));
    VAR_19 = VAR_2;
    VAR_19 = "\xa2\x03\x02\x01\x02";
    VAR_19 = 5;
    VAR_14[1].val = &VAR_19;

    VAR_15 += FUNC_0 (VAR_14, VAR_16, sizeof(TESTChoice2),
    (generic_encode)VAR_9,
    (generic_length)VAR_13,
    (generic_decode)VAR_7,
    (generic_free)VAR_11,
    VAR_3,
    (generic_copy)VAR_5);

    return VAR_15;
}
