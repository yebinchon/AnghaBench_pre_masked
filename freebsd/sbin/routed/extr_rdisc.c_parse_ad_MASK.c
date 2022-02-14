
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct msg_limit {int dummy; } ;
struct interface {int int_state; int int_rdisc_cnt; int int_mask; int int_net; } ;
struct dr {scalar_t__ dr_gate; scalar_t__ dr_ts; scalar_t__ dr_pref; scalar_t__ dr_recv_pref; scalar_t__ dr_life; struct interface* dr_ifp; } ;
typedef scalar_t__ naddr ;
typedef scalar_t__ n_long ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct interface*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct dr* VAR_5 ;
 int * FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (struct msg_limit*,scalar_t__,char*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(naddr VAR_7,
  naddr VAR_8,
  n_long VAR_9,
  u_short VAR_10,
  struct interface *VAR_11)
{
 static struct msg_limit VAR_12;
 struct dr *VAR_13, *VAR_14;


 if (VAR_8 == VAR_4
     || !FUNC_2(VAR_8)) {
  FUNC_4(&VAR_12, VAR_7,"router %s advertising bad gateway %s",
         FUNC_5(VAR_7),
         FUNC_5(VAR_8));
  return;
 }



 if (FUNC_3(VAR_8, 1, 0) != ((void*)0)) {
  FUNC_8("    discard Router Discovery Ad pointing at us");
  return;
 }
 if (!FUNC_7(VAR_8, VAR_11->int_net, VAR_11->int_mask)) {
  FUNC_8("    discard Router Discovery Ad"
     " toward unreachable net");
  return;
 }




 VAR_9 = FUNC_1(FUNC_6(VAR_9));

 if (VAR_9 == 0 || VAR_10 < VAR_3) {
  VAR_9 = 0;
  VAR_10 = 0;
 }

 for (VAR_14 = ((void*)0), VAR_13 = VAR_5; VAR_13 < &VAR_5[VAR_1]; VAR_13++) {


  if (VAR_13->dr_gate == VAR_8) {
   VAR_14 = VAR_13;
   break;
  }

  if (VAR_10 == 0)
   continue;

  if (VAR_13->dr_ts == 0) {
   VAR_14 = VAR_13;

  } else if (VAR_14 == ((void*)0)) {



   if ((!(VAR_11->int_state & VAR_0)
        && (VAR_13->dr_ifp->int_state & VAR_0))
       || (VAR_9 > VAR_13->dr_pref
    && !((VAR_11->int_state ^ VAR_13->dr_ifp->int_state)
         & VAR_0)))
    VAR_14 = VAR_13;

  } else if (VAR_14->dr_ts != 0) {


   if ((!(VAR_14->dr_ifp->int_state & VAR_0)
        && (VAR_13->dr_ifp->int_state & VAR_0))
       || (VAR_14->dr_pref > VAR_13->dr_pref
    && !((VAR_14->dr_ifp->int_state
          ^ VAR_13->dr_ifp->int_state)
         & VAR_0)))
    VAR_14 = VAR_13;
  }
 }


 if (VAR_14 == ((void*)0))
  return;

 VAR_14->dr_ifp = VAR_11;
 VAR_14->dr_gate = VAR_8;
 VAR_14->dr_ts = VAR_6.tv_sec;
 VAR_14->dr_life = VAR_10;
 VAR_14->dr_recv_pref = VAR_9;

 VAR_14->dr_pref = FUNC_0(VAR_9,VAR_11);



 if (!(VAR_11->int_state & VAR_0))
  VAR_11->int_rdisc_cnt = VAR_2;
}
