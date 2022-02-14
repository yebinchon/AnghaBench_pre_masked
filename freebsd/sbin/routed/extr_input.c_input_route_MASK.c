
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {scalar_t__ rts_metric; scalar_t__ rts_router; scalar_t__ rts_de_ag; scalar_t__ rts_time; scalar_t__ rts_gate; scalar_t__ rts_tag; } ;
struct rt_entry {int rt_state; struct rt_spare* rt_spares; } ;
struct netinfo {scalar_t__ n_nhop; } ;
struct interface {int int_state; } ;
typedef scalar_t__ naddr ;


 scalar_t__ FUNC_0 (struct rt_entry*,struct rt_spare*,struct rt_spare*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct interface* FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,struct rt_spare*) ;
 int FUNC_3 (struct rt_entry*,int ,struct rt_spare*,int ) ;
 struct rt_entry* FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct rt_entry*,struct rt_spare*) ;
 int FUNC_6 (struct rt_entry*,struct rt_spare*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct rt_entry*,struct rt_spare*,struct rt_spare*) ;

__attribute__((used)) static void
FUNC_8(naddr VAR_7,
     naddr VAR_8,
     struct rt_spare *VAR_9,
     struct netinfo *VAR_10)
{
 int VAR_11;
 struct rt_entry *VAR_12;
 struct rt_spare *VAR_13, *VAR_14;
 struct interface *VAR_15;
 VAR_15 = FUNC_1(VAR_7, 1, 1);
 if (VAR_15 != ((void*)0)
     && (!(VAR_15->int_state & VAR_1)
  || (VAR_15->int_state & VAR_2)))
  return;



 VAR_12 = FUNC_4(VAR_7, VAR_8);



 if (VAR_12 == ((void*)0)) {


  if (VAR_9->rts_metric == VAR_0)
   return;


  if (VAR_10->n_nhop != 0
      && FUNC_1(VAR_10->n_nhop, 1, 0) != ((void*)0))
   return;




  if (VAR_6 < VAR_3)
   FUNC_2(VAR_7, VAR_8, 0, VAR_9);
  return;
 }
 VAR_14 = VAR_12->rt_spares;
 for (VAR_13 = VAR_14, VAR_11 = VAR_4; VAR_11 != 0; VAR_11--, VAR_13++) {
  if (VAR_13->rts_router == VAR_9->rts_router)
   break;



  if (VAR_14 == VAR_12->rt_spares
      || FUNC_0(VAR_12, VAR_14, VAR_13))
   VAR_14 = VAR_13;
 }
 if (VAR_11 != 0) {
  if (VAR_9->rts_de_ag > VAR_13->rts_de_ag
      && VAR_5 <= VAR_13->rts_time)
   return;




  if (VAR_13->rts_metric == VAR_0
      && VAR_9->rts_metric == VAR_0)
   VAR_9->rts_time = VAR_13->rts_time;




  if (VAR_11 == VAR_4) {
   FUNC_3(VAR_12, VAR_12->rt_state, VAR_9, 0);


   if (VAR_9->rts_metric > VAR_13->rts_metric)
    FUNC_6(VAR_12, 0);
   return;
  }




  if (VAR_13->rts_gate == VAR_9->rts_gate
      && VAR_13->rts_metric == VAR_9->rts_metric
      && VAR_13->rts_tag == VAR_9->rts_tag) {
   FUNC_7(VAR_12, VAR_13, VAR_9);
   *VAR_13 = *VAR_9;
   return;
  }


  if (VAR_9->rts_metric == VAR_0) {
   FUNC_5(VAR_12, VAR_13);
   return;
  }

 } else {





  if (VAR_10->n_nhop != 0
      && ((void*)0) != FUNC_1(VAR_10->n_nhop, 1, 0))
   return;


  VAR_13 = VAR_14;






  if (VAR_9->rts_metric >= VAR_13->rts_metric)
   return;
 }

 FUNC_7(VAR_12, VAR_13, VAR_9);
 *VAR_13 = *VAR_9;


 FUNC_6(VAR_12, VAR_13);
}
