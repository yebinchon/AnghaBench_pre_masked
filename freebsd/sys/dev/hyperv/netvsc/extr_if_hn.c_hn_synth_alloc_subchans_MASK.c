
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hn_softc {int hn_prichan; int hn_ifp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hn_softc*,int*) ;
 int FUNC_1 (struct hn_softc*,int*) ;
 int FUNC_2 (int ,char*,...) ;
 struct vmbus_channel** FUNC_3 (int ,int) ;
 int FUNC_4 (struct vmbus_channel**,int) ;

__attribute__((used)) static int
FUNC_5(struct hn_softc *VAR_1, int *VAR_2)
{
 struct vmbus_channel **VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = *VAR_2 + 1;
 if (VAR_4 == 1) {



  *VAR_2 = 0;
  return (0);
 }





 VAR_6 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_6) {

  *VAR_2 = 0;
  return (0);
 }
 if (VAR_0) {
  FUNC_2(VAR_1->hn_ifp, "RX rings offered %u, requested %d\n",
      VAR_5, VAR_4);
 }

 if (VAR_4 > VAR_5)
  VAR_4 = VAR_5;
 if (VAR_4 == 1) {
  FUNC_2(VAR_1->hn_ifp, "only 1 channel is supported, no vRSS\n");
  *VAR_2 = 0;
  return (0);
 }




 *VAR_2 = VAR_4 - 1;
 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6 || *VAR_2 == 0) {

  *VAR_2 = 0;
  return (0);
 }




 VAR_3 = FUNC_3(VAR_1->hn_prichan, *VAR_2);
 FUNC_4(VAR_3, *VAR_2);
 return (0);
}
