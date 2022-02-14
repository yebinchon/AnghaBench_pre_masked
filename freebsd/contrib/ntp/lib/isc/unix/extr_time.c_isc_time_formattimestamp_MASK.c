
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {int nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,unsigned int,char*,...) ;
 unsigned int FUNC_4 (char*,unsigned int,char*,int ) ;

void
FUNC_5(const isc_time_t *VAR_0, char *VAR_1, unsigned int VAR_2) {
 time_t VAR_3;
 unsigned int VAR_4;

 FUNC_1(VAR_2 > 0);

 VAR_3 = (time_t) VAR_0->seconds;
 VAR_4 = FUNC_4(VAR_1, VAR_2, "%d-%b-%Y %X", FUNC_2(&VAR_3));
 FUNC_0(VAR_4 < VAR_2);
 if (VAR_4 != 0)
  FUNC_3(VAR_1 + VAR_4, VAR_2 - VAR_4,
    ".%03u", VAR_0->nanoseconds / 1000000);
 else
  FUNC_3(VAR_1, VAR_2, "99-Bad-9999 99:99:99.999");
}
