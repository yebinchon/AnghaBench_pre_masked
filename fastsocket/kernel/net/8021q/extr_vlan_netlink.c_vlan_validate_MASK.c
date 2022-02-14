
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct ifla_vlan_flags {int flags; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ifla_vlan_flags*) ;
 struct ifla_vlan_flags* FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_12[], struct nlattr *VAR_13[])
{
 struct ifla_vlan_flags *VAR_14;
 u16 VAR_15;
 int VAR_16;

 if (VAR_12[VAR_4]) {
  if (FUNC_3(VAR_12[VAR_4]) != VAR_3)
   return -VAR_1;
  if (!FUNC_0(FUNC_1(VAR_12[VAR_4])))
   return -VAR_0;
 }

 if (!VAR_13)
  return -VAR_1;

 if (VAR_13[VAR_7]) {
  VAR_15 = FUNC_2(VAR_13[VAR_7]);
  if (VAR_15 >= VAR_11)
   return -VAR_2;
 }
 if (VAR_13[VAR_6]) {
  VAR_14 = FUNC_1(VAR_13[VAR_6]);
  if ((VAR_14->flags & VAR_14->mask) &
      ~(VAR_10 | VAR_9))
   return -VAR_1;
 }

 VAR_16 = FUNC_4(VAR_13[VAR_8]);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_16 = FUNC_4(VAR_13[VAR_5]);
 if (VAR_16 < 0)
  return VAR_16;
 return 0;
}
