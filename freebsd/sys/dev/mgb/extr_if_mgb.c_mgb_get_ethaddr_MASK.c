
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;
struct ether_addr {int * octet; } ;


 int FUNC_0 (struct mgb_softc*,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct mgb_softc *VAR_2, struct ether_addr *VAR_3)
{

 FUNC_0(VAR_2, VAR_1, &VAR_3->octet[0], 4);
 FUNC_0(VAR_2, VAR_0, &VAR_3->octet[4], 2);
}
