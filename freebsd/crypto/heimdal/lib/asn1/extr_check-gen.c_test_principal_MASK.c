
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_3__* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
struct TYPE_5__ {int member_0; int member_1; } ;
struct TYPE_4__ {TYPE_2__ member_1; int member_0; } ;
struct TYPE_6__ {char* member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ Principal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int **,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_4 (void)
{

    struct test_case VAR_10[] = {
 { ((void*)0), 29,
   "\x30\x1b\xa0\x10\x30\x0e\xa0\x03\x02\x01\x01\xa1\x07\x30\x05\x1b"
   "\x03\x6c\x68\x61\xa1\x07\x1b\x05\x53\x55\x2e\x53\x45"
 },
 { ((void*)0), 35,
   "\x30\x21\xa0\x16\x30\x14\xa0\x03\x02\x01\x01\xa1\x0d\x30\x0b\x1b"
   "\x03\x6c\x68\x61\x1b\x04\x72\x6f\x6f\x74\xa1\x07\x1b\x05\x53\x55"
   "\x2e\x53\x45"
 },
 { ((void*)0), 54,
   "\x30\x34\xa0\x26\x30\x24\xa0\x03\x02\x01\x03\xa1\x1d\x30\x1b\x1b"
   "\x04\x68\x6f\x73\x74\x1b\x13\x6e\x75\x74\x63\x72\x61\x63\x6b\x65"
   "\x72\x2e\x65\x2e\x6b\x74\x68\x2e\x73\x65\xa1\x0a\x1b\x08\x45\x2e"
   "\x4b\x54\x48\x2e\x53\x45"
 }
    };


    Principal VAR_11[] = {
 { { VAR_0, { 1, VAR_8 } }, "SU.SE" },
 { { VAR_0, { 2, VAR_9 } }, "SU.SE" },
 { { VAR_1, { 2, VAR_3 } }, "E.KTH.SE" }
    };
    int VAR_12, VAR_13;
    int VAR_14 = sizeof(VAR_10) / sizeof(*VAR_10);

    for (VAR_12 = 0; VAR_12 < VAR_14; ++VAR_12) {
 VAR_10[VAR_12].val = &VAR_11[VAR_12];
 if (FUNC_0 (&VAR_10[VAR_12].name, "Principal %d", VAR_12) < 0)
     FUNC_1(1, "malloc");
 if (VAR_10[VAR_12].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_13 = FUNC_3 (VAR_10, VAR_14, sizeof(Principal),
   (generic_encode)VAR_5,
   (generic_length)VAR_7,
   (generic_decode)VAR_4,
   (generic_free)VAR_6,
   VAR_2,
   ((void*)0));
    for (VAR_12 = 0; VAR_12 < VAR_14; ++VAR_12)
 FUNC_2 (VAR_10[VAR_12].name);

    return VAR_13;
}
