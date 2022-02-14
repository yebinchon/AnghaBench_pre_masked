
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct test_case {int member_1; char* member_2; unsigned int* val; int * name; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;


 scalar_t__ FUNC_0 (int **,char*,unsigned int) ;
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
 {((void*)0), 1, "\x00"},
 {((void*)0), 1, "\x7f"},
 {((void*)0), 2, "\x00\x80"},
 {((void*)0), 2, "\x01\x00"},
 {((void*)0), 2, "\x02\x00"},
 {((void*)0), 3, "\x00\x80\x00"},
 {((void*)0), 5, "\x00\x80\x00\x00\x00"},
 {((void*)0), 4, "\x7f\xff\xff\xff"}
    };

    unsigned int VAR_5[] = {0, 127, 128, 256, 512, 32768,
        0x80000000, 0x7fffffff};
    int VAR_6, VAR_7;
    int VAR_8 = sizeof(VAR_4) / sizeof(*VAR_4);

    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
 VAR_4[VAR_6].val = &VAR_5[VAR_6];
 if (FUNC_0 (&VAR_4[VAR_6].name, "unsigned %u", VAR_5[VAR_6]) < 0)
     FUNC_1(1, "malloc");
 if (VAR_4[VAR_6].name == ((void*)0))
     FUNC_1(1, "malloc");
    }

    VAR_7 = FUNC_3 (VAR_4, VAR_8, sizeof(int),
   (generic_encode)VAR_3,
   (generic_length)VAR_2,
   (generic_decode)VAR_1,
   (generic_free)((void*)0),
   VAR_0,
   ((void*)0));
    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
 FUNC_2 (VAR_4[VAR_6].name);
    return VAR_7;
}
