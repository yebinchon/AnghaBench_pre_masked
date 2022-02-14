
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timezone {int dummy; } ;
typedef int TimeType ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,struct timezone*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static long
FUNC_3(TimeType * VAR_1, int VAR_2)
{
    long VAR_3;
    time_t VAR_4 = FUNC_2((time_t *) 0);
    if (VAR_2) {
 *VAR_1 = VAR_4;
    }
    VAR_3 = (VAR_4 - *VAR_1) * 1000;

    FUNC_0(VAR_0, ("%s time: %ld msec", VAR_2 ? "get" : "elapsed", VAR_3));
    return VAR_3;
}
