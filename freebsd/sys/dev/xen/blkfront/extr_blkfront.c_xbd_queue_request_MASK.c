
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_io_dmat; } ;
struct xbd_command {int cm_datalen; int cm_data; int cm_map; int * cm_bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct xbd_command*,int ) ;
 int FUNC_1 (int ,int ,int *,int ,struct xbd_command*,int ) ;
 int FUNC_2 (struct xbd_softc*,struct xbd_command*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct xbd_softc *VAR_3, struct xbd_command *VAR_4)
{
 int VAR_5;

 if (VAR_4->cm_bp != ((void*)0))
  VAR_5 = FUNC_1(VAR_3->xbd_io_dmat, VAR_4->cm_map,
      VAR_4->cm_bp, VAR_2, VAR_4, 0);
 else
  VAR_5 = FUNC_0(VAR_3->xbd_io_dmat, VAR_4->cm_map,
      VAR_4->cm_data, VAR_4->cm_datalen, VAR_2, VAR_4, 0);
 if (VAR_5 == VAR_0) {






  FUNC_2(VAR_3, VAR_4, VAR_1);
  return (0);
 }

 return (VAR_5);
}
