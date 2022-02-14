
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {int member_0; int * data; int * member_1; } ;
typedef TYPE_1__ heim_universal_string ;
struct TYPE_14__ {int member_0; char* member_1; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_15__ {int member_0; int* data; int * member_1; } ;
typedef TYPE_3__ heim_bmp_string ;
struct TYPE_16__ {int member_0; char* member_1; } ;
typedef TYPE_4__ heim_bit_string ;


 int FUNC_0 (TYPE_4__ const*,TYPE_4__ const*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(void)
{
    int VAR_0;


    {
 const heim_octet_string VAR_1 = { 1, "a" } , VAR_2 = { 0, ((void*)0) };
 VAR_0 = FUNC_2(&VAR_1, &VAR_2);
 if (VAR_0 == 0)
     return 1;
    }

    {
 const heim_octet_string VAR_3 = { 1, "a" } , VAR_4 = { 1, "b" };
 VAR_0 = FUNC_2(&VAR_3, &VAR_4);
 if (VAR_0 == 0)
     return 1;
    }

    {
 const heim_bit_string VAR_5 = { 8, "a" } , VAR_6 = { 7, "a" };
 VAR_0 = FUNC_0(&VAR_5, &VAR_6);
 if (VAR_0 == 0)
     return 1;
    }

    {
 const heim_bit_string VAR_7 = { 7, "\x0f" } , VAR_8 = { 7, "\x02" };
 VAR_0 = FUNC_0(&VAR_7, &VAR_8);
 if (VAR_0 == 0)
     return 1;
    }

    {
 uint16_t VAR_9 = 1;
 heim_bmp_string VAR_10 = { 1, ((void*)0) } , VAR_11 = { 0, ((void*)0) };
 VAR_10 = &VAR_9;
 VAR_0 = FUNC_1(&VAR_10, &VAR_11);
 if (VAR_0 == 0)
     return 1;
    }

    {
 uint32_t VAR_12;
 heim_universal_string VAR_13 = { 1, ((void*)0) } , VAR_14 = { 0, ((void*)0) };
 VAR_13 = &VAR_12;
 VAR_0 = FUNC_3(&VAR_13, &VAR_14);
 if (VAR_0 == 0)
     return 1;
    }

    {
 uint32_t VAR_15 = (uint32_t)'a';
 heim_universal_string VAR_16 = { 1, ((void*)0) } , VAR_17 = { 1, ((void*)0) };
 VAR_16 = &VAR_15;
 VAR_17 = &VAR_15;
 VAR_0 = FUNC_3(&VAR_16, &VAR_17);
 if (VAR_0 != 0)
     return 1;
    }

    return 0;
}
