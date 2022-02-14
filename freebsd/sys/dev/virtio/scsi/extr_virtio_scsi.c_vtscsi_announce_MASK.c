
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ target_id_t ;
struct vtscsi_softc {int vtscsi_sim; struct cam_path* vtscsi_path; } ;
struct cam_path {int dummy; } ;
typedef scalar_t__ lun_id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*) ;
 int FUNC_2 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_3 (struct cam_path**,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_5(struct vtscsi_softc *VAR_4, uint32_t VAR_5,
    target_id_t VAR_6, lun_id_t VAR_7)
{
 struct cam_path *VAR_8;


 if (VAR_6 == VAR_2 && VAR_7 == VAR_0) {
  FUNC_2(VAR_5, VAR_4->vtscsi_path, ((void*)0));
  return;
 }

 if (FUNC_3(&VAR_8, ((void*)0), FUNC_0(VAR_4->vtscsi_sim),
     VAR_6, VAR_7) != VAR_1) {
  FUNC_1(VAR_4, VAR_3, "cannot create path\n");
  return;
 }

 FUNC_2(VAR_5, VAR_8, ((void*)0));
 FUNC_4(VAR_8);
}
