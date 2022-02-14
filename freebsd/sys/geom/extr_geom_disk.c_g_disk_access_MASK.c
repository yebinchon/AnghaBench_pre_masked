
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {char* name; scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int mediasize; int stripesize; int stripeoffset; int sectorsize; struct g_disk_softc* private; } ;
struct g_disk_softc {scalar_t__* led; int state; struct disk* dp; } ;
struct disk {int d_flags; int (* d_open ) (struct disk*) ;scalar_t__ d_maxsize; char* d_name; int d_unit; scalar_t__ d_delmaxsize; int (* d_close ) (struct disk*) ;int d_mediasize; int d_stripesize; int d_stripeoffset; int d_sectorsize; scalar_t__ d_destroyed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct g_provider*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,int,int,int) ;
 int FUNC_3 (scalar_t__*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct disk*) ;
 int FUNC_6 (struct disk*) ;

__attribute__((used)) static int
FUNC_7(struct g_provider *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct disk *VAR_13;
 struct g_disk_softc *VAR_14;
 int VAR_15;

 FUNC_2(VAR_7, "g_disk_access(%s, %d, %d, %d)",
     VAR_9->name, VAR_10, VAR_11, VAR_12);
 FUNC_1();
 VAR_14 = VAR_9->private;
 if (VAR_14 == ((void*)0) || (VAR_13 = VAR_14->dp) == ((void*)0) || VAR_13->d_destroyed) {




  if (VAR_10 <= 0 && VAR_11 <= 0 && VAR_12 <= 0)
   return (0);
  return (VAR_4);
 }
 VAR_10 += VAR_9->acr;
 VAR_11 += VAR_9->acw;
 VAR_12 += VAR_9->ace;
 VAR_15 = 0;
 if ((VAR_9->acr + VAR_9->acw + VAR_9->ace) == 0 && (VAR_10 + VAR_11 + VAR_12) > 0) {




  if (VAR_11 > 0 && (VAR_13->d_flags & VAR_3) != 0)
   VAR_15 = VAR_5;
  if (VAR_15 == 0 && VAR_13->d_open != ((void*)0))
   VAR_15 = VAR_13->d_open(VAR_13);
  if (VAR_8 && VAR_15 != 0)
   FUNC_4("Opened disk %s -> %d\n", VAR_9->name, VAR_15);
  if (VAR_15 != 0)
   return (VAR_15);
  VAR_9->sectorsize = VAR_13->d_sectorsize;
  if (VAR_13->d_maxsize == 0) {
   FUNC_4("WARNING: Disk drive %s%d has no d_maxsize\n",
       VAR_13->d_name, VAR_13->d_unit);
   VAR_13->d_maxsize = VAR_0;
  }
  if (VAR_13->d_delmaxsize == 0) {
   if (VAR_8 && VAR_13->d_flags & VAR_1) {
    FUNC_4("WARNING: Disk drive %s%d has no "
        "d_delmaxsize\n", VAR_13->d_name, VAR_13->d_unit);
   }
   VAR_13->d_delmaxsize = VAR_13->d_maxsize;
  }
  VAR_9->stripeoffset = VAR_13->d_stripeoffset;
  VAR_9->stripesize = VAR_13->d_stripesize;
  VAR_13->d_flags |= VAR_2;




  if (VAR_9->mediasize == 0)
   VAR_9->mediasize = VAR_13->d_mediasize;
  else
   FUNC_0(VAR_9, VAR_13->d_mediasize);
 } else if ((VAR_9->acr + VAR_9->acw + VAR_9->ace) > 0 && (VAR_10 + VAR_11 + VAR_12) == 0) {
  if (VAR_13->d_close != ((void*)0)) {
   VAR_15 = VAR_13->d_close(VAR_13);
   if (VAR_15 != 0)
    FUNC_4("Closed disk %s -> %d\n",
        VAR_9->name, VAR_15);
  }
  VAR_14->state = VAR_6;
  if (VAR_14->led[0] != 0)
   FUNC_3(VAR_14->led, "0");
  VAR_13->d_flags &= ~VAR_2;
 }
 return (VAR_15);
}
