
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_2__ global; } ;
struct mlx4_ib_demux_ctx {int port; int dev; int mcg_mgid0_list; } ;
struct TYPE_11__ {int mode; int name; } ;
struct TYPE_10__ {TYPE_5__ attr; int * store; int show; } ;
struct TYPE_9__ {union ib_gid mgid; } ;
struct mcast_group {int refcount; TYPE_4__ dentry; int name; int mgid0_list; int state; TYPE_3__ rec; int lock; int timeout_work; int work; TYPE_1__* func; int pending_list; struct mlx4_ib_demux_ctx* demux; } ;
typedef int gfp_t ;
struct TYPE_7__ {int pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mcast_group* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct mcast_group*) ;
 struct mcast_group* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 struct mcast_group* FUNC_10 (struct mlx4_ib_demux_ctx*,union ib_gid*) ;
 struct mcast_group* FUNC_11 (struct mlx4_ib_demux_ctx*,struct mcast_group*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *,union ib_gid*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,long long,long long) ;
 int FUNC_16 (TYPE_5__*) ;
 int VAR_8 ;

__attribute__((used)) static struct mcast_group *FUNC_17(struct mlx4_ib_demux_ctx *VAR_9,
      union ib_gid *VAR_10, int VAR_11,
      gfp_t VAR_12)
{
 struct mcast_group *VAR_13, *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = !FUNC_13(&VAR_5, VAR_10, sizeof VAR_5);
 if (!VAR_15) {
  VAR_13 = FUNC_10(VAR_9, VAR_10);
  if (VAR_13)
   goto found;
 }

 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_13 = FUNC_8(sizeof *VAR_13, VAR_12);
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 VAR_13->demux = VAR_9;
 VAR_13->rec.mgid = *VAR_10;
 FUNC_2(&VAR_13->pending_list);
 FUNC_2(&VAR_13->mgid0_list);
 for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16)
  FUNC_2(&VAR_13->func[VAR_16].pending);
 FUNC_3(&VAR_13->work, VAR_7);
 FUNC_1(&VAR_13->timeout_work, VAR_6);
 FUNC_14(&VAR_13->lock);
 FUNC_15(VAR_13->name, "%016llx%016llx",
   (long long)FUNC_6(
       VAR_13->rec.mgid.global.subnet_prefix),
   (long long)FUNC_6(
       VAR_13->rec.mgid.global.interface_id));
 FUNC_16(&VAR_13->dentry.attr);
 VAR_13->dentry.show = VAR_8;
 VAR_13->dentry.store = ((void*)0);
 VAR_13->dentry.attr.name = VAR_13->name;
 VAR_13->dentry.attr.mode = 0400;
 VAR_13->state = VAR_4;

 if (VAR_15) {
  FUNC_9(&VAR_13->mgid0_list, &VAR_9->mcg_mgid0_list);
  goto found;
 }

 VAR_14 = FUNC_11(VAR_9, VAR_13);
 if (VAR_14) {
  FUNC_12("group just showed up %s - confused\n", VAR_14->name);
  FUNC_7(VAR_13);
  return FUNC_0(-VAR_0);
 }

 FUNC_4(VAR_9->dev, VAR_9->port, &VAR_13->dentry.attr);

found:
 FUNC_5(&VAR_13->refcount);
 return VAR_13;
}
