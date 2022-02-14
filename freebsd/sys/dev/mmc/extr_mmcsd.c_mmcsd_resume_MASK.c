
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {struct mmcsd_part** part; } ;
struct mmcsd_part {scalar_t__ running; scalar_t__ ioctl; int cnt; int name; int p; scalar_t__ suspend; int * disk; } ;
typedef int device_t ;


 int FUNC_0 (struct mmcsd_part*) ;
 int FUNC_1 (struct mmcsd_part*) ;
 int FUNC_2 (struct mmcsd_part*) ;
 int FUNC_3 (struct mmcsd_part*) ;
 int VAR_0 ;
 struct mmcsd_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *,struct mmcsd_part*,int *,int ,int ,char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct mmcsd_softc *VAR_3 = FUNC_4(VAR_2);
 struct mmcsd_part *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_3->part[VAR_5];
  if (VAR_4 != ((void*)0)) {
   if (VAR_4->disk != ((void*)0)) {
    FUNC_0(VAR_4);
    VAR_4->suspend = 0;
    if (VAR_4->running <= 0) {
     VAR_4->running = 1;
     FUNC_1(VAR_4);
     FUNC_5(&VAR_1, VAR_4,
         &VAR_4->p, 0, 0, "%s%d: mmc/sd card",
         VAR_4->name, VAR_4->cnt);
    } else
     FUNC_1(VAR_4);
   }
   FUNC_2(VAR_4);
   VAR_4->ioctl = 0;
   FUNC_3(VAR_4);
  }
 }
 return (0);
}
