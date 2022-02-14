
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int abts_case ;
struct TYPE_2__ {int hash; scalar_t__ password; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_1, void *VAR_2)
{
    int VAR_3 = 0;
    while (VAR_0[VAR_3].password) {
        FUNC_0(VAR_1, "check for valid glibc crypt-sha password",
                           FUNC_1(VAR_0[VAR_3].password,
                                                 VAR_0[VAR_3].hash));
        VAR_3++;
    }
}
