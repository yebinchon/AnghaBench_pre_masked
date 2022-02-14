
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ name; } ;
typedef size_t DBDIRS ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static bool
FUNC_2(void)
{
    bool VAR_5 = VAR_0;
    time_t VAR_6 = FUNC_0((time_t *) 0);

    if (VAR_6 > VAR_3) {
 VAR_5 = VAR_1;
    } else {
 DBDIRS VAR_7;
 for (VAR_7 = (DBDIRS) 0; VAR_7 < VAR_2; ++VAR_7) {
     if (VAR_4[VAR_7].name != 0
  && FUNC_1(VAR_4[VAR_7].name, VAR_7)) {
  VAR_5 = VAR_1;
  break;
     }
 }
    }
    return VAR_5;
}
