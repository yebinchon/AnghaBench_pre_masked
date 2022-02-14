
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 != -1) {
 FUNC_1(VAR_3, VAR_2[VAR_4].desc);
 return(VAR_0);
    }
    return(VAR_1);
}
