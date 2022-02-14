
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ts_params {int last_comp_with_ts; scalar_t__ comp_recv_prev_time; int comp_with_time_iters; scalar_t__ comp_recv_total_time_delta; int comp_recv_min_time_delta; int comp_recv_max_time_delta; } ;
struct pingpong_context {int rx_depth; int pending; scalar_t__ completion_timestamp_mask; } ;
typedef enum ibv_wc_status { ____Placeholder_ibv_wc_status } ibv_wc_status ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;


 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct pingpong_context*,int ) ;
 scalar_t__ FUNC_5 (struct pingpong_context*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_6(struct pingpong_context *VAR_3, int *VAR_4,
      int *VAR_5, int *VAR_6, int VAR_7,
      uint64_t VAR_8, enum ibv_wc_status VAR_9,
      uint64_t VAR_10,
      struct ts_params *VAR_11)
{
 if (VAR_9 != VAR_0) {
  FUNC_2(VAR_1, "Failed status %s (%d) for wr_id %d\n",
   FUNC_3(VAR_9),
   VAR_9, (int)VAR_8);
  return 1;
 }

 switch ((int)VAR_8) {
 case 128:
  ++(*VAR_4);
  break;

 case 129:
  if (--(*VAR_6) <= 1) {
   *VAR_6 += FUNC_4(VAR_3, VAR_3->rx_depth - *VAR_6);
   if (*VAR_6 < VAR_3->rx_depth) {
    FUNC_2(VAR_1,
     "Couldn't post receive (%d)\n",
     *VAR_6);
    return 1;
   }
  }

  ++(*VAR_5);
  if (VAR_2) {
   if (VAR_11->last_comp_with_ts) {
    uint64_t VAR_12;


    if (VAR_10 >= VAR_11->comp_recv_prev_time)
     VAR_12 = VAR_10 - VAR_11->comp_recv_prev_time;
    else
     VAR_12 = VAR_3->completion_timestamp_mask - VAR_11->comp_recv_prev_time +
      VAR_10 + 1;

    VAR_11->comp_recv_max_time_delta = FUNC_0(VAR_11->comp_recv_max_time_delta, VAR_12);
    VAR_11->comp_recv_min_time_delta = FUNC_1(VAR_11->comp_recv_min_time_delta, VAR_12);
    VAR_11->comp_recv_total_time_delta += VAR_12;
    VAR_11->comp_with_time_iters++;
   }

   VAR_11->comp_recv_prev_time = VAR_10;
   VAR_11->last_comp_with_ts = 1;
  } else {
   VAR_11->last_comp_with_ts = 0;
  }

  break;

 default:
  FUNC_2(VAR_1, "Completion for unknown wr_id %d\n",
   (int)VAR_8);
  return 1;
 }

 VAR_3->pending &= ~(int)VAR_8;
 if (*VAR_4 < VAR_7 && !VAR_3->pending) {
  if (FUNC_5(VAR_3)) {
   FUNC_2(VAR_1, "Couldn't post send\n");
   return 1;
  }
  VAR_3->pending = 129 |
   128;
 }

 return 0;
}
