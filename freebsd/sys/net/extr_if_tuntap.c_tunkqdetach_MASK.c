
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tuntap_softc {TYPE_1__ tun_rsel; } ;
struct knote {struct tuntap_softc* kn_hook; } ;


 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct tuntap_softc *VAR_1 = VAR_0->kn_hook;

 FUNC_0(&VAR_1->tun_rsel.si_note, VAR_0, 0);
}
