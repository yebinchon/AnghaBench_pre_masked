
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {struct mmcsd_part** part; } ;
struct mmcsd_part {int suspend; scalar_t__ running; int ioctl; int ioctl_mtx; int disk_mtx; int * disk; } ;
typedef int device_t ;


 int FUNC_0 (struct mmcsd_part*) ;
 int FUNC_1 (struct mmcsd_part*) ;
 int FUNC_2 (struct mmcsd_part*) ;
 int FUNC_3 (struct mmcsd_part*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mmcsd_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct mmcsd_softc*) ;
 int FUNC_7 (struct mmcsd_part*,int *,int ,char*,int ) ;
 int FUNC_8 (struct mmcsd_part*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct mmcsd_softc *VAR_3 = FUNC_4(VAR_2);
 struct mmcsd_part *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_3->part[VAR_5];
  if (VAR_4 != ((void*)0)) {
   if (VAR_4->disk != ((void*)0)) {
    FUNC_0(VAR_4);
    VAR_4->suspend = 1;
    if (VAR_4->running > 0) {

     VAR_4->running = 0;
     FUNC_8(VAR_4);

     while (VAR_4->running != -1)
      FUNC_7(VAR_4, &VAR_4->disk_mtx, 0,
          "mmcsd disk suspension", 0);
    }
    FUNC_1(VAR_4);
   }
   FUNC_2(VAR_4);
   while (VAR_4->ioctl > 0)
    FUNC_7(VAR_4, &VAR_4->ioctl_mtx, 0,
        "mmcsd IOCTL suspension", 0);
   VAR_4->ioctl = -1;
   FUNC_3(VAR_4);
  }
 }
 if (FUNC_6(VAR_3) != VAR_0)
  FUNC_5(VAR_2, "failed to flush cache\n");
 return (0);
}
