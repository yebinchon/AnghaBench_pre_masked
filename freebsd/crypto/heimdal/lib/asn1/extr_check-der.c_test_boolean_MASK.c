
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int* val; int * name; int * member_0; } ;
struct TYPE_4__ {scalar_t__ length; } ;
typedef TYPE_1__ heim_integer ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ,TYPE_1__*,size_t*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6 (void)
{
    struct test_case VAR_4[] = {
 {((void*)0), 1, "\xff"},
 {((void*)0), 1, "\x00"}
    };

    int VAR_5[] = { 1, 0 };
    int VAR_6, VAR_7;
    int VAR_8 = sizeof(VAR_4) / sizeof(VAR_4[0]);
    size_t VAR_9;
    heim_integer VAR_10;

    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
 VAR_4[VAR_6].val = &VAR_5[VAR_6];
 if (FUNC_0 (&VAR_4[VAR_6].name, "heim_boolean %d", VAR_6) < 0)
     FUNC_3(1, "malloc");
 if (VAR_4[VAR_6].name == ((void*)0))
     FUNC_3(1, "malloc");
    }

    VAR_7 = FUNC_5 (VAR_4, VAR_8, sizeof(int),
   (generic_encode)VAR_2,
   (generic_length)VAR_1,
   (generic_decode)VAR_0,
   (generic_free)((void*)0),
   VAR_3,
   ((void*)0));
    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
 FUNC_4 (VAR_4[VAR_6].name);
    if (VAR_7)
 return VAR_7;


    VAR_7 = FUNC_2(((void*)0), 0, &VAR_10, &VAR_9);
    if (VAR_7)
 FUNC_3(1, "der_get_heim_integer");
    if (VAR_10 != 0)
 FUNC_3(1, "der_get_heim_integer wrong length");
    FUNC_1(&VAR_10);

    return 0;
}
