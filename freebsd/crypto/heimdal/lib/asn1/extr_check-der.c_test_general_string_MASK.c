
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct test_case {int member_1; char* member_2; char** val; int * name; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4 (void)
{
    char *VAR_5 = "Test User 1";

    struct test_case VAR_6[] = {
 {((void*)0), 11, "\x54\x65\x73\x74\x20\x55\x73\x65\x72\x20\x31"}
    };
    int VAR_7, VAR_8 = sizeof(VAR_6) / sizeof(*VAR_6);

    VAR_6[0].val = &VAR_5;
    if (FUNC_0 (&VAR_6[0].name, "the string \"%s\"", VAR_5) < 0)
 FUNC_1(1, "malloc");
    if (VAR_6[0].name == ((void*)0))
 FUNC_1(1, "malloc");

    VAR_7 = FUNC_3 (VAR_6, VAR_8, sizeof(unsigned char *),
   (generic_encode)VAR_4,
   (generic_length)VAR_3,
   (generic_decode)VAR_2,
   (generic_free)VAR_1,
   VAR_0,
   ((void*)0));
    FUNC_2(VAR_6[0].name);
    return VAR_7;
}
