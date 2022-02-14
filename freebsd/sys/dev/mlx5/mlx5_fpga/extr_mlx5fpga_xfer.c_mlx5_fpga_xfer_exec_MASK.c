
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ u64 ;
struct xfer_state {int budget; scalar_t__ start_count; int lock; int status; struct mlx5_fpga_transaction const* xfer; } ;
struct mlx5_fpga_transaction {scalar_t__ addr; scalar_t__ size; TYPE_1__* conn; } ;
struct TYPE_2__ {int fdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfer_state*) ;
 struct xfer_state* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct xfer_state*) ;

int FUNC_9(const struct mlx5_fpga_transaction *VAR_4)
{
 u64 VAR_5 = FUNC_2(VAR_4->conn->fdev);
 u64 VAR_6 = FUNC_3(VAR_4->conn->fdev);
 struct xfer_state *VAR_7;
 unsigned long VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_4->addr + VAR_4->size > VAR_5 + VAR_6) {
  FUNC_4(VAR_4->conn->fdev, "Transfer ends at %jx outside of DDR range %jx\n",
          (uintmax_t)(VAR_4->addr + VAR_4->size), (uintmax_t)(VAR_5 + VAR_6));
  return -VAR_0;
 }

 if (VAR_4->addr & VAR_3) {
  FUNC_4(VAR_4->conn->fdev, "Transfer address %jx not aligned\n",
          (uintmax_t)VAR_4->addr);
  return -VAR_0;
 }

 if (VAR_4->size & VAR_3) {
  FUNC_4(VAR_4->conn->fdev, "Transfer size %zu not aligned\n",
          VAR_4->size);
  return -VAR_0;
 }

 if (VAR_4->size < 1) {
  FUNC_4(VAR_4->conn->fdev, "Empty transfer size %zu not allowed\n",
          VAR_4->size);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 VAR_7->xfer = VAR_4;
 VAR_7->status = VAR_2;
 VAR_7->budget = 7;
 FUNC_5(&VAR_7->lock);
 FUNC_6(&VAR_7->lock, VAR_8);

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 && (VAR_7->start_count == 0))
  VAR_9 = 1;

 FUNC_7(&VAR_7->lock, VAR_8);

 if (VAR_9)
  FUNC_8(VAR_7);
 return VAR_10;
}
