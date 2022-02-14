
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int SpaceId; int BitWidth; int Address; } ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_0 (int ,int,int*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int ,int) ;

int
FUNC_3(device_t VAR_6, int *VAR_7, int *VAR_8, ACPI_GENERIC_ADDRESS *VAR_9,
    struct resource **VAR_10, u_int VAR_11)
{
    int VAR_12, VAR_13;

    VAR_12 = VAR_1;
    if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 return (VAR_0);


    switch (VAR_9->SpaceId) {
    case 128:
 VAR_13 = VAR_5;
 break;
    case 129:
 VAR_13 = VAR_4;
 break;
    default:
 return (VAR_2);
    }





    if (VAR_9->BitWidth && VAR_9->BitWidth < 8)
 VAR_9->BitWidth = 8;


    if (VAR_9->Address == 0 || VAR_9->BitWidth == 0)
 return (VAR_0);

    FUNC_2(VAR_6, VAR_13, *VAR_8, VAR_9->Address,
 VAR_9->BitWidth / 8);
    *VAR_10 = FUNC_0(VAR_6, VAR_13, VAR_8, VAR_3 | VAR_11);
    if (*VAR_10 != ((void*)0)) {
 *VAR_7 = VAR_13;
 VAR_12 = 0;
    } else
 FUNC_1(VAR_6, VAR_13, *VAR_8);

    return (VAR_12);
}
