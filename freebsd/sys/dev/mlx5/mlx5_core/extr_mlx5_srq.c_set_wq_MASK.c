
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_srq_attr {int flags; int log_page_size; int wqe_shift; int log_size; int page_offset; int lwm; int pd; int db_record; } ;


 int FUNC_0 (void*,void*,int ,int) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(void *VAR_9, struct mlx5_srq_attr *VAR_10)
{
 FUNC_0(VAR_9, VAR_9, VAR_8, !!(VAR_10->flags & VAR_0));
 FUNC_0(VAR_9, VAR_9, VAR_2, VAR_10->log_page_size);
 FUNC_0(VAR_9, VAR_9, VAR_3, VAR_10->wqe_shift + 4);
 FUNC_0(VAR_9, VAR_9, VAR_4, VAR_10->log_size);
 FUNC_0(VAR_9, VAR_9, VAR_6, VAR_10->page_offset);
 FUNC_0(VAR_9, VAR_9, VAR_5, VAR_10->lwm);
 FUNC_0(VAR_9, VAR_9, VAR_7, VAR_10->pd);
 FUNC_1(VAR_9, VAR_9, VAR_1, VAR_10->db_record);
}
