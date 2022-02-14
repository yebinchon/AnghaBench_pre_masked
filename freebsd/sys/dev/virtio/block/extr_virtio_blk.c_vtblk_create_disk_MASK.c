
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vtblk_softc {int vtblk_dev; struct disk* vtblk_disk; } ;
struct disk {int d_sectorsize; scalar_t__ d_mediasize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct disk*,int ) ;
 int FUNC_2 (struct vtblk_softc*) ;

__attribute__((used)) static void
FUNC_3(struct vtblk_softc *VAR_1)
{
 struct disk *VAR_2;

 VAR_2 = VAR_1->vtblk_disk;

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->vtblk_dev, "%juMB (%ju %u byte sectors)\n",
     (uintmax_t) VAR_2->d_mediasize >> 20,
     (uintmax_t) VAR_2->d_mediasize / VAR_2->d_sectorsize,
     VAR_2->d_sectorsize);

 FUNC_1(VAR_2, VAR_0);
}
