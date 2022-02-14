
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dw_nunres; TYPE_1__* dw_td; } ;
typedef TYPE_2__ dwarf_t ;
struct TYPE_5__ {int td_curvgen; int td_iihash; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int *,int *,int *,int ,TYPE_2__*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(dwarf_t *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6 = 0;

 do {
  VAR_6++;
  VAR_4->dw_nunres = 0;

  (void) FUNC_2(VAR_4->dw_td->td_iihash,
      &VAR_4->dw_td->td_curvgen, ((void*)0), ((void*)0), VAR_1, VAR_4);

  FUNC_0(3, "resolve: pass %d, %u left\n", VAR_6, VAR_4->dw_nunres);

  if ((int) VAR_4->dw_nunres == VAR_5) {
   FUNC_1(VAR_3, "%s: failed to resolve the following "
       "types:\n", VAR_2);

   (void) FUNC_2(VAR_4->dw_td->td_iihash,
       &VAR_4->dw_td->td_curvgen, ((void*)0), ((void*)0),
       VAR_0, VAR_4);

   FUNC_3("failed to resolve types\n");
  }

  VAR_5 = VAR_4->dw_nunres;

 } while (VAR_4->dw_nunres != 0);
}
