
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {scalar_t__ rts_metric; int rts_router; int rts_gate; struct interface* rts_ifp; } ;
struct rt_entry {int rt_state; scalar_t__ rt_metric; struct interface* rt_ifp; } ;
struct interface {scalar_t__ int_metric; int int_std_mask; int int_std_addr; int int_state; int int_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int,struct rt_spare*) ;
 int FUNC_1 (struct rt_entry*) ;
 int FUNC_2 (struct rt_entry*) ;
 struct rt_entry* FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct interface *VAR_5)
{
 struct rt_entry *VAR_6;
 static struct rt_spare VAR_7;






 if (VAR_4 || VAR_3) {
  VAR_5->int_state |= VAR_0;
  VAR_6 = FUNC_3(VAR_5->int_std_addr, VAR_5->int_std_mask);
  if (VAR_6 != ((void*)0)
      && 0 == (VAR_6->rt_state & VAR_2)
      && (!(VAR_6->rt_state & VAR_1)
   || VAR_6->rt_metric > VAR_5->int_metric)) {
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
  }
  if (VAR_6 == ((void*)0)) {
   VAR_7.rts_ifp = VAR_5;
   VAR_7.rts_gate = VAR_5->int_addr;
   VAR_7.rts_router = VAR_5->int_addr;
   VAR_7.rts_metric = VAR_5->int_metric;
   FUNC_0(VAR_5->int_std_addr, VAR_5->int_std_mask,
         VAR_1, &VAR_7);
  }

 } else {
  VAR_5->int_state &= ~VAR_0;

  VAR_6 = FUNC_3(VAR_5->int_std_addr,
      VAR_5->int_std_mask);
  if (VAR_6 != ((void*)0)
      && (VAR_6->rt_state & VAR_1)
      && VAR_6->rt_ifp == VAR_5)
   FUNC_1(VAR_6);
 }
}
