
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct g_provider {int flags; size_t mediasize; size_t sectorsize; int name; int stripeoffset; int stripesize; } ;
struct g_concat_softc {scalar_t__ sc_ndisks; scalar_t__ sc_type; struct g_provider* sc_provider; struct g_concat_disk* sc_disks; int sc_name; int sc_geom; } ;
struct g_concat_disk {size_t d_start; size_t d_end; TYPE_1__* d_consumer; scalar_t__ d_candelete; } ;
typedef void* off_t ;
struct TYPE_3__ {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct g_concat_softc*) ;
 int FUNC_3 (struct g_provider*,int ) ;
 int FUNC_4 (char*,TYPE_1__*,scalar_t__*) ;
 struct g_provider* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 () ;
 size_t FUNC_7 (size_t,size_t) ;

__attribute__((used)) static void
FUNC_8(struct g_concat_softc *VAR_4)
{
 struct g_concat_disk *VAR_5;
 struct g_provider *VAR_6, *VAR_7;
 u_int VAR_8, VAR_9 = 0;
 off_t VAR_10;
 int VAR_11;

 FUNC_6();
 if (FUNC_2(VAR_4) != VAR_4->sc_ndisks)
  return;

 VAR_7 = FUNC_5(VAR_4->sc_geom, "concat/%s", VAR_4->sc_name);
 VAR_7->flags |= VAR_3 | VAR_2 |
     VAR_1;
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->sc_ndisks; VAR_8++) {
  VAR_5 = &VAR_4->sc_disks[VAR_8];
  VAR_6 = VAR_5->d_consumer->provider;
  VAR_5->d_start = VAR_10;
  VAR_5->d_end = VAR_5->d_start + VAR_6->mediasize;
  if (VAR_4->sc_type == VAR_0)
   VAR_5->d_end -= VAR_6->sectorsize;
  VAR_10 = VAR_5->d_end;
  VAR_11 = FUNC_1(VAR_5->d_consumer, 1, 0, 0);
  if (VAR_11 == 0) {
   VAR_11 = FUNC_4("GEOM::candelete", VAR_5->d_consumer,
       &VAR_5->d_candelete);
   if (VAR_11 != 0)
    VAR_5->d_candelete = 0;
   (void)FUNC_1(VAR_5->d_consumer, -1, 0, 0);
  } else
   FUNC_0(1, "Failed to access disk %s, error %d.",
       VAR_6->name, VAR_11);
  if (VAR_8 == 0)
   VAR_9 = VAR_6->sectorsize;
  else
   VAR_9 = FUNC_7(VAR_9, VAR_6->sectorsize);


  if ((VAR_6->flags & VAR_1) == 0) {
   FUNC_0(1, "Cancelling unmapped "
       "because of %s.", VAR_6->name);
   VAR_7->flags &= ~VAR_1;
  }
 }
 VAR_7->sectorsize = VAR_9;

 VAR_7->mediasize = VAR_10;
 VAR_7->stripesize = VAR_4->sc_disks[0].d_consumer->provider->stripesize;
 VAR_7->stripeoffset = VAR_4->sc_disks[0].d_consumer->provider->stripeoffset;
 VAR_4->sc_provider = VAR_7;
 FUNC_3(VAR_7, 0);

 FUNC_0(0, "Device %s activated.", VAR_4->sc_provider->name);
}
