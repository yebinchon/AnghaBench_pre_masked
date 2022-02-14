
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int (* tc_get_timecount ) (TYPE_1__*) ;} ;


 int FUNC_0 (int,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_10(void *VAR_8)
{
 u_int VAR_9;
 int VAR_10;
 if (VAR_0 > 1000)
  VAR_2 = (VAR_0 + 500) / 1000;
 else
  VAR_2 = 1;
 FUNC_8();
 FUNC_0(VAR_0, &VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 VAR_10 = VAR_0 / VAR_2;
 FUNC_0(VAR_10, &VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 VAR_9 = (VAR_2 * 1000000) / VAR_0;
 FUNC_5("Timecounters tick every %d.%03u msec\n", VAR_9 / 1000, VAR_9 % 1000);






 (void)VAR_7->tc_get_timecount(VAR_7);
 (void)VAR_7->tc_get_timecount(VAR_7);
 FUNC_3(&VAR_1);
 FUNC_9(((void*)0));
 FUNC_4(&VAR_1);
}
