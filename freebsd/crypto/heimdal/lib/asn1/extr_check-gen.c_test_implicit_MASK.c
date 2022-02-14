
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tests ;
struct test_case {int member_1; char* member_2; char* member_3; TYPE_2__* val; int * member_0; } ;
typedef int generic_length ;
typedef int generic_free ;
typedef int generic_encode ;
typedef int generic_decode ;
typedef int * generic_copy ;
typedef int c0 ;
struct TYPE_4__ {int foo; } ;
struct TYPE_5__ {int ti3; TYPE_1__ ti2; scalar_t__ ti1; } ;
typedef int TESTImplicit2 ;
typedef TYPE_2__ TESTImplicit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct test_case*,int,int,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_2 (void)
{
    struct test_case VAR_10[] = {
 { ((void*)0), 16,
   "\x30\x0e\x80\x01\x00\xa1\x06\xbf"
   "\x7f\x03\x02\x01\x02\x82\x01\x03",
   "implicit 1" }
    };

    int VAR_11 = 0, VAR_12 = sizeof(VAR_10) / sizeof(*VAR_10);
    TESTImplicit VAR_13;

    FUNC_1(&VAR_13, 0, sizeof(VAR_13));
    VAR_13 = 0;
    VAR_13 = 2;
    VAR_13 = 3;
    VAR_10[0].val = &VAR_13;

    VAR_11 += FUNC_0 (VAR_10, VAR_12, sizeof(TESTImplicit),
    (generic_encode)VAR_4,
    (generic_length)VAR_8,
    (generic_decode)VAR_2,
    (generic_free)VAR_6,
    VAR_0,
    (generic_copy)VAR_1);
    return VAR_11;
}
