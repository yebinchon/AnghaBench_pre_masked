
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_8__* val; int * member_0; } ;
typedef int rdn2 ;
typedef int rdn1 ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
typedef int cmp_L ;
typedef int cmp_CN ;
typedef int atv2 ;
typedef int atv1 ;
struct TYPE_13__ {char* data; int length; } ;
struct TYPE_14__ {TYPE_4__ printableString; } ;
struct TYPE_15__ {TYPE_5__ u; void* element; } ;
struct TYPE_12__ {int length; unsigned int* components; } ;
struct TYPE_18__ {TYPE_6__ value; TYPE_3__ type; } ;
struct TYPE_10__ {int len; TYPE_7__* val; } ;
struct TYPE_11__ {TYPE_1__ rdnSequence; } ;
struct TYPE_17__ {TYPE_2__ u; void* element; } ;
struct TYPE_16__ {int len; TYPE_9__* val; } ;
typedef TYPE_7__ RelativeDistinguishedName ;
typedef TYPE_8__ Name ;
typedef TYPE_9__ AttributeTypeAndValue ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_1 (void)
{
    struct test_case VAR_8[] = {
 { ((void*)0), 35,
   "\x30\x21\x31\x1f\x30\x0b\x06\x03\x55\x04\x03\x13\x04\x4c\x6f\x76"
   "\x65\x30\x10\x06\x03\x55\x04\x07\x13\x09\x53\x54\x4f\x43\x4b\x48"
   "\x4f\x4c\x4d",
   "Name CN=Love+L=STOCKHOLM"
 },
 { ((void*)0), 35,
   "\x30\x21\x31\x1f\x30\x0b\x06\x03\x55\x04\x03\x13\x04\x4c\x6f\x76"
   "\x65\x30\x10\x06\x03\x55\x04\x07\x13\x09\x53\x54\x4f\x43\x4b\x48"
   "\x4f\x4c\x4d",
   "Name L=STOCKHOLM+CN=Love"
 }
    };

    int VAR_9 = sizeof(VAR_8) / sizeof(*VAR_8);
    Name VAR_10, VAR_11;
    RelativeDistinguishedName VAR_12[1];
    RelativeDistinguishedName VAR_13[1];
    AttributeTypeAndValue VAR_14[2];
    AttributeTypeAndValue VAR_15[2];
    unsigned VAR_16[] = { 2, 5, 4, 3 };
    unsigned VAR_17[] = { 2, 5, 4, 7 };


    VAR_10 = VAR_1;
    VAR_10 = VAR_12;
    VAR_10 = sizeof(VAR_12)/sizeof(VAR_12[0]);
    VAR_12[0].val = VAR_14;
    VAR_12[0].len = sizeof(VAR_14)/sizeof(VAR_14[0]);

    VAR_14[0].type.length = sizeof(VAR_16)/sizeof(VAR_16[0]);
    VAR_14[0].type.components = VAR_16;
    VAR_14[0].value.element = VAR_0;
    VAR_14[0].value.u.printableString.data = "Love";
    VAR_14[0].value.u.printableString.length = 4;

    VAR_14[1].type.length = sizeof(VAR_17)/sizeof(VAR_17[0]);
    VAR_14[1].type.components = VAR_17;
    VAR_14[1].value.element = VAR_0;
    VAR_14[1].value.u.printableString.data = "STOCKHOLM";
    VAR_14[1].value.u.printableString.length = 9;


    VAR_11 = VAR_1;
    VAR_11 = VAR_13;
    VAR_11 = sizeof(VAR_13)/sizeof(VAR_13[0]);
    VAR_13[0].val = VAR_15;
    VAR_13[0].len = sizeof(VAR_15)/sizeof(VAR_15[0]);

    VAR_15[0].type.length = sizeof(VAR_17)/sizeof(VAR_17[0]);
    VAR_15[0].type.components = VAR_17;
    VAR_15[0].value.element = VAR_0;
    VAR_15[0].value.u.printableString.data = "STOCKHOLM";
    VAR_15[0].value.u.printableString.length = 9;

    VAR_15[1].type.length = sizeof(VAR_16)/sizeof(VAR_16[0]);
    VAR_15[1].type.components = VAR_16;
    VAR_15[1].value.element = VAR_0;
    VAR_15[1].value.u.printableString.data = "Love";
    VAR_15[1].value.u.printableString.length = 4;


    VAR_8[0].val = &VAR_10;
    VAR_8[1].val = &VAR_11;

    return FUNC_0 (VAR_8, VAR_9, sizeof(Name),
    (generic_encode)VAR_5,
    (generic_length)VAR_7,
    (generic_decode)VAR_4,
    (generic_free)VAR_6,
    VAR_2,
    (generic_copy)VAR_3);
}
