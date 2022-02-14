
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_1__* val; int * member_0; } ;
struct TYPE_2__ {int member_0; int member_1; } ;
typedef TYPE_1__ heim_universal_string ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4 (void)
{
    heim_universal_string VAR_7 = { 1, VAR_5 };
    heim_universal_string VAR_8 = { 2, VAR_6 };

    struct test_case VAR_9[] = {
 {((void*)0), 4, "\x00\x00\x00\x20"},
 {((void*)0), 8, "\x00\x00\x00\x20\x00\x00\x00\x20"}
    };
    int VAR_10 = sizeof(VAR_9) / sizeof(*VAR_9);
    int VAR_11;

    VAR_9[0].val = &VAR_7;
    if (FUNC_0 (&VAR_9[0].name, "a universal string") < 0)
 FUNC_1(1, "malloc");
    if (VAR_9[0].name == ((void*)0))
 FUNC_1(1, "malloc");
    VAR_9[1].val = &VAR_8;
    if (FUNC_0 (&VAR_9[1].name, "second universal string") < 0)
 FUNC_1(1, "malloc");
    if (VAR_9[1].name == ((void*)0))
 FUNC_1(1, "malloc");

    VAR_11 = FUNC_3 (VAR_9, VAR_10, sizeof(heim_universal_string),
   (generic_encode)VAR_4,
   (generic_length)VAR_3,
   (generic_decode)VAR_2,
   (generic_free)VAR_1,
   VAR_0,
   ((void*)0));
    FUNC_2(VAR_9[0].name);
    FUNC_2(VAR_9[1].name);
    return VAR_11;
}
