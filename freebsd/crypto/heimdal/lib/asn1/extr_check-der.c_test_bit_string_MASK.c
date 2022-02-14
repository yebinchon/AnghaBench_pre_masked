
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_1__* val; int * member_0; } ;
struct TYPE_2__ {char* member_1; int member_0; } ;
typedef TYPE_1__ heim_bit_string ;
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

__attribute__((used)) static int
FUNC_4 (void)
{
    struct test_case VAR_5[] = {
 {((void*)0), 1, "\x00"}
    };
    heim_bit_string VAR_6[] = {
 { 0, "" }
    };
    int VAR_7, VAR_8;
    int VAR_9 = sizeof(VAR_5) / sizeof(*VAR_5);

    for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
 VAR_5[VAR_7].val = &VAR_6[VAR_7];
 if (FUNC_0 (&VAR_5[VAR_7].name, "bit_string %d", VAR_7) < 0)
     FUNC_1(1, "malloc");
 if (VAR_5[VAR_7].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_8 = FUNC_3 (VAR_5, VAR_9, sizeof(heim_bit_string),
   (generic_encode)VAR_3,
   (generic_length)VAR_2,
   (generic_decode)VAR_1,
   (generic_free)VAR_0,
   VAR_4,
   ((void*)0));
    for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7)
 FUNC_2(VAR_5[VAR_7].name);
    return VAR_8;
}
