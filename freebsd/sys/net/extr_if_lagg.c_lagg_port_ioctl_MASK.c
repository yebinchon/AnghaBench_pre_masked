
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct lagg_softc {int sc_ifp; } ;
struct lagg_reqport {char* rp_portname; } ;
struct lagg_port {int (* lp_ioctl ) (struct ifnet*,int ,scalar_t__) ;struct lagg_softc* lp_softc; } ;
struct ifnet {scalar_t__ if_type; struct lagg_port* if_lagg; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct lagg_softc*) ;
 int FUNC_3 (struct lagg_softc*) ;



 int FUNC_4 (int ) ;
 struct ifnet* FUNC_5 (char*) ;
 int FUNC_6 (struct lagg_softc*) ;
 int FUNC_7 (struct lagg_port*,struct lagg_reqport*) ;
 int FUNC_8 (struct ifnet*,int ,scalar_t__) ;
 int FUNC_9 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct lagg_reqport *VAR_6 = (struct lagg_reqport *)VAR_5;
 struct lagg_softc *VAR_7;
 struct lagg_port *VAR_8 = ((void*)0);
 int VAR_9 = 0;


 if (VAR_3->if_type != VAR_2 ||
     (VAR_8 = VAR_3->if_lagg) == ((void*)0) || (VAR_7 = VAR_8->lp_softc) == ((void*)0))
  goto fallback;

 switch (VAR_4) {
 case 130:
  if (VAR_6->rp_portname[0] == '\0' ||
      FUNC_5(VAR_6->rp_portname) != VAR_3) {
   VAR_9 = VAR_0;
   break;
  }

  FUNC_0();
  if ((VAR_8 = VAR_3->if_lagg) == ((void*)0) || VAR_8->lp_softc != VAR_7) {
   VAR_9 = VAR_1;
   FUNC_1();
   break;
  }

  FUNC_7(VAR_8, VAR_6);
  FUNC_1();
  break;

 case 129:
  if (VAR_8->lp_ioctl == ((void*)0)) {
   VAR_9 = VAR_0;
   break;
  }
  VAR_9 = (*VAR_8->lp_ioctl)(VAR_3, VAR_4, VAR_5);
  if (VAR_9)
   break;


  FUNC_2(VAR_7);
  FUNC_6(VAR_7);
  FUNC_3(VAR_7);
  FUNC_4(VAR_7->sc_ifp);
  break;

 case 128:

  VAR_9 = VAR_0;
  break;

 default:
  goto fallback;
 }

 return (VAR_9);

fallback:
 if (VAR_8 != ((void*)0) && VAR_8->lp_ioctl != ((void*)0))
  return ((*VAR_8->lp_ioctl)(VAR_3, VAR_4, VAR_5));

 return (VAR_0);
}
