
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct rt_spare {scalar_t__ rts_metric; scalar_t__ rts_time; scalar_t__ rts_gate; int rts_ifp; } ;
struct rt_entry {scalar_t__ rt_metric; scalar_t__ rt_gate; int rt_state; struct rt_spare* rt_spares; void* rt_seqno; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct rt_entry*,int,struct rt_spare*,char*) ;
 void* VAR_6 ;

void
FUNC_3(struct rt_entry *VAR_7,
  u_int VAR_8,
  struct rt_spare *VAR_9,
  char *VAR_10)
{
 if (VAR_7->rt_metric != VAR_9->rts_metric) {




  if (VAR_9->rts_metric == VAR_1) {
   VAR_4.tv_sec = VAR_5.tv_sec;
   if (VAR_9->rts_time >= VAR_5.tv_sec - VAR_0)
    VAR_9->rts_time = VAR_5.tv_sec - VAR_0;
  }
  VAR_7->rt_seqno = VAR_6;
  FUNC_1();
 }

 if (VAR_7->rt_gate != VAR_9->rts_gate) {
  VAR_4.tv_sec = VAR_5.tv_sec;
  VAR_7->rt_seqno = VAR_6;
  FUNC_1();
 }

 VAR_8 |= (VAR_7->rt_state & VAR_2);



 if (!FUNC_0(VAR_8, VAR_9->rts_ifp))
  VAR_9->rts_time = VAR_5.tv_sec;

 if (VAR_3)
  FUNC_2(VAR_7, VAR_8, VAR_9,
        VAR_10 ? VAR_10 : "Chg   ");

 VAR_7->rt_state = VAR_8;
 VAR_7->rt_spares[0] = *VAR_9;
}
