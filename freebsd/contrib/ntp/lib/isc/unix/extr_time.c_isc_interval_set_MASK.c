
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int seconds; unsigned int nanoseconds; } ;
typedef TYPE_1__ isc_interval_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(isc_interval_t *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_3 < VAR_0);

 VAR_1->seconds = VAR_2;
 VAR_1->nanoseconds = VAR_3;
}
