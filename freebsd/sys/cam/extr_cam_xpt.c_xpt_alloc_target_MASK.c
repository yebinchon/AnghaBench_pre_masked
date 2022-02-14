
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ target_id_t ;
struct cam_et {scalar_t__ target_id; int refcount; int last_reset; int luns_mtx; int * luns; scalar_t__ generation; struct cam_eb* bus; int ed_entries; } ;
struct cam_eb {int generation; int et_entries; int refcount; int eb_mtx; } ;
struct TYPE_2__ {int xpt_topo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cam_et* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cam_et*,struct cam_et*,int ) ;
 int FUNC_3 (int *,struct cam_et*,int ) ;
 struct cam_et* FUNC_4 (struct cam_et*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static struct cam_et *
FUNC_9(struct cam_eb *VAR_7, target_id_t VAR_8)
{
 struct cam_et *VAR_9, *VAR_10;

 FUNC_6(&VAR_6.xpt_topo_lock, VAR_0);
 FUNC_6(&VAR_7->eb_mtx, VAR_0);
 VAR_10 = (struct cam_et *)FUNC_5(sizeof(*VAR_10), VAR_2,
      VAR_3|VAR_4);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_10->ed_entries);
 VAR_10->bus = VAR_7;
 VAR_10->target_id = VAR_8;
 VAR_10->refcount = 1;
 VAR_10->generation = 0;
 VAR_10->luns = ((void*)0);
 FUNC_7(&VAR_10->luns_mtx, "CAM LUNs lock", ((void*)0), VAR_1);
 FUNC_8(&VAR_10->last_reset);




 VAR_7->refcount++;


 VAR_9 = FUNC_0(&VAR_7->et_entries);
 while (VAR_9 != ((void*)0) && VAR_9->target_id < VAR_8)
  VAR_9 = FUNC_4(VAR_9, VAR_5);
 if (VAR_9 != ((void*)0)) {
  FUNC_2(VAR_9, VAR_10, VAR_5);
 } else {
  FUNC_3(&VAR_7->et_entries, VAR_10, VAR_5);
 }
 VAR_7->generation++;
 return (VAR_10);
}
