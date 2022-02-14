
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ type; int ntb_ctl; scalar_t__ peer_msix_good; } ;


 int VAR_0 ;
 int FUNC_0 (struct ntb_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct ntb_softc*) ;

__attribute__((used)) static inline bool
FUNC_3(struct ntb_softc *VAR_4)
{

 if (VAR_4->type == VAR_3)
  return (FUNC_2(VAR_4) && (VAR_4->peer_msix_good ||
      !FUNC_0(VAR_4, VAR_2)));

 FUNC_1(VAR_4->type == VAR_1, ("ntb type"));
 return ((VAR_4->ntb_ctl & VAR_0) == 0);
}
