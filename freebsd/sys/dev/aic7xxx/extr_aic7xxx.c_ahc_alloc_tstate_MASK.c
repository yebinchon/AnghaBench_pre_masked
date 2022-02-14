
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ahc_tmode_tstate {TYPE_1__* transinfo; scalar_t__ ultraenb; struct ahc_tmode_tstate* enabled_luns; } ;
struct ahc_softc {size_t our_id; int our_id_b; struct ahc_tmode_tstate** enabled_targets; } ;
struct TYPE_2__ {struct ahc_tmode_tstate goal; struct ahc_tmode_tstate curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct ahc_tmode_tstate*,struct ahc_tmode_tstate*,int) ;
 int FUNC_3 (struct ahc_tmode_tstate*,int ,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct ahc_tmode_tstate *
FUNC_5(struct ahc_softc *VAR_3, u_int VAR_4, char VAR_5)
{
 struct ahc_tmode_tstate *VAR_6;
 struct ahc_tmode_tstate *VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->enabled_targets[VAR_3->our_id];
 if (VAR_5 == 'B') {
  VAR_4 += 8;
  VAR_6 = VAR_3->enabled_targets[VAR_3->our_id_b + 8];
 }
 if (VAR_3->enabled_targets[VAR_4] != ((void*)0)
  && VAR_3->enabled_targets[VAR_4] != VAR_6)
  FUNC_4("%s: ahc_alloc_tstate - Target already allocated",
        FUNC_0(VAR_3));
 VAR_7 = (struct ahc_tmode_tstate*)FUNC_1(sizeof(*VAR_7),
         VAR_1, VAR_2);
 if (VAR_7 == ((void*)0))
  return (((void*)0));







 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_7, VAR_6, sizeof(*VAR_7));
  FUNC_3(VAR_7->enabled_luns, 0, sizeof(VAR_7->enabled_luns));
  VAR_7->ultraenb = 0;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   FUNC_3(&VAR_7->transinfo[VAR_8].curr, 0,
         sizeof(VAR_7->transinfo[VAR_8].curr));
   FUNC_3(&VAR_7->transinfo[VAR_8].goal, 0,
         sizeof(VAR_7->transinfo[VAR_8].goal));
  }
 } else
  FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_3->enabled_targets[VAR_4] = VAR_7;
 return (VAR_7);
}
