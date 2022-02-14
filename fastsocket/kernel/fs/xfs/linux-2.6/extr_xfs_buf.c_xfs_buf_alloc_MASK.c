
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_off_t ;
typedef int xfs_buf_flags_t ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf {size_t b_buffer_length; size_t b_count_desired; int b_flags; int b_waiters; int b_pin_count; int b_bn; int b_file_offset; struct xfs_buftarg* b_target; int b_sema; int b_rbnode; int b_list; int b_lru; int b_iowait; int b_lru_ref; int b_hold; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xfs_buf*) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct xfs_buf* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct xfs_buf*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_8 ;
 int FUNC_11 (int) ;
 int VAR_9 ;

struct xfs_buf *
FUNC_12(
 struct xfs_buftarg *VAR_10,
 xfs_off_t VAR_11,
 size_t VAR_12,
 xfs_buf_flags_t VAR_13)
{
 struct xfs_buf *VAR_14;

 VAR_14 = FUNC_7(VAR_9, FUNC_11(VAR_13));
 if (FUNC_10(!VAR_14))
  return ((void*)0);





 VAR_13 &= ~(VAR_2 | VAR_3 | VAR_1 |
     VAR_5 | VAR_0 | VAR_4);

 FUNC_4(&VAR_14->b_hold, 1);
 FUNC_4(&VAR_14->b_lru_ref, 1);
 FUNC_5(&VAR_14->b_iowait);
 FUNC_0(&VAR_14->b_lru);
 FUNC_0(&VAR_14->b_list);
 FUNC_1(&VAR_14->b_rbnode);
 FUNC_8(&VAR_14->b_sema, 0);
 FUNC_2(VAR_14);
 VAR_14->b_target = VAR_10;
 VAR_14->b_file_offset = VAR_11;





 VAR_14->b_buffer_length = VAR_14->b_count_desired = VAR_12;
 VAR_14->b_flags = VAR_13;
 VAR_14->b_bn = VAR_6;
 FUNC_4(&VAR_14->b_pin_count, 0);
 FUNC_6(&VAR_14->b_waiters);

 FUNC_3(VAR_8);
 FUNC_9(VAR_14, VAR_7);

 return VAR_14;
}
