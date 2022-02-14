
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
struct bstp_port {int dummy; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int bif_flags; struct bstp_port bif_stp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct bridge_iflist* FUNC_0 (struct bridge_softc*,int ) ;
 int FUNC_1 (struct bstp_port*) ;
 int FUNC_2 (struct bstp_port*) ;
 int FUNC_3 (struct bstp_port*,int) ;
 int FUNC_4 (struct bstp_port*,int) ;
 int FUNC_5 (struct bstp_port*,int) ;
 int FUNC_6 (struct bstp_port*,int) ;

__attribute__((used)) static int
FUNC_7(struct bridge_softc *VAR_9, void *VAR_10)
{
 struct ifbreq *VAR_11 = VAR_10;
 struct bridge_iflist *VAR_12;
 struct bstp_port *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_0(VAR_9, VAR_11->ifbr_ifsname);
 if (VAR_12 == ((void*)0))
  return (VAR_1);
 VAR_13 = &VAR_12->bif_stp;

 if (VAR_11->ifbr_ifsflags & VAR_7)

  return (VAR_0);

 if (VAR_11->ifbr_ifsflags & VAR_8) {
  if ((VAR_12->bif_flags & VAR_8) == 0) {
   VAR_14 = FUNC_2(&VAR_12->bif_stp);
   if (VAR_14)
    return (VAR_14);
  }
 } else {
  if ((VAR_12->bif_flags & VAR_8) != 0)
   FUNC_1(&VAR_12->bif_stp);
 }


 FUNC_5(VAR_13, VAR_11->ifbr_ifsflags & VAR_5 ? 1 : 0);
 FUNC_3(VAR_13, VAR_11->ifbr_ifsflags & VAR_3 ? 1 : 0);
 FUNC_6(VAR_13, VAR_11->ifbr_ifsflags & VAR_6 ? 1 : 0);
 FUNC_4(VAR_13, VAR_11->ifbr_ifsflags & VAR_4 ? 1 : 0);


 VAR_12->bif_flags = VAR_11->ifbr_ifsflags & VAR_2;

 return (0);
}
