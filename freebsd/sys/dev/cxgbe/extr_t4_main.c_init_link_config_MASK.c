
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int requested_fc; int requested_fec; int requested_aneg; scalar_t__ requested_speed; } ;
struct port_info {struct link_config link_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct port_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_1(struct port_info *VAR_13)
{
 struct link_config *VAR_14 = &VAR_13->link_cfg;

 FUNC_0(VAR_13);

 VAR_14->requested_speed = 0;

 if (VAR_10 == 0)
  VAR_14->requested_aneg = VAR_1;
 else if (VAR_10 == 1)
  VAR_14->requested_aneg = VAR_2;
 else
  VAR_14->requested_aneg = VAR_0;

 VAR_14->requested_fc = VAR_12 & (VAR_9 | VAR_8 |
     VAR_7);

 if (VAR_11 == -1 || VAR_11 & VAR_3)
  VAR_14->requested_fec = VAR_3;
 else {
  VAR_14->requested_fec = VAR_5;
  if (VAR_11 & VAR_6)
   VAR_14->requested_fec |= VAR_6;
  if (VAR_11 & VAR_4)
   VAR_14->requested_fec |= VAR_4;
 }
}
