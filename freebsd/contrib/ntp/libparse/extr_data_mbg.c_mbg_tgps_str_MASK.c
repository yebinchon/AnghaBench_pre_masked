
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wn; scalar_t__ tick; scalar_t__ sec; } ;
typedef TYPE_1__ T_GPS ;


 long VAR_0 ;
 int FUNC_0 (char*,int,char*,int,long,long,long) ;
 int FUNC_1 (char*) ;

void
FUNC_2(
 char **VAR_1,
 T_GPS *VAR_2,
 int VAR_3
 )
{
 FUNC_0(*VAR_1, VAR_3, "week %d + %ld days + %ld.%07ld sec",
   VAR_2->wn, (long) VAR_2->sec / VAR_0,
   (long) VAR_2->sec % VAR_0, (long) VAR_2->tick);
 *VAR_1 += FUNC_1(*VAR_1);
}
