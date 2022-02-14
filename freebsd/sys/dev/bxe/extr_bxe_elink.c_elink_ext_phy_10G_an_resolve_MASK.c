
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int link_status; } ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_4,
           struct elink_phy *VAR_5,
           struct elink_vars *VAR_6)
{
 uint16_t VAR_7;
 FUNC_0(VAR_4, VAR_5,
   VAR_2,
   VAR_3, &VAR_7);
 FUNC_0(VAR_4, VAR_5,
   VAR_2,
   VAR_3, &VAR_7);
 if (VAR_7 & (1<<5))
  VAR_6->link_status |= VAR_0;
 if ((VAR_7 & (1<<0)) == 0)
  VAR_6->link_status |= VAR_1;
}
