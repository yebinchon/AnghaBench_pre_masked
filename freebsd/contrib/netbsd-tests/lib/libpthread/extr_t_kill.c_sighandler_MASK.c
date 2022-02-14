
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {scalar_t__ id; int gotsignal; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(int VAR_4)
{
 pthread_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1();
 FUNC_0((VAR_5 != VAR_2) && (VAR_4 == VAR_1),
      "unexpected signal");

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5 == VAR_3[VAR_6].id)
   break;

 FUNC_0(VAR_6 != VAR_0, "unknown thread");

 VAR_3[VAR_6].gotsignal++;
}
