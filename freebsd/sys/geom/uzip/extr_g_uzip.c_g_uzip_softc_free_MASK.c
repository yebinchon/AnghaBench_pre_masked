
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_uzip_softc {int wrkthr_flags; struct g_uzip_softc* last_buf; int last_mtx; int queue_mtx; struct g_uzip_softc* toc; TYPE_1__* dcp; int procp; int req_cached; int req_total; } ;
struct g_geom {int name; } ;
struct TYPE_2__ {int (* free ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct g_uzip_softc*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct g_uzip_softc*) ;

__attribute__((used)) static void
FUNC_8(struct g_uzip_softc *VAR_6, struct g_geom *VAR_7)
{

 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_0, ("%s: %d requests, %d cached\n",
      VAR_7->name, VAR_6->req_total, VAR_6->req_cached));
 }

 FUNC_4(&VAR_6->queue_mtx);
 VAR_6->wrkthr_flags |= VAR_2;
 FUNC_7(VAR_6);
 while (!(VAR_6->wrkthr_flags & VAR_1)) {
  FUNC_2(VAR_6->procp, &VAR_6->queue_mtx, VAR_4, "guzfree",
      VAR_5 / 10);
 }
 FUNC_5(&VAR_6->queue_mtx);

 VAR_6->dcp->free(VAR_6->dcp);
 FUNC_1(VAR_6->toc, VAR_3);
 FUNC_3(&VAR_6->queue_mtx);
 FUNC_3(&VAR_6->last_mtx);
 FUNC_1(VAR_6->last_buf, VAR_3);
 FUNC_1(VAR_6, VAR_3);
}
