
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {scalar_t__ rts_gate; scalar_t__ rts_router; scalar_t__ rts_metric; scalar_t__ rts_tag; scalar_t__ rts_de_ag; scalar_t__ rts_ifp; scalar_t__ rts_time; } ;
struct rt_entry {scalar_t__ rt_ifp; int rt_state; struct rt_spare* rt_spares; int rt_mask; int rt_dst; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int * VAR_2 ;
 int FUNC_3 () ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct rt_spare*,int,int,int,int,int) ;
 char* FUNC_6 (int ,int ,scalar_t__) ;

void
FUNC_7(struct rt_entry *VAR_3,
      struct rt_spare *VAR_4,
      struct rt_spare *VAR_5)
{
 if (!VAR_1 || VAR_2 == ((void*)0))
  return;

 if (VAR_4->rts_gate == VAR_5->rts_gate
     && VAR_4->rts_router == VAR_5->rts_router
     && VAR_4->rts_metric == VAR_5->rts_metric
     && VAR_4->rts_tag == VAR_5->rts_tag
     && VAR_4->rts_de_ag == VAR_5->rts_de_ag)
  return;

 FUNC_3();
 if (VAR_5->rts_gate == 0) {
  (void)FUNC_1(VAR_2, "Del #%d %-35s ",
         (int)(VAR_4 - VAR_3->rt_spares),
         FUNC_6(VAR_3->rt_dst, VAR_3->rt_mask, VAR_4->rts_gate));
  FUNC_5(VAR_4, 0,0,0,0,
     (VAR_4 != VAR_3->rt_spares
      || FUNC_0(VAR_3->rt_state,VAR_5->rts_ifp)));

 } else if (VAR_4->rts_gate != VAR_0) {
  (void)FUNC_1(VAR_2, "Chg #%d %-35s ",
         (int)(VAR_4 - VAR_3->rt_spares),
         FUNC_6(VAR_3->rt_dst, VAR_3->rt_mask, VAR_4->rts_gate));
  FUNC_5(VAR_4, 0,0,
     VAR_4->rts_gate != VAR_5->rts_gate,
     VAR_4->rts_tag != VAR_5->rts_tag,
     VAR_4 != VAR_3->rt_spares || FUNC_0(VAR_3->rt_state,
       VAR_3->rt_ifp));

  (void)FUNC_1(VAR_2, "\n       %19s%-16s ", "",
         (VAR_5->rts_gate != VAR_4->rts_gate
          ? FUNC_4(VAR_5->rts_gate) : ""));
  FUNC_5(VAR_5,
     -(VAR_5->rts_metric == VAR_4->rts_metric),
     -(VAR_5->rts_ifp == VAR_4->rts_ifp),
     0,
     VAR_4->rts_tag != VAR_5->rts_tag,
     (VAR_5->rts_time != VAR_4->rts_time
      && (VAR_4 != VAR_3->rt_spares
          || FUNC_0(VAR_3->rt_state, VAR_5->rts_ifp))));

 } else {
  (void)FUNC_1(VAR_2, "Add #%d %-35s ",
         (int)(VAR_4 - VAR_3->rt_spares),
         FUNC_6(VAR_3->rt_dst, VAR_3->rt_mask, VAR_5->rts_gate));
  FUNC_5(VAR_5, 0,0,0,0,
     (VAR_4 != VAR_3->rt_spares
      || FUNC_0(VAR_3->rt_state,VAR_5->rts_ifp)));
 }
 (void)FUNC_2('\n',VAR_2);
}
