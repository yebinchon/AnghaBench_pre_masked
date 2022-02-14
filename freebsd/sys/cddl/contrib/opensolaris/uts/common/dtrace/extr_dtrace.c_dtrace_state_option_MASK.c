
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dcr_destructive; } ;
struct TYPE_5__ {scalar_t__ dts_activity; scalar_t__* dts_options; TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef scalar_t__ dtrace_optval_t ;
typedef int dtrace_optid_t ;


 int FUNC_0 (int ) ;


 int VAR_0 ;


 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_2(dtrace_state_t *VAR_9, dtrace_optid_t VAR_10,
    dtrace_optval_t VAR_11)
{
 FUNC_0(FUNC_1(&VAR_8));

 if (VAR_9->dts_activity != VAR_2)
  return (VAR_4);

 if (VAR_10 >= VAR_1)
  return (VAR_5);

 if (VAR_10 != VAR_0 && VAR_11 < 0)
  return (VAR_5);

 switch (VAR_10) {
 case 131:
  if (VAR_7)
   return (VAR_3);

  VAR_9->dts_cred.dcr_destructive = 1;
  break;

 case 132:
 case 130:
 case 133:
 case 129:
 case 128:
  if (VAR_11 < 0)
   return (VAR_5);

  if (VAR_11 >= VAR_6) {
   VAR_11 = VAR_6 - (1 << 27) + 1;
  }
 }

 VAR_9->dts_options[VAR_10] = VAR_11;

 return (0);
}
