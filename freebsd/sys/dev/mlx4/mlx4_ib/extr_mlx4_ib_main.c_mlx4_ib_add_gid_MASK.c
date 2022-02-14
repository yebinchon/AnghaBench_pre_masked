
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {struct mlx4_ib_iboe iboe; } ;
struct ib_gid_attr {scalar_t__ gid_type; } ;
struct ib_device {int dummy; } ;
struct gid_entry {scalar_t__ gid_type; union ib_gid const gid; } ;
struct gid_cache_context {int real_index; int refcount; } ;
struct TYPE_2__ {scalar_t__ gid_type; union ib_gid const gid; struct gid_cache_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gid_entry*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (union ib_gid const*,union ib_gid const*,int) ;
 int FUNC_3 (union ib_gid const*,union ib_gid const*,int) ;
 int FUNC_4 (struct gid_entry*,struct mlx4_ib_dev*,int) ;
 int FUNC_5 (struct ib_device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct mlx4_ib_dev* FUNC_8 (struct ib_device*) ;
 union ib_gid const VAR_6 ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_7,
      u8 VAR_8,
      unsigned int VAR_9,
      const union ib_gid *VAR_10,
      const struct ib_gid_attr *VAR_11,
      void **VAR_12)
{
 struct mlx4_ib_dev *VAR_13 = FUNC_8(VAR_7);
 struct mlx4_ib_iboe *VAR_14 = &VAR_13->iboe;
 struct mlx4_port_gid_table *VAR_15;
 int VAR_16 = -1, VAR_17 = -1;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20;
 struct gid_entry *VAR_21 = ((void*)0);

 if (!FUNC_5(VAR_7, VAR_8))
  return -VAR_0;

 if (VAR_8 > VAR_4)
  return -VAR_0;

 if (!VAR_12)
  return -VAR_0;

 VAR_15 = &VAR_14->gids[VAR_8 - 1];
 FUNC_6(&VAR_14->lock);
 for (VAR_20 = 0; VAR_20 < VAR_5; ++VAR_20) {
  if (!FUNC_2(&VAR_15->gids[VAR_20].gid, VAR_10, sizeof(*VAR_10)) &&
      (VAR_15->gids[VAR_20].gid_type == VAR_11->gid_type)) {
   VAR_17 = VAR_20;
   break;
  }
  if (VAR_16 < 0 && !FUNC_2(&VAR_15->gids[VAR_20].gid, &VAR_6, sizeof(*VAR_10)))
   VAR_16 = VAR_20;
 }

 if (VAR_17 < 0) {
  if (VAR_16 < 0) {
   VAR_18 = -VAR_2;
  } else {
   VAR_15->gids[VAR_16].ctx = FUNC_1(sizeof(*VAR_15->gids[VAR_16].ctx), VAR_3);
   if (!VAR_15->gids[VAR_16].ctx) {
    VAR_18 = -VAR_1;
   } else {
    *VAR_12 = VAR_15->gids[VAR_16].ctx;
    FUNC_3(&VAR_15->gids[VAR_16].gid, VAR_10, sizeof(*VAR_10));
    VAR_15->gids[VAR_16].gid_type = VAR_11->gid_type;
    VAR_15->gids[VAR_16].ctx->real_index = VAR_16;
    VAR_15->gids[VAR_16].ctx->refcount = 1;
    VAR_19 = 1;
   }
  }
 } else {
  struct gid_cache_context *VAR_22 = VAR_15->gids[VAR_17].ctx;
  *VAR_12 = VAR_22;
  VAR_22->refcount++;
 }
 if (!VAR_18 && VAR_19) {
  VAR_21 = FUNC_1(sizeof(*VAR_21) * VAR_5, VAR_3);
  if (!VAR_21) {
   VAR_18 = -VAR_1;
  } else {
   for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
    FUNC_3(&VAR_21[VAR_20].gid, &VAR_15->gids[VAR_20].gid, sizeof(union ib_gid));
    VAR_21[VAR_20].gid_type = VAR_15->gids[VAR_20].gid_type;
   }
  }
 }
 FUNC_7(&VAR_14->lock);

 if (!VAR_18 && VAR_19) {
  VAR_18 = FUNC_4(VAR_21, VAR_13, VAR_8);
  FUNC_0(VAR_21);
 }

 return VAR_18;
}
