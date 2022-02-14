
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct icl_conn {char const* ic_name; char* ic_offload; int ic_unmapped; int ic_max_data_segment_length; int ic_outstanding_pdus; int ic_receive_cv; int ic_send_cv; struct mtx* ic_lock; int ic_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct icl_conn *
FUNC_5(const char *VAR_6, struct mtx *VAR_7)
{
 struct icl_conn *VAR_8;

 FUNC_3(&VAR_4);

 VAR_8 = (struct icl_conn *)FUNC_2(&VAR_5, VAR_1, VAR_2 | VAR_3);

 FUNC_0(&VAR_8->ic_to_send);
 VAR_8->ic_lock = VAR_7;
 FUNC_1(&VAR_8->ic_send_cv, "icl_tx");
 FUNC_1(&VAR_8->ic_receive_cv, "icl_rx");



 VAR_8->ic_max_data_segment_length = VAR_0;
 VAR_8->ic_name = VAR_6;
 VAR_8->ic_offload = "None";
 VAR_8->ic_unmapped = 0;

 return (VAR_8);
}
