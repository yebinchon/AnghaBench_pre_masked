
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {struct mmcsd_part** part; int * rpmb_dev; } ;
struct mmcsd_part {scalar_t__ running; int ioctl; int * disk; int bio_queue; int ioctl_mtx; int disk_mtx; scalar_t__ suspend; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mmcsd_part*) ;
 int FUNC_1 (struct mmcsd_part*) ;
 int FUNC_2 (struct mmcsd_part*) ;
 int FUNC_3 (struct mmcsd_part*) ;
 int FUNC_4 (struct mmcsd_part*) ;
 int FUNC_5 (struct mmcsd_part*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 struct mmcsd_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mmcsd_part*,int ) ;
 scalar_t__ FUNC_12 (struct mmcsd_softc*) ;
 int FUNC_13 (struct mmcsd_part*,int *,int ,char*,int ) ;
 int FUNC_14 (struct mmcsd_part*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_4)
{
 struct mmcsd_softc *VAR_5 = FUNC_8(VAR_4);
 struct mmcsd_part *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->part[VAR_7];
  if (VAR_6 != ((void*)0)) {
   if (VAR_6->disk != ((void*)0)) {
    FUNC_0(VAR_6);
    VAR_6->suspend = 0;
    if (VAR_6->running > 0) {

     VAR_6->running = 0;
     FUNC_14(VAR_6);

     while (VAR_6->running != -1)
      FUNC_13(VAR_6, &VAR_6->disk_mtx, 0,
          "mmcsd disk detach", 0);
    }
    FUNC_2(VAR_6);
   }
   FUNC_3(VAR_6);
   while (VAR_6->ioctl > 0)
    FUNC_13(VAR_6, &VAR_6->ioctl_mtx, 0,
        "mmcsd IOCTL detach", 0);
   VAR_6->ioctl = -1;
   FUNC_5(VAR_6);
  }
 }

 if (VAR_5->rpmb_dev != ((void*)0))
  FUNC_7(VAR_5->rpmb_dev);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->part[VAR_7];
  if (VAR_6 != ((void*)0)) {
   if (VAR_6->disk != ((void*)0)) {

    FUNC_6(&VAR_6->bio_queue, ((void*)0), VAR_0);

    FUNC_10(VAR_6->disk);

    FUNC_1(VAR_6);
   }
   FUNC_4(VAR_6);
   FUNC_11(VAR_6, VAR_3);
  }
 }
 if (FUNC_12(VAR_5) != VAR_1)
  FUNC_9(VAR_4, "failed to flush cache\n");
 return (0);
}
