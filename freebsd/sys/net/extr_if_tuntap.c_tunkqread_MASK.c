
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tuntap_softc {struct cdev* tun_dev; } ;
struct knote {int kn_data; struct tuntap_softc* kn_hook; } ;
struct TYPE_2__ {int ifq_len; } ;
struct ifnet {int if_xname; TYPE_1__ if_snd; } ;
struct cdev {int dummy; } ;


 struct ifnet* FUNC_0 (struct tuntap_softc*) ;
 int FUNC_1 (struct ifnet*,char*,int ,int ,...) ;
 int FUNC_2 (struct cdev*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, long VAR_1)
{
 int VAR_2;
 struct tuntap_softc *VAR_3 = VAR_0->kn_hook;
 struct cdev *VAR_4 = VAR_3->tun_dev;
 struct ifnet *VAR_5 = FUNC_0(VAR_3);

 if ((VAR_0->kn_data = VAR_5->if_snd.ifq_len) > 0) {
  FUNC_1(VAR_5,
      "%s have data in the queue.  Len = %d, minor = %#x\n",
      VAR_5->if_xname, VAR_5->if_snd.ifq_len, FUNC_2(VAR_4));
  VAR_2 = 1;
 } else {
  FUNC_1(VAR_5,
      "%s waiting for data, minor = %#x\n", VAR_5->if_xname,
      FUNC_2(VAR_4));
  VAR_2 = 0;
 }

 return (VAR_2);
}
