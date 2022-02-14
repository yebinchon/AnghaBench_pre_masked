
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_softc {scalar_t__ sc_md; int sc_lock; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct g_raid_softc *VAR_2, u_int VAR_3)
{
 FUNC_3(&VAR_2->sc_lock, VAR_1);

 FUNC_0(2, VAR_2, "Event %s for the array.",
     FUNC_2(VAR_3));

 if (VAR_3 == VAR_0)
  return (0);
 if (VAR_2->sc_md)
  FUNC_1(VAR_2->sc_md, ((void*)0), VAR_3);
 return (0);
}
