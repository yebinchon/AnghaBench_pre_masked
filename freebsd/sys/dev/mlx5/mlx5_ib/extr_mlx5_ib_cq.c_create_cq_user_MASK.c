
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ucmd ;
typedef int u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_create_cq {scalar_t__ reserved; int cqe_size; scalar_t__ buf_addr; int db_addr; } ;
struct TYPE_9__ {int umem; } ;
struct mlx5_ib_cq {TYPE_3__ buf; int db; } ;
struct ib_uverbs_cmd_hdr {int dummy; } ;
struct ib_udata {int inlen; } ;
struct ib_ucontext {int dummy; } ;
typedef int __be64 ;
struct TYPE_8__ {TYPE_1__* uars; } ;
struct TYPE_10__ {TYPE_2__ uuari; } ;
struct TYPE_7__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct mlx5_ib_create_cq*,struct ib_udata*,size_t) ;
 int FUNC_7 (struct ib_ucontext*,scalar_t__,int,int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,scalar_t__,int*,int*,int*,int *) ;
 int FUNC_10 (TYPE_4__*,int ,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (struct mlx5_ib_dev*,char*,long long,int,int,int,int) ;
 int FUNC_13 (struct mlx5_ib_dev*,int ,int,int *,int ) ;
 int * FUNC_14 (int) ;
 TYPE_4__* FUNC_15 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_16(struct mlx5_ib_dev *VAR_8, struct ib_udata *VAR_9,
     struct ib_ucontext *VAR_10, struct mlx5_ib_cq *VAR_11,
     int VAR_12, u32 **VAR_13,
     int *VAR_14, int *VAR_15, int *VAR_16)
{
 struct mlx5_ib_create_cq VAR_17;
 size_t VAR_18;
 int VAR_19;
 __be64 *VAR_20;
 int VAR_21;
 int VAR_22;
 void *VAR_23;
 int VAR_24;

 VAR_18 =
  (VAR_9->inlen - sizeof(struct ib_uverbs_cmd_hdr) <
   sizeof(VAR_17)) ? (sizeof(VAR_17) -
      sizeof(VAR_17.reserved)) : sizeof(VAR_17);

 if (FUNC_6(&VAR_17, VAR_9, VAR_18))
  return -VAR_0;

 if (VAR_18 == sizeof(VAR_17) &&
     VAR_17.reserved != 0)
  return -VAR_1;

 if (VAR_17.cqe_size != 64 && VAR_17.cqe_size != 128)
  return -VAR_1;

 *VAR_14 = VAR_17.cqe_size;

 VAR_11->buf.umem = FUNC_7(VAR_10, VAR_17.buf_addr,
       VAR_12 * VAR_17.cqe_size,
       VAR_3, 1);
 if (FUNC_0(VAR_11->buf.umem)) {
  VAR_24 = FUNC_5(VAR_11->buf.umem);
  return VAR_24;
 }

 VAR_24 = FUNC_10(FUNC_15(VAR_10), VAR_17.db_addr,
      &VAR_11->db);
 if (VAR_24)
  goto err_umem;

 FUNC_9(VAR_11->buf.umem, VAR_17.buf_addr, &VAR_21, &VAR_19,
      &VAR_22, ((void*)0));
 FUNC_12(VAR_8, "addr 0x%llx, size %u, npages %d, page_shift %d, ncont %d\n",
      (long long)VAR_17.buf_addr, VAR_12 * VAR_17.cqe_size, VAR_21, VAR_19, VAR_22);

 *VAR_16 = FUNC_4(VAR_6) +
   FUNC_2(VAR_6, VAR_20[0]) * VAR_22;
 *VAR_13 = FUNC_14(*VAR_16);
 if (!*VAR_13) {
  VAR_24 = -VAR_2;
  goto err_db;
 }

 VAR_20 = (__be64 *)FUNC_1(VAR_6, *VAR_13, VAR_20);
 FUNC_13(VAR_8, VAR_11->buf.umem, VAR_19, VAR_20, 0);

 VAR_23 = FUNC_1(VAR_6, *VAR_13, VAR_5);
 FUNC_3(VAR_23, VAR_23, VAR_7,
   VAR_19 - VAR_4);

 *VAR_15 = FUNC_15(VAR_10)->uuari.uars[0].index;

 return 0;

err_db:
 FUNC_11(FUNC_15(VAR_10), &VAR_11->db);

err_umem:
 FUNC_8(VAR_11->buf.umem);
 return VAR_24;
}
