
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccb_hdr {scalar_t__ func_code; int status; struct targ_cmd_descr* targ_descr; int cbfcnp; } ;
union ccb {struct ccb_hdr ccb_h; } ;
struct targ_softc {int pending_ccb_queue; int path; int maxio; } ;
struct cam_periph_map_info {scalar_t__ num_bufs_used; } ;
struct targ_cmd_descr {struct cam_periph_map_info mapinfo; } ;
struct TYPE_2__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (union ccb*) ;
 int FUNC_3 (union ccb*,struct cam_periph_map_info*,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int
FUNC_5(struct targ_softc *VAR_6, union ccb *VAR_7,
     struct targ_cmd_descr *VAR_8)
{
 struct cam_periph_map_info *VAR_9;
 struct ccb_hdr *VAR_10;
 int VAR_11;

 VAR_10 = &VAR_7->ccb_h;
 VAR_9 = &VAR_8->mapinfo;
 VAR_9->num_bufs_used = 0;







 VAR_10->cbfcnp = VAR_5;
 VAR_10->targ_descr = VAR_8;

 if ((VAR_10->func_code == VAR_2) ||
     (VAR_10->func_code == VAR_3)) {

  VAR_11 = FUNC_3(VAR_7, VAR_9, VAR_6->maxio);





  if (VAR_11) {
   VAR_10->status = VAR_1;
   VAR_9->num_bufs_used = 0;
   return (VAR_11);
  }
 }





 FUNC_0(VAR_6->path, VAR_0, ("sendccb %p\n", VAR_7));
 if (FUNC_2(VAR_7)) {
  FUNC_1(&VAR_6->pending_ccb_queue, VAR_10,
      VAR_4.tqe);
 }
 FUNC_4(VAR_7);

 return (0);
}
