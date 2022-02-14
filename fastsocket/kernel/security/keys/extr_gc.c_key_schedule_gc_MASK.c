
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(time_t VAR_6)
{
 unsigned long VAR_7;
 time_t VAR_8 = FUNC_0().tv_sec;

 FUNC_2("%ld", VAR_6 - VAR_8);

 if (VAR_6 <= VAR_8 || FUNC_5(VAR_1, &VAR_3)) {
  FUNC_1("IMMEDIATE");
  FUNC_3();
 } else if (VAR_6 < VAR_4) {
  FUNC_1("DEFERRED");
  VAR_4 = VAR_6;
  VAR_7 = VAR_2 + (VAR_6 - VAR_8) * VAR_0;
  FUNC_4(&VAR_5, VAR_7);
 }
}
