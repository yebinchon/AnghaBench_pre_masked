
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_1__* val; int * member_0; } ;
struct TYPE_2__ {int member_0; int member_1; } ;
typedef TYPE_1__ heim_oid ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_4 (void)
{
    struct test_case VAR_9[] = {
 {((void*)0), 2, "\x29\x01"},
 {((void*)0), 1, "\x29"},
 {((void*)0), 2, "\xff\x01"},
 {((void*)0), 1, "\xff"}
    };
    heim_oid VAR_10[] = {
 { 3, VAR_4 },
 { 2, VAR_5 },
 { 3, VAR_6 },
 { 2, VAR_7 }
    };
    int VAR_11, VAR_12;
    int VAR_13 = sizeof(VAR_9) / sizeof(*VAR_9);

    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
 VAR_9[VAR_11].val = &VAR_10[VAR_11];
 if (FUNC_0 (&VAR_9[VAR_11].name, "oid %d", VAR_11) < 0)
     FUNC_1(1, "malloc");
 if (VAR_9[VAR_11].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_12 = FUNC_3 (VAR_9, VAR_13, sizeof(heim_oid),
   (generic_encode)VAR_3,
   (generic_length)VAR_2,
   (generic_decode)VAR_1,
   (generic_free)VAR_0,
   VAR_8,
   ((void*)0));
    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
 FUNC_2(VAR_9[VAR_11].name);
    return VAR_12;
}
