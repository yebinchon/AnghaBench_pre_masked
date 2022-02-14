
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int **,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_4, driver_t *VAR_5)
{
    device_t VAR_6, *VAR_7;
    int VAR_8, VAR_9;

    FUNC_0(VAR_5, VAR_4);
    if (FUNC_2(VAR_4, &VAR_7, &VAR_9))
     return;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
 VAR_6 = VAR_7[VAR_8];
 if (FUNC_3(VAR_6) == VAR_2) {





     FUNC_4(VAR_6);

 }
    }
    FUNC_5(VAR_7, VAR_3);
}
