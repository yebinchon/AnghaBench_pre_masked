
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {int vcsp_outvq; int vcsp_invq; } ;
struct vtcon_softc {int vtcon_max_ports; int vtcon_flags; struct vtcon_softc_port* vtcon_ports; int vtcon_ctrl_txvq; int vtcon_ctrl_rxvq; int vtcon_dev; } ;
struct vq_alloc_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vq_alloc_info*,int ,int *,...) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vq_alloc_info*,int ) ;
 struct vq_alloc_info* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,int ,int,struct vq_alloc_info*) ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct vtcon_softc *VAR_6)
{
 device_t VAR_7;
 struct vq_alloc_info *VAR_8;
 struct vtcon_softc_port *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_7 = VAR_6->vtcon_dev;

 VAR_13 = VAR_6->vtcon_max_ports * 2;
 if (VAR_6->vtcon_flags & VAR_3)
  VAR_13 += 2;

 VAR_8 = FUNC_3(sizeof(struct vq_alloc_info) * VAR_13, VAR_2, VAR_1);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 for (VAR_10 = 0, VAR_11 = 0, VAR_12 = 0; VAR_10 < VAR_13 / 2; VAR_10++, VAR_11 += 2) {

  if (VAR_10 == 1) {

   FUNC_0(&VAR_8[VAR_11], 0,
       &VAR_4, VAR_6, &VAR_6->vtcon_ctrl_rxvq,
       "%s-control rx", FUNC_1(VAR_7));
   FUNC_0(&VAR_8[VAR_11+1], 0,
       ((void*)0), VAR_6, &VAR_6->vtcon_ctrl_txvq,
       "%s-control tx", FUNC_1(VAR_7));
   continue;
  }

  VAR_9 = &VAR_6->vtcon_ports[VAR_12];

  FUNC_0(&VAR_8[VAR_11], 0, VAR_5,
      VAR_9, &VAR_9->vcsp_invq, "%s-port%d in",
      FUNC_1(VAR_7), VAR_10);
  FUNC_0(&VAR_8[VAR_11+1], 0, ((void*)0),
      ((void*)0), &VAR_9->vcsp_outvq, "%s-port%d out",
      FUNC_1(VAR_7), VAR_10);

  VAR_12++;
 }

 VAR_14 = FUNC_4(VAR_7, 0, VAR_13, VAR_8);
 FUNC_2(VAR_8, VAR_2);

 return (VAR_14);
}
