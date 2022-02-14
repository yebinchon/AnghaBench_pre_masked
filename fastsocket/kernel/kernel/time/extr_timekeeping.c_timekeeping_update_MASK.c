
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mult; int clock; int wall_to_monotonic; int xtime; scalar_t__ ntp_error; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(bool VAR_1)
{
 if (VAR_1) {
  VAR_0.ntp_error = 0;
  FUNC_0();
 }
 FUNC_1();
 FUNC_2(&VAR_0.xtime, &VAR_0.wall_to_monotonic,
    VAR_0.clock, VAR_0.mult);
}
