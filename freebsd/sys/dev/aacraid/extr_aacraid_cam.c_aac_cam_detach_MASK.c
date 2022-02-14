
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_softc {int aac_io_lock; int * cam_rescan_cb; } ;
struct aac_cam {int sim; int path; TYPE_1__* inf; } ;
typedef int device_t ;
struct TYPE_2__ {int * aac_cam; struct aac_softc* aac_sc; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct aac_softc*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct aac_softc *VAR_4;
 struct aac_cam *VAR_5;

 VAR_5 = (struct aac_cam *)FUNC_2(VAR_3);
 if (!VAR_5->inf)
  return (0);
 VAR_4 = VAR_5->inf->aac_sc;
 FUNC_3(VAR_4, VAR_1, "");
 VAR_5->inf->aac_cam = ((void*)0);

 FUNC_4(&VAR_4->aac_io_lock);

 FUNC_6(VAR_0, VAR_5->path, ((void*)0));
 FUNC_8(VAR_5->path);
 FUNC_7(FUNC_1(VAR_5->sim));
 FUNC_0(VAR_5->sim, VAR_2);

 VAR_4->cam_rescan_cb = ((void*)0);

 FUNC_5(&VAR_4->aac_io_lock);

 return (0);
}
