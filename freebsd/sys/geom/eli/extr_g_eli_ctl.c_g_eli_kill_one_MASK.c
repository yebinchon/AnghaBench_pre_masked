
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct g_provider {int name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_eli_softc {int sc_flags; TYPE_1__* sc_geom; } ;
struct g_consumer {struct g_provider* provider; } ;
struct TYPE_2__ {int consumer; int provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_2 ;
 void* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct g_eli_softc*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct g_provider*,int ) ;
 int FUNC_7 (struct g_consumer*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int * FUNC_10 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct g_eli_softc *VAR_7)
{
 struct g_provider *VAR_8;
 struct g_consumer *VAR_9;
 int VAR_10 = 0;

 FUNC_8();

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_1(&VAR_7->sc_geom->provider);
 FUNC_6(VAR_8, VAR_1);

 VAR_9 = FUNC_1(&VAR_7->sc_geom->consumer);
 VAR_8 = VAR_9->provider;

 if (VAR_7->sc_flags & VAR_2) {
  FUNC_0(0, "WARNING: Metadata won't be erased on read-only "
      "provider: %s.", VAR_8->name);
 } else {
  u_char *VAR_11;
  u_int VAR_12;
  int VAR_13;

  VAR_11 = FUNC_10(VAR_8->sectorsize, VAR_3, VAR_4);
  for (VAR_12 = 0; VAR_12 <= VAR_6; VAR_12++) {
   if (VAR_12 == VAR_6)
    FUNC_3(VAR_11, VAR_8->sectorsize);
   else
    FUNC_2(VAR_11, VAR_8->sectorsize, 0);
   VAR_13 = FUNC_9(VAR_9, VAR_8->mediasize - VAR_8->sectorsize,
       VAR_11, VAR_8->sectorsize);
   if (VAR_13 != 0) {
    FUNC_0(0, "Cannot erase metadata on %s "
        "(error=%d).", VAR_8->name, VAR_13);
    if (VAR_10 == 0)
     VAR_10 = VAR_13;
   }




   (void)FUNC_7(VAR_9);
  }
  FUNC_4(VAR_11, VAR_3);
 }
 if (VAR_10 == 0)
  FUNC_0(0, "%s has been killed.", VAR_8->name);
 FUNC_5(VAR_7, VAR_5);
 return (VAR_10);
}
