
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int interval; } ;
typedef TYPE_1__ isc_interval_t ;
typedef unsigned int LONGLONG ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;

void
FUNC_1(isc_interval_t *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_5 < VAR_2);




 VAR_3->interval = (LONGLONG)VAR_4 * VAR_0
  + (VAR_5 + VAR_1 - 1) / VAR_1;
}
