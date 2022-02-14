
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int bo_bsize; struct vnode* bo_private; int bo_ops; } ;
struct vnode {int flags; struct vnode* private; int v_rdev; struct bufobj v_bufobj; } ;
struct g_vfs_softc {struct bufobj* sc_bo; int sc_mtx; } ;
struct g_provider {int sectorsize; int mediasize; int name; } ;
struct g_geom {struct g_vfs_softc* softc; } ;
struct g_consumer {int flags; struct g_consumer* private; int v_rdev; struct bufobj v_bufobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vnode*,int,int,int) ;
 int FUNC_1 (struct vnode*,struct g_provider*) ;
 struct g_provider* FUNC_2 (int ) ;
 struct g_vfs_softc* FUNC_3 (int,int) ;
 struct vnode* FUNC_4 (struct g_geom*) ;
 struct g_geom* FUNC_5 (int *,char*,char const*,int ) ;
 int FUNC_6 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct g_geom*,int ) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (struct vnode*,int ,int ) ;

int
FUNC_10(struct vnode *VAR_11, struct g_consumer **VAR_12, const char *VAR_13, int VAR_14)
{
 struct g_geom *VAR_15;
 struct g_provider *VAR_16;
 struct g_consumer *VAR_17;
 struct g_vfs_softc *VAR_18;
 struct bufobj *VAR_19;
 int VAR_20;

 FUNC_6();

 *VAR_12 = ((void*)0);
 VAR_19 = &VAR_11->v_bufobj;
 if (VAR_19->bo_private != VAR_11)
  return (VAR_0);

 VAR_16 = FUNC_2(VAR_11->v_rdev);
 if (VAR_16 == ((void*)0))
  return (VAR_1);
 VAR_15 = FUNC_5(&VAR_10, "%s.%s", VAR_13, VAR_16->name);
 VAR_18 = FUNC_3(sizeof(*VAR_18), VAR_6 | VAR_7);
 FUNC_8(&VAR_18->sc_mtx, "g_vfs", ((void*)0), VAR_5);
 VAR_18->sc_bo = VAR_19;
 VAR_15->softc = VAR_18;
 VAR_17 = FUNC_4(VAR_15);
 FUNC_1(VAR_17, VAR_16);
 VAR_20 = FUNC_0(VAR_17, 1, VAR_14, VAR_14);
 if (VAR_20) {
  FUNC_7(VAR_15, VAR_2);
  return (VAR_20);
 }
 FUNC_9(VAR_11, VAR_16->mediasize, VAR_8);
 *VAR_12 = VAR_17;
 VAR_17->private = VAR_11;
 VAR_17->flags |= VAR_4 | VAR_3;
 VAR_19->bo_ops = VAR_9;
 VAR_19->bo_private = VAR_17;
 VAR_19->bo_bsize = VAR_16->sectorsize;

 return (VAR_20);
}
