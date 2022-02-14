
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tuntap_softc {TYPE_1__ tun_rsel; } ;
struct knote {int kn_filter; struct tuntap_softc* kn_hook; int * kn_fop; } ;
struct ifnet {int if_xname; } ;
struct cdev {struct tuntap_softc* si_drv1; } ;


 int VAR_0 ;


 struct ifnet* FUNC_0 (struct tuntap_softc*) ;
 int FUNC_1 (struct ifnet*,char*,int ,int ) ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (int *,struct knote*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct tuntap_softc *VAR_5 = VAR_3->si_drv1;
 struct ifnet *VAR_6 = FUNC_0(VAR_5);

 switch(VAR_4->kn_filter) {
 case 129:
  FUNC_1(VAR_6, "%s kqfilter: EVFILT_READ, minor = %#x\n",
      VAR_6->if_xname, FUNC_2(VAR_3));
  VAR_4->kn_fop = &VAR_1;
  break;

 case 128:
  FUNC_1(VAR_6, "%s kqfilter: EVFILT_WRITE, minor = %#x\n",
      VAR_6->if_xname, FUNC_2(VAR_3));
  VAR_4->kn_fop = &VAR_2;
  break;

 default:
  FUNC_1(VAR_6, "%s kqfilter: invalid filter, minor = %#x\n",
      VAR_6->if_xname, FUNC_2(VAR_3));
  return(VAR_0);
 }

 VAR_4->kn_hook = VAR_5;
 FUNC_3(&VAR_5->tun_rsel.si_note, VAR_4, 0);

 return (0);
}
