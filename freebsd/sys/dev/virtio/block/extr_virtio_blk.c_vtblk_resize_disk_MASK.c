
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct vtblk_softc {struct disk* vtblk_disk; int vtblk_dev; } ;
struct disk {int d_sectorsize; scalar_t__ d_mediasize; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct disk*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vtblk_softc *VAR_2, uint64_t VAR_3)
{
 device_t VAR_4;
 struct disk *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->vtblk_dev;
 VAR_5 = VAR_2->vtblk_disk;

 VAR_5->d_mediasize = VAR_3;
 if (VAR_1) {
  FUNC_0(VAR_4, "resized to %juMB (%ju %u byte sectors)\n",
      (uintmax_t) VAR_5->d_mediasize >> 20,
      (uintmax_t) VAR_5->d_mediasize / VAR_5->d_sectorsize,
      VAR_5->d_sectorsize);
 }

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_4,
      "disk_resize(9) failed, error: %d\n", VAR_6);
 }
}
