
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 unsigned int FUNC_3 (char*,unsigned int,char*,int ) ;

void
FUNC_4(const isc_time_t *VAR_0, char *VAR_1, unsigned int VAR_2) {
 time_t VAR_3;
 unsigned int VAR_4;

 FUNC_1(VAR_2 > 0);

 VAR_3 = (time_t)VAR_0->seconds;
 VAR_4 = FUNC_3(VAR_1, VAR_2, "%Y-%m-%dT%H:%M:%SZ", FUNC_2(&VAR_3));
 FUNC_0(VAR_4 < VAR_2);
}
