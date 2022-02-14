
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_max_requests; int xbd_max_request_indirectpages; int xen_intr_handle; int xbd_io_dmat; struct xbd_command* xbd_shadow; int xbd_io_lock; int xbd_state; } ;
struct xbd_command {int cm_map; int * cm_indirectionpages; int * cm_indirectionrefs; struct xbd_command* cm_sg_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct xbd_command*,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xbd_softc*) ;
 int FUNC_8 (struct xbd_softc*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct xbd_softc *VAR_6)
{
 int VAR_7;


 FUNC_5(&VAR_6->xbd_io_lock);
 VAR_6->xbd_state = VAR_5;
 FUNC_6(&VAR_6->xbd_io_lock);


 FUNC_7(VAR_6);
 if (VAR_6->xbd_shadow) {

  for (VAR_7 = 0; VAR_7 < VAR_6->xbd_max_requests; VAR_7++) {
   struct xbd_command *VAR_8;

   VAR_8 = &VAR_6->xbd_shadow[VAR_7];
   if (VAR_8->cm_sg_refs != ((void*)0)) {
    FUNC_3(VAR_8->cm_sg_refs, VAR_0);
    VAR_8->cm_sg_refs = ((void*)0);
   }

   if (VAR_8->cm_indirectionpages != ((void*)0)) {
    FUNC_4(
        VAR_6->xbd_max_request_indirectpages,
        &VAR_8->cm_indirectionrefs[0]);
    FUNC_2(VAR_8->cm_indirectionpages, VAR_1 *
        VAR_6->xbd_max_request_indirectpages,
        VAR_0);
    VAR_8->cm_indirectionpages = ((void*)0);
   }

   FUNC_1(VAR_6->xbd_io_dmat, VAR_8->cm_map);
  }
  FUNC_3(VAR_6->xbd_shadow, VAR_0);
  VAR_6->xbd_shadow = ((void*)0);

  FUNC_0(VAR_6->xbd_io_dmat);

  FUNC_8(VAR_6, VAR_3);
  FUNC_8(VAR_6, VAR_4);
  FUNC_8(VAR_6, VAR_2);
 }

 FUNC_9(&VAR_6->xen_intr_handle);

}
