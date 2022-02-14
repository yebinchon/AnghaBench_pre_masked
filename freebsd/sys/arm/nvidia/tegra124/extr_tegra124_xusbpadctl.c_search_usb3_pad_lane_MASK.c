
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct padctl_softc {int dev; } ;
struct padctl_lane {size_t mux_idx; int name; int * mux; } ;
struct TYPE_3__ {int port_idx; int lane_idx; int pad_type; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 struct padctl_lane* FUNC_2 (struct padctl_softc*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static struct padctl_lane *
FUNC_4(struct padctl_softc *VAR_1, int VAR_2)
{
 int VAR_3;
 struct padctl_lane *VAR_4, *VAR_5;

 VAR_4 = ((void*)0);
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
  if (VAR_2 != VAR_0[VAR_3].port_idx)
   continue;
  VAR_5 = FUNC_2(VAR_1, VAR_0[VAR_3].pad_type,
      VAR_0[VAR_3].lane_idx);
  if (VAR_5 == ((void*)0))
   continue;
  if (FUNC_3(VAR_5->mux[VAR_5->mux_idx], "usb3-ss") != 0)
   continue;
  if (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_1->dev, "Duplicated mappings found for"
    " lanes: %s and %s\n", VAR_4->name, VAR_5->name);
   return (((void*)0));
  }
  VAR_4 = VAR_5;
 }
 return (VAR_4);
}
