
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_1__* val; int * member_0; } ;
struct TYPE_4__ {int member_0; char* member_1; int member_2; scalar_t__ length; } ;
typedef TYPE_1__ heim_integer ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*,size_t*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6 (void)
{
    struct test_case VAR_3[] = {
 {((void*)0), 2, "\xfe\x01"},
 {((void*)0), 2, "\xef\x01"},
 {((void*)0), 3, "\xff\x00\xff"},
 {((void*)0), 3, "\xff\x01\x00"},
 {((void*)0), 1, "\x00"},
 {((void*)0), 1, "\x01"},
 {((void*)0), 2, "\x00\x80"}
    };

    heim_integer VAR_4[] = {
 { 2, "\x01\xff", 1 },
 { 2, "\x10\xff", 1 },
 { 2, "\xff\x01", 1 },
 { 2, "\xff\x00", 1 },
 { 0, "", 0 },
 { 1, "\x01", 0 },
 { 1, "\x80", 0 }
    };
    int VAR_5, VAR_6;
    int VAR_7 = sizeof(VAR_3) / sizeof(VAR_3[0]);
    size_t VAR_8;
    heim_integer VAR_9;

    for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5) {
 VAR_3[VAR_5].val = &VAR_4[VAR_5];
 if (FUNC_0 (&VAR_3[VAR_5].name, "heim_integer %d", VAR_5) < 0)
     FUNC_3(1, "malloc");
 if (VAR_3[VAR_5].name == ((void*)0))
     FUNC_3(1, "malloc");
    }

    VAR_6 = FUNC_5 (VAR_3, VAR_7, sizeof(heim_integer),
   (generic_encode)VAR_1,
   (generic_length)VAR_0,
   (generic_decode)FUNC_2,
   (generic_free)FUNC_1,
   VAR_2,
   ((void*)0));
    for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5)
 FUNC_4 (VAR_3[VAR_5].name);
    if (VAR_6)
 return VAR_6;


    VAR_6 = FUNC_2(((void*)0), 0, &VAR_9, &VAR_8);
    if (VAR_6)
 FUNC_3(1, "der_get_heim_integer");
    if (VAR_9 != 0)
 FUNC_3(1, "der_get_heim_integer wrong length");
    FUNC_1(&VAR_9);

    return 0;
}
