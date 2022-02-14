
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_request_vq; int vtscsi_max_nsegs; int vtscsi_event_vq; int vtscsi_control_vq; int vtscsi_dev; } ;
struct vq_alloc_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct vq_alloc_info*,int ,int ,struct vtscsi_softc*,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct vq_alloc_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct vtscsi_softc *VAR_3)
{
 device_t VAR_4;
 struct vq_alloc_info VAR_5[3];
 int VAR_6;

 VAR_4 = VAR_3->vtscsi_dev;
 VAR_6 = 3;

 FUNC_0(&VAR_5[0], 0, VAR_0, VAR_3,
     &VAR_3->vtscsi_control_vq, "%s control", FUNC_1(VAR_4));

 FUNC_0(&VAR_5[1], 0, VAR_1, VAR_3,
     &VAR_3->vtscsi_event_vq, "%s event", FUNC_1(VAR_4));

 FUNC_0(&VAR_5[2], VAR_3->vtscsi_max_nsegs,
     VAR_2, VAR_3, &VAR_3->vtscsi_request_vq,
     "%s request", FUNC_1(VAR_4));

 return (FUNC_2(VAR_4, 0, VAR_6, VAR_5));
}
