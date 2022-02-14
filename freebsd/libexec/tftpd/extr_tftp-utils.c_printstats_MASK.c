
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct tftp_stats {int amount; int rollovers; int blocks; TYPE_2__ tstart; TYPE_1__ tstop; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

void
FUNC_2(const char *VAR_0, int VAR_1, struct tftp_stats *VAR_2)
{
 double VAR_3;

 VAR_3 = ((VAR_2->tstop.tv_sec*10.)+(VAR_2->tstop.tv_usec/100000)) -
  ((VAR_2->tstart.tv_sec*10.)+(VAR_2->tstart.tv_usec/100000));
 VAR_3 = VAR_3/10.;

 FUNC_0("%s %zu bytes during %.1f seconds in %u blocks",
     VAR_0, VAR_2->amount, VAR_3, VAR_2->blocks);

 if (VAR_2->rollovers != 0)
  FUNC_0(" with %d rollover%s",
      VAR_2->rollovers, VAR_2->rollovers != 1 ? "s" : "");

 if (VAR_1)
  FUNC_0(" [%.0f bits/sec]", (VAR_2->amount*8.)/VAR_3);
 FUNC_1('\n');
}
