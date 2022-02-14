
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct mlx4_ib_sriov {int id_map_lock; int cm_list; int pv_id_table; } ;
struct id_map_entry {int slave_id; int list; void* pv_cm_id; int timeout; TYPE_1__* dev; scalar_t__ scheduled_delete; void* sl_cm_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 int VAR_0 ;
 struct id_map_entry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct id_map_entry*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct id_map_entry*) ;
 struct id_map_entry* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ib_device*,char*,...) ;
 int FUNC_9 (struct ib_device*,struct id_map_entry*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (struct ib_device*) ;

__attribute__((used)) static struct id_map_entry *
FUNC_13(struct ib_device *VAR_4, int VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct id_map_entry *VAR_8;
 struct mlx4_ib_sriov *VAR_9 = &FUNC_12(VAR_4)->sriov;

 VAR_8 = FUNC_6(sizeof (struct id_map_entry), VAR_1);
 if (!VAR_8) {
  FUNC_8(VAR_4, "Couldn't allocate id cache entry - out of memory\n");
  return FUNC_0(-VAR_0);
 }

 VAR_8->sl_cm_id = VAR_6;
 VAR_8->slave_id = VAR_5;
 VAR_8->scheduled_delete = 0;
 VAR_8->dev = FUNC_12(VAR_4);
 FUNC_1(&VAR_8->timeout, VAR_3);

 FUNC_3(VAR_1);
 FUNC_10(&FUNC_12(VAR_4)->sriov.id_map_lock);

 VAR_7 = FUNC_2(&VAR_9->pv_id_table, VAR_8, 0, 0, VAR_2);
 if (VAR_7 >= 0) {
  VAR_8->pv_cm_id = (u32)VAR_7;
  FUNC_9(VAR_4, VAR_8);
  FUNC_7(&VAR_8->list, &VAR_9->cm_list);
 }

 FUNC_11(&VAR_9->id_map_lock);
 FUNC_4();

 if (VAR_7 >= 0)
  return VAR_8;


 FUNC_5(VAR_8);
 FUNC_8(VAR_4, "No more space in the idr (err:0x%x)\n", VAR_7);
 return FUNC_0(-VAR_0);
}
