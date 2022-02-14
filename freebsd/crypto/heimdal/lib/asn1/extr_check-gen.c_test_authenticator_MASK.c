
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
typedef int generic_copy ;
struct TYPE_5__ {int member_0; int member_1; } ;
struct TYPE_4__ {TYPE_2__ member_1; int member_0; } ;
struct TYPE_6__ {int member_0; char* member_1; int member_4; int member_5; int * member_8; int * member_7; int * member_6; int * member_3; TYPE_1__ member_2; } ;
typedef TYPE_3__ Authenticator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int **,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_4 (void)
{
    struct test_case VAR_9[] = {
 { ((void*)0), 63,
   "\x62\x3d\x30\x3b\xa0\x03\x02\x01\x05\xa1\x0a\x1b\x08"
   "\x45\x2e\x4b\x54\x48\x2e\x53\x45\xa2\x10\x30\x0e\xa0"
   "\x03\x02\x01\x01\xa1\x07\x30\x05\x1b\x03\x6c\x68\x61"
   "\xa4\x03\x02\x01\x0a\xa5\x11\x18\x0f\x31\x39\x37\x30"
   "\x30\x31\x30\x31\x30\x30\x30\x31\x33\x39\x5a"
 },
 { ((void*)0), 67,
   "\x62\x41\x30\x3f\xa0\x03\x02\x01\x05\xa1\x07\x1b\x05"
   "\x53\x55\x2e\x53\x45\xa2\x16\x30\x14\xa0\x03\x02\x01"
   "\x01\xa1\x0d\x30\x0b\x1b\x03\x6c\x68\x61\x1b\x04\x72"
   "\x6f\x6f\x74\xa4\x04\x02\x02\x01\x24\xa5\x11\x18\x0f"
   "\x31\x39\x37\x30\x30\x31\x30\x31\x30\x30\x31\x36\x33"
   "\x39\x5a"
 }
    };

    Authenticator VAR_10[] = {
 { 5, "E.KTH.SE", { VAR_0, { 1, VAR_7 } },
   ((void*)0), 10, 99, ((void*)0), ((void*)0), ((void*)0) },
 { 5, "SU.SE", { VAR_0, { 2, VAR_8 } },
   ((void*)0), 292, 999, ((void*)0), ((void*)0), ((void*)0) }
    };
    int VAR_11, VAR_12;
    int VAR_13 = sizeof(VAR_9) / sizeof(*VAR_9);

    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
 VAR_9[VAR_11].val = &VAR_10[VAR_11];
 if (FUNC_0 (&VAR_9[VAR_11].name, "Authenticator %d", VAR_11) < 0)
     FUNC_1(1, "malloc");
 if (VAR_9[VAR_11].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_12 = FUNC_3 (VAR_9, VAR_13, sizeof(Authenticator),
   (generic_encode)VAR_4,
   (generic_length)VAR_6,
   (generic_decode)VAR_3,
   (generic_free)VAR_5,
   VAR_1,
   (generic_copy)VAR_2);
    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
 FUNC_2(VAR_9[VAR_11].name);

    return VAR_12;
}
