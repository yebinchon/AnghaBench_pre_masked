
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_context {int cmd_fd; } ;
struct mlx5_context {int dbg_fp; struct ibv_context ibv_ctx; } ;
struct mlx5_buf {size_t length; int type; void* buf; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (void*,size_t) ;
 int FUNC_1 (int*,int*,char const*) ;
 int FUNC_2 (int ,int ,char*,int,void*) ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (int *,size_t,int,int ,int ,int) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int,int*) ;

int FUNC_8(struct mlx5_context *VAR_9,
     struct mlx5_buf *VAR_10, size_t VAR_11,
     int VAR_12,
     const char *VAR_13)
{
 void *VAR_14 = VAR_1;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct ibv_context *VAR_18 = &VAR_9->ibv_ctx;
 off_t VAR_19;

 FUNC_1(&VAR_16,
    &VAR_17,
    VAR_13);

 VAR_15 = FUNC_3(VAR_11);

 if (VAR_15 > VAR_16)
  VAR_15 = VAR_16;

 do {
  VAR_19 = 0;
  FUNC_6(VAR_5, &VAR_19);
  FUNC_7(VAR_15, &VAR_19);
  VAR_14 = FUNC_4(((void*)0) , VAR_11, VAR_7 | VAR_6, VAR_2,
       VAR_18->cmd_fd, VAR_12 * VAR_19);
  if (VAR_14 != VAR_1)
   break;




  if (VAR_8 == VAR_0)
   return -1;

  VAR_15 -= 1;
 } while (VAR_15 >= VAR_17);
 FUNC_2(VAR_9->dbg_fp, VAR_4, "block order %d, addr %p\n",
   VAR_15, VAR_14);

 if (VAR_14 == VAR_1)
  return -1;

 if (FUNC_0(VAR_14, VAR_11)) {
  FUNC_5(VAR_14, VAR_11);
  return -1;
 }

 VAR_10->buf = VAR_14;
 VAR_10->length = VAR_11;
 VAR_10->type = VAR_3;

 return 0;
}
