
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int our_id_b; int our_id; struct ahc_tmode_tstate** enabled_targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_tmode_tstate*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ahc_softc *VAR_2, u_int VAR_3, char VAR_4, int VAR_5)
{
 struct ahc_tmode_tstate *VAR_6;





 if (((VAR_4 == 'B' && VAR_3 == VAR_2->our_id_b)
   || (VAR_4 == 'A' && VAR_3 == VAR_2->our_id))
  && VAR_5 == VAR_0)
  return;

 if (VAR_4 == 'B')
  VAR_3 += 8;
 VAR_6 = VAR_2->enabled_targets[VAR_3];
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_6, VAR_1);
 VAR_2->enabled_targets[VAR_3] = ((void*)0);
}
