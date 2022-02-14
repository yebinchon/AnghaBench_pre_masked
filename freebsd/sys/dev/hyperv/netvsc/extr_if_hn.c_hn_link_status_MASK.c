
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hn_softc {int hn_link_flags; int hn_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hn_softc*,scalar_t__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6) {

  return;
 }

 if (VAR_5 == VAR_3)
  VAR_4->hn_link_flags |= VAR_0;
 else
  VAR_4->hn_link_flags &= ~VAR_0;
 FUNC_1(VAR_4->hn_ifp,
     (VAR_4->hn_link_flags & VAR_0) ?
     VAR_2 : VAR_1);
}
