
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct tuntap_softc {int tun_mtx; TYPE_1__ tun_rsel; struct cdev* tun_dev; struct tuntap_driver* tun_drv; int tun_flags; int tun_cv; } ;
struct tuntap_driver {int cdevsw; int ident_flags; } ;
struct make_dev_args {int mda_mode; int mda_unit; struct tuntap_softc* mda_si_drv1; int mda_gid; int mda_uid; struct ucred* mda_cr; int * mda_devsw; int mda_flags; } ;
struct cdev {int * si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct tuntap_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct tuntap_softc*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct make_dev_args*) ;
 int FUNC_6 (struct make_dev_args*,struct cdev**,char*,char const*) ;
 struct tuntap_softc* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_11(struct tuntap_driver *VAR_10, int VAR_11, struct ucred *VAR_12,
    struct cdev **VAR_13, const char *VAR_14)
{
 struct make_dev_args VAR_15;
 struct tuntap_softc *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_3, VAR_4 | VAR_5);
 FUNC_8(&VAR_16->tun_mtx, "tun_mtx", ((void*)0), VAR_2);
 FUNC_2(&VAR_16->tun_cv, "tun_condvar");
 VAR_16->tun_flags = VAR_10->ident_flags;
 VAR_16->tun_drv = VAR_10;

 FUNC_5(&VAR_15);
 if (VAR_12 != ((void*)0))
  VAR_15.mda_flags = VAR_1;
 VAR_15.mda_devsw = &VAR_10->cdevsw;
 VAR_15.mda_cr = VAR_12;
 VAR_15.mda_uid = VAR_6;
 VAR_15.mda_gid = VAR_0;
 VAR_15.mda_mode = 0600;
 VAR_15.mda_unit = VAR_11;
 VAR_15.mda_si_drv1 = VAR_16;
 VAR_17 = FUNC_6(&VAR_15, VAR_13, "%s", VAR_14);
 if (VAR_17 != 0) {
  FUNC_3(VAR_16, VAR_3);
  return (VAR_17);
 }

 FUNC_0((*VAR_13)->si_drv1 != ((void*)0),
     ("Failed to set si_drv1 at %s creation", VAR_14));
 VAR_16->tun_dev = *VAR_13;
 FUNC_4(&VAR_16->tun_rsel.si_note, &VAR_16->tun_mtx);
 FUNC_9(&VAR_9);
 FUNC_1(&VAR_8, VAR_16, VAR_7);
 FUNC_10(&VAR_9);
 return (0);
}
