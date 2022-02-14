
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_spare {scalar_t__ rts_metric; int rts_time; int rts_router; int rts_gate; struct interface* rts_ifp; } ;
struct rt_entry {int rt_state; } ;
struct khash {scalar_t__ k_metric; int k_mask; int k_dst; int k_gate; } ;
struct interface {int int_addr; } ;
typedef int new ;
struct TYPE_2__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_spare*,int ,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ,int,struct rt_spare*) ;
 int FUNC_2 (struct rt_entry*,int,struct rt_spare*,int ) ;
 struct rt_entry* FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct khash *VAR_3,
    struct interface *VAR_4)
{
 struct rt_entry *VAR_5;
 struct rt_spare VAR_6;

 if (VAR_3->k_metric == 0)
  return;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.rts_ifp = VAR_4;
 VAR_6.rts_gate = VAR_3->k_gate;
 VAR_6.rts_router = (VAR_4 != ((void*)0)) ? VAR_4->int_addr : VAR_1;
 VAR_6.rts_metric = VAR_3->k_metric;
 VAR_6.rts_time = VAR_2.tv_sec;

 VAR_5 = FUNC_3(VAR_3->k_dst, VAR_3->k_mask);
 if (VAR_5 != ((void*)0)) {
  if (!(VAR_5->rt_state & VAR_0))
   FUNC_2(VAR_5, VAR_5->rt_state | VAR_0, &VAR_6, 0);
 } else {
  FUNC_1(VAR_3->k_dst, VAR_3->k_mask, VAR_0, &VAR_6);
 }
}
