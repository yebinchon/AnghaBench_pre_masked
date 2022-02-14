
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ subvendor; scalar_t__ subdevice; int * desc; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_0[VAR_2].desc != ((void*)0); VAR_2++)
 if ((FUNC_1(VAR_1) == VAR_0[VAR_2].subvendor) &&
     (FUNC_0(VAR_1) == VAR_0[VAR_2].subdevice)) {
     return(VAR_2);
 }
    return(-1);
}
