
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ffec_softc {int fectype; int phy_conn_type; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct ffec_softc*,int ) ;
 int FUNC_1 (struct ffec_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ffec_softc *VAR_5)
{
 uint32_t VAR_6;





 switch (VAR_5->fectype)
 {
 case 130:
  break;
 default:
  return;
 }

 switch (VAR_5->phy_conn_type)
 {
 case 129:
  VAR_6 = 0;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 default:
  return;
 }





 FUNC_1(VAR_5, VAR_2, 0);
 while (FUNC_0(VAR_5, VAR_2) & VAR_4)
  continue;

 FUNC_1(VAR_5, VAR_0, VAR_6);

 FUNC_1(VAR_5, VAR_2, VAR_3);
 while (!(FUNC_0(VAR_5, VAR_2) & VAR_4))
  continue;
}
