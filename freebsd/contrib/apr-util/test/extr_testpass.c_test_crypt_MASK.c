
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int abts_case ;
struct TYPE_2__ {int hash; int password; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_2, void *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_0(VAR_2, "check for valid password",
                           FUNC_1(VAR_1[VAR_4].password,
                                                 VAR_1[VAR_4].hash));
    }
}
