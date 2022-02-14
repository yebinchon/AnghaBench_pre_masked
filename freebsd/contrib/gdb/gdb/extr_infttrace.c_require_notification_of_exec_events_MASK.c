
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ttstate_t ;
struct TYPE_2__ {int tte_events; int tte_opts; int tte_signals; } ;
typedef TYPE_1__ ttevent_t ;
typedef int notifiable_events ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (int VAR_9)
{
  int VAR_10;
  ttevent_t VAR_11;

  lwpid_t VAR_12;
  ttstate_t VAR_13;
  VAR_8 = 0;

  FUNC_2 (&VAR_11.tte_signals);
  VAR_11.tte_opts = VAR_0;




  VAR_11.tte_opts &= ~VAR_1;

  VAR_11.tte_events = VAR_2;
  VAR_11.tte_events |= VAR_3;
  VAR_11.tte_events |= VAR_4;

  VAR_10 = FUNC_0 (
     VAR_6,
     VAR_9,
     (lwpid_t) VAR_5,
     (TTRACE_ARG_TYPE) & VAR_11,
          (TTRACE_ARG_TYPE) sizeof (VAR_11),
     VAR_5);
}
