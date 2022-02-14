
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_3__* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int generic_copy ;
struct TYPE_4__ {int member_0; int member_1; } ;
struct TYPE_5__ {int member_0; TYPE_1__ member_1; } ;
struct TYPE_6__ {int pvno; int msg_type; int stime; int susec; int error_code; char** crealm; char* realm; int * e_data; int * e_text; TYPE_2__ sname; TYPE_2__* cname; int * cusec; int * ctime; } ;
typedef TYPE_2__ PrincipalName ;
typedef TYPE_3__ KRB_ERROR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_1 (void)
{
    struct test_case VAR_8[] = {
 { ((void*)0), 127,
   "\x7e\x7d\x30\x7b\xa0\x03\x02\x01\x05\xa1\x03\x02\x01\x1e\xa4\x11"
   "\x18\x0f\x32\x30\x30\x33\x31\x31\x32\x34\x30\x30\x31\x31\x31\x39"
   "\x5a\xa5\x05\x02\x03\x04\xed\xa5\xa6\x03\x02\x01\x1f\xa7\x0d\x1b"
   "\x0b\x4e\x41\x44\x41\x2e\x4b\x54\x48\x2e\x53\x45\xa8\x10\x30\x0e"
   "\xa0\x03\x02\x01\x01\xa1\x07\x30\x05\x1b\x03\x6c\x68\x61\xa9\x0d"
   "\x1b\x0b\x4e\x41\x44\x41\x2e\x4b\x54\x48\x2e\x53\x45\xaa\x20\x30"
   "\x1e\xa0\x03\x02\x01\x01\xa1\x17\x30\x15\x1b\x06\x6b\x72\x62\x74"
   "\x67\x74\x1b\x0b\x4e\x41\x44\x41\x2e\x4b\x54\x48\x2e\x53\x45",
   "KRB-ERROR Test 1"
 }
    };
    int VAR_9 = sizeof(VAR_8) / sizeof(*VAR_8);
    KRB_ERROR VAR_10;
    PrincipalName VAR_11 = { 1, { 1, VAR_6 } };
    PrincipalName VAR_12 = { 1, { 2, VAR_7 } };
    char *VAR_13 = "NADA.KTH.SE";

    VAR_10 = 5;
    VAR_10 = 30;
    VAR_10 = ((void*)0);
    VAR_10 = ((void*)0);
    VAR_10 = 1069632679;
    VAR_10 = 322981;
    VAR_10 = 31;
    VAR_10 = &VAR_13;
    VAR_10 = &VAR_11;
    VAR_10 = "NADA.KTH.SE";
    VAR_10 = VAR_12;
    VAR_10 = ((void*)0);
    VAR_10 = ((void*)0);

    VAR_8[0].val = &VAR_10;

    return FUNC_0 (VAR_8, VAR_9, sizeof(KRB_ERROR),
    (generic_encode)VAR_3,
    (generic_length)VAR_5,
    (generic_decode)VAR_2,
    (generic_free)VAR_4,
    VAR_0,
    (generic_copy)VAR_1);
}
