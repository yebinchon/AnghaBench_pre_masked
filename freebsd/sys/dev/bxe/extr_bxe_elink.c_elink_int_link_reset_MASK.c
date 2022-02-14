
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_phy {int dummy; } ;
struct elink_params {int port; int sc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_2,
     struct elink_params *VAR_3)
{

 FUNC_0(VAR_3->sc, VAR_0 + VAR_1,
        (0x1ff << (VAR_3->port*16)));
}
