
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ic_softc {int ic_flags; char* ic_obuf; char* ic_ifbuf; int ic_lock; TYPE_1__* ic_ifp; } ;
struct TYPE_2__ {int if_mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ic_softc*,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ic_softc *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_6 + VAR_0, VAR_3, VAR_4);
 VAR_8 = FUNC_1(VAR_6 + VAR_0, VAR_3, VAR_4);

 FUNC_2(&VAR_5->ic_lock);
 while (VAR_5->ic_flags & VAR_1) {
  VAR_5->ic_flags |= VAR_2;
  FUNC_3(VAR_5, &VAR_5->ic_lock, 0, "icalloc", 0);
  VAR_5->ic_flags &= ~VAR_2;
 }

 FUNC_0(VAR_5->ic_obuf, VAR_3);
 FUNC_0(VAR_5->ic_ifbuf, VAR_3);
 VAR_5->ic_obuf = VAR_7;
 VAR_5->ic_ifbuf = VAR_8;
 VAR_5->ic_ifp->if_mtu = VAR_6;
 FUNC_4(&VAR_5->ic_lock);
}
