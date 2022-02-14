
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {struct vtcon_port* vcsp_port; } ;
struct vtcon_softc {struct vtcon_softc_port* vtcon_ports; int vtcon_dev; } ;
struct vtcon_port {int vtcport_id; int vtcport_tty; int vtcport_mtx; struct vtcon_softc_port* vtcport_scport; struct vtcon_softc* vtcport_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vtcon_softc*,int) ;
 int FUNC_2 (struct vtcon_softc*) ;
 int FUNC_3 (struct vtcon_port*) ;
 int FUNC_4 (struct vtcon_port*) ;
 int VAR_6 ;
 int FUNC_5 (struct vtcon_softc*) ;
 int FUNC_6 (int ) ;
 struct vtcon_port* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *,struct vtcon_port*,int *) ;
 int FUNC_10 (int ,int *,char*,int ,int ,int) ;
 int FUNC_11 (struct vtcon_port*) ;
 int FUNC_12 (struct vtcon_port*) ;
 int FUNC_13 (struct vtcon_port*,int ,int) ;
 int FUNC_14 (struct vtcon_port*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_15(struct vtcon_softc *VAR_8, int VAR_9)
{
 device_t VAR_10;
 struct vtcon_softc_port *VAR_11;
 struct vtcon_port *VAR_12;
 int VAR_13;

 VAR_10 = VAR_8->vtcon_dev;
 VAR_11 = &VAR_8->vtcon_ports[VAR_9];

 FUNC_1(VAR_8, VAR_9);
 FUNC_0(VAR_11->vcsp_port == ((void*)0));

 VAR_12 = FUNC_7(sizeof(struct vtcon_port), VAR_2, VAR_3 | VAR_4);
 if (VAR_12 == ((void*)0))
  return (VAR_0);

 VAR_12->vtcport_sc = VAR_8;
 VAR_12->vtcport_scport = VAR_11;
 VAR_12->vtcport_id = VAR_9;
 FUNC_8(&VAR_12->vtcport_mtx, "vtcpmtx", ((void*)0), VAR_1);
 VAR_12->vtcport_tty = FUNC_9(&VAR_7, VAR_12,
     &VAR_12->vtcport_mtx);

 VAR_13 = FUNC_12(VAR_12);
 if (VAR_13) {
  FUNC_3(VAR_12);
  FUNC_14(VAR_12);
  return (VAR_13);
 }

 FUNC_2(VAR_8);
 FUNC_3(VAR_12);
 VAR_11->vcsp_port = VAR_12;
 FUNC_11(VAR_12);
 FUNC_13(VAR_12, VAR_5, 1);
 FUNC_4(VAR_12);
 FUNC_5(VAR_8);

 FUNC_10(VAR_12->vtcport_tty, ((void*)0), "%s%r.%r", VAR_6,
     FUNC_6(VAR_10), VAR_9);

 return (0);
}
