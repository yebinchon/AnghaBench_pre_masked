
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwohci_softc {TYPE_2__* it; } ;
struct firewire_comm {int dummy; } ;
struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {TYPE_1__ xferq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fwohci_softc*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct firewire_comm *VAR_6, int VAR_7)
{
 struct fwohci_softc *VAR_8 = (struct fwohci_softc *)VAR_6;

 FUNC_1(VAR_8, FUNC_0(VAR_7),
   VAR_2 | VAR_1);
 FUNC_1(VAR_8, VAR_3, 1 << VAR_7);
 FUNC_1(VAR_8, VAR_4, 1 << VAR_7);

 FUNC_3("fwitxd", VAR_5);
 FUNC_2(&VAR_8->it[VAR_7]);
 VAR_8->it[VAR_7].xferq.flag &= ~VAR_0;
 return 0;
}
