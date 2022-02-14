
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct call {scalar_t__ cstate; } ;
typedef enum uni_callstate { ____Placeholder_uni_callstate } uni_callstate ;
typedef enum call_state { ____Placeholder_call_state } call_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static enum call_state
FUNC_0(struct call *VAR_28, enum uni_callstate VAR_29)
{
 if ((VAR_28->cstate == VAR_8 ||
      VAR_28->cstate == VAR_9 ||
      VAR_28->cstate == VAR_10) &&
    (VAR_29 == VAR_17 ||
     VAR_29 == VAR_18 ||
     VAR_29 == VAR_19 ||
     VAR_29 == VAR_20))
  return (VAR_7);

 if ((VAR_28->cstate == VAR_3 ||
      VAR_28->cstate == VAR_4 ||
      VAR_28->cstate == VAR_5 ||
      VAR_28->cstate == VAR_6) &&
     (VAR_29 == VAR_21 ||
      VAR_29 == VAR_22 ||
      VAR_29 == VAR_23))
  return (VAR_7);

 if ((VAR_29 == VAR_14 ||
      VAR_29 == VAR_15 ||
      VAR_29 == VAR_16) &&
    (VAR_28->cstate == VAR_11 ||
     VAR_28->cstate == VAR_12 ||
     VAR_28->cstate == VAR_13 ||
     VAR_28->cstate == VAR_6))
  return (VAR_7);

 if ((VAR_29 == VAR_24 ||
      VAR_29 == VAR_25 ||
      VAR_29 == VAR_26 ||
      VAR_29 == VAR_27) &&
    (VAR_28->cstate == VAR_0 ||
     VAR_28->cstate == VAR_1 ||
     VAR_28->cstate == VAR_2))
  return (VAR_7);

 return (VAR_28->cstate);
}
