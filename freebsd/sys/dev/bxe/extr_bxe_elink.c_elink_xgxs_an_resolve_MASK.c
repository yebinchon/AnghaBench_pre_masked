
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_vars {int link_status; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_3,
      struct elink_params *VAR_4,
      struct elink_vars *VAR_5,
      uint32_t VAR_6)
{
 if (VAR_6 & VAR_0)
  VAR_5->link_status |=
   VAR_1;

 if (FUNC_0(VAR_3, VAR_4))
  VAR_5->link_status |=
   VAR_2;
}
