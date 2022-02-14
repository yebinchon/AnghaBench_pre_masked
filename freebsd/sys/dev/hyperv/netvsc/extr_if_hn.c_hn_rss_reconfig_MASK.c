
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; int hn_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct hn_softc*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct hn_softc *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5);

 if ((VAR_5->hn_flags & VAR_1) == 0)
  return (VAR_0);
 if (VAR_4)
  FUNC_2(VAR_5->hn_ifp, "disable RSS\n");
 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_5->hn_ifp, "RSS disable failed\n");
  return (VAR_6);
 }





 if (VAR_4)
  FUNC_2(VAR_5->hn_ifp, "reconfig RSS\n");
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_5->hn_ifp, "RSS reconfig failed\n");
  return (VAR_6);
 }
 return (0);
}
