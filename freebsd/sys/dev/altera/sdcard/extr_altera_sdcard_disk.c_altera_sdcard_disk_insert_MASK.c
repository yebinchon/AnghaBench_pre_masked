
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct disk {char* d_name; int d_mediasize; void* d_maxsize; void* d_sectorsize; int d_ioctl; int d_dump; int d_strategy; int d_unit; struct altera_sdcard_softc* d_drv1; } ;
struct altera_sdcard_softc {int as_mediasize; int as_dev; struct disk* as_disk; int as_unit; } ;


 int FUNC_0 (struct altera_sdcard_softc*) ;
 int FUNC_1 (struct altera_sdcard_softc*) ;
 void* VAR_0 ;
 int FUNC_2 (struct altera_sdcard_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 struct disk* FUNC_4 () ;
 int FUNC_5 (struct disk*,int ) ;

void
FUNC_6(struct altera_sdcard_softc *VAR_5)
{
 struct disk *VAR_6;
 uint64_t VAR_7;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 VAR_6 = FUNC_4();
 VAR_6->d_drv1 = VAR_5;
 VAR_6->d_name = "altera_sdcard";
 VAR_6->d_unit = VAR_5->as_unit;
 VAR_6->d_strategy = VAR_4;
 VAR_6->d_dump = VAR_2;
 VAR_6->d_ioctl = VAR_3;
 VAR_6->d_sectorsize = VAR_0;
 VAR_6->d_mediasize = VAR_5->as_mediasize;
 VAR_6->d_maxsize = VAR_0;
 VAR_5->as_disk = VAR_6;
 FUNC_5(VAR_6, VAR_1);
 FUNC_0(VAR_5);





 VAR_7 = VAR_5->as_mediasize / (1000 * 1000);
 FUNC_3(VAR_5->as_dev, "%juM SD Card inserted\n", (uintmax_t)VAR_7);
}
