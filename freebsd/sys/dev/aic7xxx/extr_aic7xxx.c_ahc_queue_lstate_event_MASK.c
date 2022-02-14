
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahc_tmode_lstate {scalar_t__ event_w_idx; scalar_t__ event_r_idx; struct ahc_tmode_event* event_buffer; int path; } ;
struct ahc_tmode_event {int event_type; int event_arg; scalar_t__ initiator_id; } ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_4, struct ahc_tmode_lstate *VAR_5,
         u_int VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct ahc_tmode_event *VAR_9;
 int VAR_10;

 FUNC_1(VAR_5->path, 1);
 if (VAR_5->event_w_idx >= VAR_5->event_r_idx)
  VAR_10 = VAR_5->event_w_idx - VAR_5->event_r_idx;
 else
  VAR_10 = VAR_0 + 1
   - (VAR_5->event_r_idx - VAR_5->event_w_idx);

 if (VAR_7 == VAR_1
  || VAR_7 == VAR_3) {






  VAR_5->event_r_idx = 0;
  VAR_5->event_w_idx = 0;
  FUNC_3(VAR_5->path, VAR_10, VAR_2);
 }

 if (VAR_10 == VAR_0) {
  FUNC_2(VAR_5->path);
  FUNC_0("immediate event %x:%x lost\n",
         VAR_5->event_buffer[VAR_5->event_r_idx].event_type,
         VAR_5->event_buffer[VAR_5->event_r_idx].event_arg);
  VAR_5->event_r_idx++;
  if (VAR_5->event_r_idx == VAR_0)
   VAR_5->event_r_idx = 0;
  FUNC_3(VAR_5->path, 1, VAR_2);
 }

 VAR_9 = &VAR_5->event_buffer[VAR_5->event_w_idx];
 VAR_9->initiator_id = VAR_6;
 VAR_9->event_type = VAR_7;
 VAR_9->event_arg = VAR_8;
 VAR_5->event_w_idx++;
 if (VAR_5->event_w_idx == VAR_0)
  VAR_5->event_w_idx = 0;
}
