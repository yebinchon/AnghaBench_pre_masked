
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (int VAR_15)
{
  int VAR_16;
  ttevent_t VAR_17;

  lwpid_t VAR_18;
  ttstate_t VAR_19;
  VAR_14 = 0;

  FUNC_2 (&VAR_17.tte_signals);
  VAR_17.tte_opts = VAR_0;
  VAR_17.tte_opts |= VAR_1;

  VAR_17.tte_events = VAR_2;
  VAR_17.tte_events |= VAR_9;
  VAR_17.tte_events |= VAR_3;
  VAR_17.tte_events |= VAR_4;
  VAR_17.tte_events |= VAR_5;
  VAR_17.tte_events |= VAR_10;
  VAR_17.tte_events |= VAR_6;
  VAR_17.tte_events |= VAR_7;
  VAR_17.tte_events |= VAR_8;

  VAR_16 = FUNC_0 (
     VAR_12,
     VAR_15,
     (lwpid_t) VAR_11,
     (TTRACE_ARG_TYPE) & VAR_17,
          (TTRACE_ARG_TYPE) sizeof (VAR_17),
     VAR_11);
}
