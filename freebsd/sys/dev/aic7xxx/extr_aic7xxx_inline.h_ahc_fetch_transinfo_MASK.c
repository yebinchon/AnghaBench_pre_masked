
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_tmode_tstate {struct ahc_initiator_tinfo* transinfo; } ;
struct ahc_softc {struct ahc_tmode_tstate** enabled_targets; } ;
struct ahc_initiator_tinfo {int dummy; } ;



__attribute__((used)) static __inline struct ahc_initiator_tinfo *
FUNC_0(struct ahc_softc *VAR_0, char VAR_1, u_int VAR_2,
      u_int VAR_3, struct ahc_tmode_tstate **VAR_4)
{






 if (VAR_1 == 'B')
  VAR_2 += 8;
 *VAR_4 = VAR_0->enabled_targets[VAR_2];
 return (&(*VAR_4)->transinfo[VAR_3]);
}
