
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int tests ;
struct test_case {int member_1; char* member_2; int* val; int * name; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4 (void)
{
    struct test_case VAR_4[] = {
 {((void*)0), 15, "19700101000000Z"},
 {((void*)0), 15, "19851106210627Z"}
    };
    time_t VAR_5[] = {0, 500159187};
    int VAR_6, VAR_7;
    int VAR_8 = sizeof(VAR_4) / sizeof(*VAR_4);

    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
 VAR_4[VAR_6].val = &VAR_5[VAR_6];
 if (FUNC_0 (&VAR_4[VAR_6].name, "time %d", (int)VAR_5[VAR_6]) < 0)
     FUNC_1(1, "malloc");
 if (VAR_4[VAR_6].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_7 = FUNC_3 (VAR_4, VAR_8, sizeof(time_t),
   (generic_encode)VAR_3,
   (generic_length)VAR_2,
   (generic_decode)VAR_1,
   (generic_free)((void*)0),
   VAR_0,
   ((void*)0));
    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
 FUNC_2(VAR_4[VAR_6].name);
    return VAR_7;
}
