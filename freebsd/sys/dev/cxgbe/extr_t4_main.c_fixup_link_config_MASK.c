
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct link_config {scalar_t__ requested_speed; int supported; scalar_t__ requested_aneg; int requested_fc; int requested_fec; } ;
struct port_info {struct link_config link_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct port_info*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct port_info *VAR_15)
{
 int VAR_16 = 0;
 struct link_config *VAR_17 = &VAR_15->link_cfg;
 uint32_t VAR_18;

 FUNC_1(VAR_15);


 if (VAR_17->requested_speed != 0) {
  VAR_18 = FUNC_2(VAR_17->requested_speed);
  if ((VAR_18 & VAR_17->supported) == 0) {
   VAR_16++;
   VAR_17->requested_speed = 0;
  }
 }


 FUNC_0(VAR_17->requested_aneg == VAR_2 ||
     VAR_17->requested_aneg == VAR_1 ||
     VAR_17->requested_aneg == VAR_0);
 if (VAR_17->requested_aneg == VAR_2 &&
     !(VAR_17->supported & VAR_6)) {
  VAR_16++;
  VAR_17->requested_aneg = VAR_0;
 }


 FUNC_0((VAR_17->requested_fc & ~(VAR_14 | VAR_13 | VAR_12)) == 0);
 if (VAR_17->requested_fc & VAR_14 &&
     !(VAR_17->supported & VAR_8)) {
  VAR_16++;
  VAR_17->requested_fc &= ~VAR_14;
 }
 if (VAR_17->requested_fc & VAR_13 &&
     !(VAR_17->supported & VAR_7)) {
  VAR_16++;
  VAR_17->requested_fc &= ~VAR_13;
 }
 if (!(VAR_17->requested_fc & VAR_12) &&
     !(VAR_17->supported & VAR_11)) {
  VAR_16++;
  VAR_17->requested_fc |= VAR_12;
 }


 if ((VAR_17->requested_fec & VAR_5 &&
     !(VAR_17->supported & VAR_10)) ||
     (VAR_17->requested_fec & VAR_4 &&
     !(VAR_17->supported & VAR_9))) {
  VAR_16++;
  VAR_17->requested_fec = VAR_3;
 }

 return (VAR_16);
}
