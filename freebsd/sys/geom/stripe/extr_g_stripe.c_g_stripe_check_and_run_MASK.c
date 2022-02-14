
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct g_stripe_softc {size_t sc_ndisks; scalar_t__ sc_type; int sc_stripesize; TYPE_2__* sc_provider; TYPE_1__** sc_disks; int sc_name; int sc_geom; } ;
struct g_provider {int mediasize; size_t sectorsize; int flags; int name; } ;
typedef int off_t ;
struct TYPE_5__ {int flags; size_t sectorsize; int mediasize; int stripesize; int name; scalar_t__ stripeoffset; } ;
struct TYPE_4__ {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_4 ;
 size_t FUNC_3 (struct g_stripe_softc*) ;
 int FUNC_4 () ;
 size_t FUNC_5 (size_t,size_t) ;

__attribute__((used)) static void
FUNC_6(struct g_stripe_softc *VAR_5)
{
 struct g_provider *VAR_6;
 off_t VAR_7, VAR_8;
 u_int VAR_9, VAR_10 = 0;

 FUNC_4();
 if (FUNC_3(VAR_5) != VAR_5->sc_ndisks)
  return;

 VAR_5->sc_provider = FUNC_2(VAR_5->sc_geom, "stripe/%s",
     VAR_5->sc_name);
 VAR_5->sc_provider->flags |= VAR_2 | VAR_1;
 if (VAR_4 == 0)
  VAR_5->sc_provider->flags |= VAR_0;



 VAR_7 = VAR_5->sc_disks[0]->provider->mediasize;
 if (VAR_5->sc_type == VAR_3)
  VAR_7 -= VAR_5->sc_disks[0]->provider->sectorsize;
 VAR_7 -= VAR_7 % VAR_5->sc_stripesize;
 VAR_10 = VAR_5->sc_disks[0]->provider->sectorsize;
 for (VAR_9 = 1; VAR_9 < VAR_5->sc_ndisks; VAR_9++) {
  VAR_6 = VAR_5->sc_disks[VAR_9]->provider;
  VAR_8 = VAR_6->mediasize;
  if (VAR_5->sc_type == VAR_3)
   VAR_8 -= VAR_6->sectorsize;
  VAR_8 -= VAR_8 % VAR_5->sc_stripesize;
  if (VAR_8 < VAR_7)
   VAR_7 = VAR_8;
  VAR_10 = FUNC_5(VAR_10, VAR_6->sectorsize);


  if ((VAR_6->flags & VAR_0) == 0) {
   FUNC_0(1, "Cancelling unmapped "
       "because of %s.", VAR_6->name);
   VAR_5->sc_provider->flags &= ~VAR_0;
  }
 }
 VAR_5->sc_provider->sectorsize = VAR_10;
 VAR_5->sc_provider->mediasize = VAR_7 * VAR_5->sc_ndisks;
 VAR_5->sc_provider->stripesize = VAR_5->sc_stripesize;
 VAR_5->sc_provider->stripeoffset = 0;
 FUNC_1(VAR_5->sc_provider, 0);

 FUNC_0(0, "Device %s activated.", VAR_5->sc_provider->name);
}
