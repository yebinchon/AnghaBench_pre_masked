
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct unpcb {int unp_refcount; scalar_t__ unp_ino; scalar_t__ unp_gencnt; int unp_flags; struct socket* unp_socket; int unp_refs; } ;
struct thread {int dummy; } ;
struct TYPE_4__ {scalar_t__ sb_hiwat; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; } ;
struct socket {int so_type; int * so_listen; struct unpcb* so_pcb; TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct unpcb*,int ) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct unpcb*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct socket*,int ,int ) ;
 struct unpcb* FUNC_9 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_18, int VAR_19, struct thread *VAR_20)
{
 u_long VAR_21, VAR_22;
 struct unpcb *VAR_23;
 int VAR_24;
 bool VAR_25;

 FUNC_0(VAR_18->so_pcb == ((void*)0), ("uipc_attach: so_pcb != NULL"));
 if (VAR_18->so_snd.sb_hiwat == 0 || VAR_18->so_rcv.sb_hiwat == 0) {
  switch (VAR_18->so_type) {
  case 128:
   VAR_21 = VAR_17;
   VAR_22 = VAR_16;
   break;

  case 130:
   VAR_21 = VAR_13;
   VAR_22 = VAR_12;
   break;

  case 129:
   VAR_21 = VAR_15;
   VAR_22 = VAR_14;
   break;

  default:
   FUNC_7("uipc_attach");
  }
  VAR_24 = FUNC_8(VAR_18, VAR_21, VAR_22);
  if (VAR_24)
   return (VAR_24);
 }
 VAR_23 = FUNC_9(VAR_11, VAR_1 | VAR_2);
 if (VAR_23 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_23->unp_refs);
 FUNC_6(VAR_23);
 VAR_23->unp_socket = VAR_18;
 VAR_18->so_pcb = VAR_23;
 VAR_23->unp_refcount = 1;
 if (VAR_18->so_listen != ((void*)0))
  VAR_23->unp_flags |= VAR_3;

 if ((VAR_25 = FUNC_4()) == 0)
  FUNC_3();

 VAR_23->unp_gencnt = ++VAR_6;
 VAR_23->unp_ino = ++VAR_7;
 VAR_4++;
 switch (VAR_18->so_type) {
 case 128:
  FUNC_2(&VAR_9, VAR_23, VAR_8);
  break;

 case 130:
  FUNC_2(&VAR_5, VAR_23, VAR_8);
  break;

 case 129:
  FUNC_2(&VAR_10, VAR_23, VAR_8);
  break;

 default:
  FUNC_7("uipc_attach");
 }

 if (VAR_25 == 0)
  FUNC_5();

 return (0);
}
