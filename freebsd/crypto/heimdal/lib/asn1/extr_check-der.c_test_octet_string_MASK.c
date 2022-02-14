
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; int * name; TYPE_1__* val; int * member_0; } ;
struct TYPE_2__ {int member_0; char* member_1; } ;
typedef TYPE_1__ heim_octet_string ;
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

__attribute__((used)) static int
FUNC_4 (void)
{
    heim_octet_string VAR_5 = {8, "\x01\x23\x45\x67\x89\xab\xcd\xef"};

    struct test_case VAR_6[] = {
 {((void*)0), 8, "\x01\x23\x45\x67\x89\xab\xcd\xef"}
    };
    int VAR_7 = sizeof(VAR_6) / sizeof(*VAR_6);
    int VAR_8;

    VAR_6[0].val = &VAR_5;
    if (FUNC_0 (&VAR_6[0].name, "a octet string") < 0)
 FUNC_1(1, "malloc");
    if (VAR_6[0].name == ((void*)0))
 FUNC_1(1, "malloc");

    VAR_8 = FUNC_3 (VAR_6, VAR_7, sizeof(heim_octet_string),
   (generic_encode)VAR_4,
   (generic_length)VAR_3,
   (generic_decode)VAR_2,
   (generic_free)VAR_1,
   VAR_0,
   ((void*)0));
    FUNC_2(VAR_6[0].name);
    return VAR_8;
}
