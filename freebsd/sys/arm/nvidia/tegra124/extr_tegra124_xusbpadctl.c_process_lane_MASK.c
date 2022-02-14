
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode_init_def {int ofw_node; struct padctl_lane* id; } ;
struct phynode {int dummy; } ;
struct padctl_softc {int dev; } ;
struct padctl_pad {int nlanes; struct padctl_lane** lanes; } ;
struct padctl_lane {int enabled; struct padctl_pad* pad; int mux_idx; } ;
typedef int phy_init ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct phynode_init_def*,int) ;
 int FUNC_3 (struct padctl_softc*,struct padctl_lane*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;
 struct phynode* FUNC_5 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_6 (struct phynode*) ;
 struct padctl_lane* FUNC_7 (struct padctl_softc*,char*) ;
 int FUNC_8 (struct padctl_softc*,struct padctl_lane*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_9(struct padctl_softc *VAR_3, phandle_t VAR_4, struct padctl_pad *VAR_5)
{
 struct padctl_lane *VAR_6;
 struct phynode *VAR_7;
 struct phynode_init_def VAR_8;
 char *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);
 VAR_11 = FUNC_0(VAR_4, "name", (void **)&VAR_9);
 if (VAR_11 <= 0) {
  FUNC_4(VAR_3->dev, "Cannot read lane name.\n");
  return (VAR_0);
 }

 VAR_6 = FUNC_7(VAR_3, VAR_9);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_3->dev, "Unknown lane: %s\n", VAR_9);
  VAR_11 = VAR_0;
  goto end;
 }


 VAR_11 = FUNC_0(VAR_4, "nvidia,function", (void **)&VAR_10);
 if (VAR_11 <= 0) {
  FUNC_4(VAR_3->dev, "Cannot read lane function.\n");
  VAR_11 = VAR_0;
  goto end;
 }

 VAR_6->mux_idx = FUNC_8(VAR_3, VAR_6, VAR_10);
 if (VAR_6->mux_idx == ~0) {
  FUNC_4(VAR_3->dev, "Unknown function %s for lane %s\n",
      VAR_10, VAR_9);
  VAR_11 = VAR_0;
  goto end;
 }

 VAR_11 = FUNC_3(VAR_3, VAR_6);
 if (VAR_11 != 0) {
  FUNC_4(VAR_3->dev, "Cannot configure lane: %s: %d\n",
      VAR_9, VAR_11);
  VAR_11 = VAR_0;
  goto end;
 }
 VAR_6->pad = VAR_5;
 VAR_6->enabled = 1;
 VAR_5->lanes[VAR_5->nlanes++] = VAR_6;


 FUNC_2(&VAR_8, sizeof(VAR_8));
 VAR_8.id = VAR_6 - VAR_1;
 VAR_8.ofw_node = VAR_4;
 VAR_7 = FUNC_5(VAR_3->dev, &VAR_2, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_3->dev, "Cannot create phy\n");
  VAR_11 = VAR_0;
  goto end;
 }
 if (FUNC_6(VAR_7) == ((void*)0)) {
  FUNC_4(VAR_3->dev, "Cannot create phy\n");
  return (VAR_0);
 }

 VAR_11 = 0;

end:
 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_9);
 if (VAR_10 != ((void*)0))
  FUNC_1(VAR_10);
 return (VAR_11);
}
