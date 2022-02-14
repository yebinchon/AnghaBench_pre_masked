
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct padctl_softc {int dummy; } ;
struct padctl_lane {int idx; TYPE_1__* pad; int enabled; } ;
typedef enum padctl_pad_type { ____Placeholder_padctl_pad_type } padctl_pad_type ;
struct TYPE_2__ {int type; } ;


 struct padctl_lane* VAR_0 ;
 int FUNC_0 (struct padctl_lane*) ;

__attribute__((used)) static struct padctl_lane *
FUNC_1(struct padctl_softc *VAR_1, enum padctl_pad_type VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (!VAR_0[VAR_4].enabled)
   continue;
  if (VAR_2 == VAR_0[VAR_4].pad->type && VAR_3 == VAR_0[VAR_4].idx)
   return (VAR_0 + VAR_4);
 }
 return (((void*)0));
}
